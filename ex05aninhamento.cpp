//exemplo 05: : programa para demonstrar o uso de aninhamento de estruturas

#include <iostream>
#include <vector>

using namespace std;

//estruturas

//definição da estrutura Pokemon
struct Pokemon {

    //Atributos
    string nome;
    string tipo;
    int nivel;
    int hp;

    //método para aumentar os pontos de vida do Pokémon
    void aumentaHP(int pontos) {
        hp += pontos;
    }

};

//------------------------------------------------------------------------

//definição da estrutura treinador
struct Treinador {

    //atributos
    string nome;
    string cidade;

    //vetor para armazenar os Pokémons
    vector<Pokemon> pokemons;

};

//função principal
int main() {

    cout << endl;
    cout << "* Exemplo de Aninhamento de Estruturas\n\n";

    //Cria o treinador
    Treinador treinador;

    treinador.nome = "Ash Ketchum";
    treinador.cidade = "Pallet Town";

    //---------------------------------------------------------------------

    //Cria o Pikachu
    Pokemon pikachu;

    pikachu.nome = "Pikachu";
    pikachu.tipo = "Eletrico";
    pikachu.nivel = 40;
    pikachu.hp = 85;

    //Cria o Greninja
    Pokemon greninja;

    greninja.nome = "Greninja";
    greninja.tipo = "Agua / Sombrio";
    greninja.nivel = 35;
    greninja.hp = 60;

    //Cria o Hawlucha
    Pokemon hawlucha;

    hawlucha.nome = "Hawlucha";
    hawlucha.tipo = "Lutador / Voador";
    hawlucha.nivel = 32;
    hawlucha.hp = 55;

    //--------------------------------------------------------------------

    //Adiciona os Pokémons ao treinador
    treinador.pokemons.push_back(pikachu);
    treinador.pokemons.push_back(greninja);
    treinador.pokemons.push_back(hawlucha);

    //--------------------------------------------------------------------

    //Exibindo os dados do treinador e de seus Pokémons

    cout << ">> Dados do Treinador\n" << endl;
    cout << "Nome: " << treinador.nome << endl;
    cout << "Cidade: " << treinador.cidade << "\n\n";

    cout << ">> Pokemons do Treinador\n" << endl;

    //Loop para exibir os dados dos Pokémons
    for (int i = 0; i < treinador.pokemons.size(); i++) {
        cout << "Nome: " << treinador.pokemons[i].nome << endl;
        cout << "Tipo: " << treinador.pokemons[i].tipo << endl;
        cout << "Nivel: " << treinador.pokemons[i].nivel << endl;
        cout << "HP: " << treinador.pokemons[i].hp << endl;
        cout << endl;
    }

    //------------------------------------------------------------------

    //FIM DO PROGRAMA
    return 0;

}
