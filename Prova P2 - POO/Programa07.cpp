#include <raylib.h>
#include "player.hpp"
#include "enemy.hpp"
#include "item.hpp"
#include <vector>
#include <memory>
#include <algorithm>

using namespace std;

const char *appDir = GetApplicationDirectory();

int main() {
    InitWindow(800, 600, "Prova P2");
    InitAudioDevice();

    float deltaTime;
    SetTargetFPS(60);

    Player player;
    vector<unique_ptr<Enemy>> enemies;
    for (int i = 0; i < 10; i++)
        enemies.emplace_back(make_unique<Enemy>());

    vector<unique_ptr<Item>> items;
    for (int i = 0; i < 5; i++)
        items.emplace_back(make_unique<Item>());

    Music music = LoadMusicStream(TextFormat("%s/assets/musicas/musica.mp3", appDir));
    PlayMusicStream(music);

    int score = 0;

    while (!WindowShouldClose()) {
        UpdateMusicStream(music);
        deltaTime = GetFrameTime();

        player.Update(deltaTime);
        for (auto& enemy : enemies) enemy->Update(deltaTime);
        items.erase(remove_if(items.begin(), items.end(),
            [&](const unique_ptr<Item>& item) {
                if (item->checkCollision(player)) {
                    score += item->getScoreValue();
                    return true;
                }
                return false;
            }),
            items.end()
        );

        enemies.erase(remove_if(enemies.begin(), enemies.end(),
            [&](const unique_ptr<Enemy>& enemy) {
                if (enemy->checkCollision(player)) {
                    player.takeDamage(10);
                    return true;
                }
                return false;
            }),
            enemies.end()
        );

        BeginDrawing();
        ClearBackground(BLACK);

        player.Draw();
        for (const auto& enemy : enemies) enemy->Draw();
        for (const auto& item : items) item->Draw();

        DrawText(TextFormat("Enemies: %d", Enemy::getEnemyCount()), GetScreenWidth() - 150, 20, 22, WHITE);
        DrawText(TextFormat("Health: %d %%", player.getHealth()), GetScreenWidth() - 150, 50, 22, WHITE);
        DrawText(TextFormat("Score: %d", score), GetScreenWidth() - 150, 80, 22, GREEN);

        EndDrawing();
    }

    UnloadMusicStream(music);
    CloseAudioDevice();
    CloseWindow();
    return 0;
}
