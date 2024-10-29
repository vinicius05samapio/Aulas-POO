//Exemplo 01: programa que demonstra como criar uma classe com um método

#include <iostream>

using namespace std;

// definição da classe GradeBook
class GradeBook {

    public:

        //Função que exibe uma mensagem de boas-vindas para o usuário
        void displayMessage() const {
            cout << "Welcome to the Grade Book!" << endl;
            }

    };

//função principal
int main() {

    cout << "\n";
    cout << ">> Grade Book\n\n";

    //Cria um Objeto GradeBook chamado myGradeBook
    GradeBook myGradeBook;

    //executa a função displayMessage()
    myGradeBook.displayMessage();

    //fim do programa
    cout << endl;
    return 0;

}
