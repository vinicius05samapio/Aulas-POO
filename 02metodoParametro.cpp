//Exemplo 01: programa que demonstra como criar um método com parâmetro

#include <iostream>
#include <string>

using namespace std;

// definição da classe GradeBook
class GradeBook {

    public:

        //Função que exibe uma mensagem de boas-vindas para o usuário
        void displayMessage(string courseName) const {
            cout << "Welcome to the Grade Book for " << courseName << "!" <<endl;
            }

    };

//função principal
int main() {

    cout << "\n";
    cout << ">> Grade Book\n\n";

    //Variável para armazenar o nome do curso
    string nameOfCourse;

    //Cria um Objeto GradeBook chamado myGradeBook
    GradeBook myGradeBook;

    //Emtrada do nome do curso
    cout << "* Please entre the course name: ";
    getline(cin, nameOfCourse);
    cout << endl;

    //executa a função displayMessage()
    //passa nameOfCourse como um argmento
    myGradeBook.displayMessage(nameOfCourse);

    //fim do programa
    cout << endl;
    return 0;

}
