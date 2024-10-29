//Exemplo 03: programa que demonstra o uso de atributos, getters e setters

#include <iostream>
#include <string>

using namespace std;

// definição da classe GradeBook
class GradeBook {

    public:

        //Método Setter, para configurar o nome do curso
        void setCourseName(string name) {
            courseName = name;
            }

        //Método Getter. para obter o nome do curso
        string getCourseName() const {
            return courseName;
            }
        //------------------------------------------
        //fução que exibe uma mensagem de boas-vindas para o usuário
        //utiliza o método getCourseName() para obter o nome do curso
        void displayMessage() const {
            cout << "Welcome to the Grade Book for " << getCourseName() << "!" << endl;
        }
    private:
        //atributo que armazena o nome do curso
        string courseName;
    };

//função principal
int main() {

    cout << "\n";
    cout << ">> Grade Book\n\n";

    //Variável para armazenar o nome do curso
    string nameOfCourse;

    //Cria um Objeto GradeBook chamado myGradeBook
    GradeBook myGradeBook;

    //exibe o valor inicial do atributo courseName
    cout << "* Initial course name is: " << myGradeBook.getCourseName() << endl;
    cout << endl;


    //--------------------------------------------------------------------------

    //Emtrada do nome do curso
    cout << "* Please entre the course name: ";
    getline(cin, nameOfCourse);

    //configura o nome do curso
    myGradeBook.setCourseName(nameOfCourse);
    cout << endl;

    //exibe a mensagem com o novo nome do curso
    myGradeBook.displayMessage();

    //fim do programa
    cout << endl;
    return 0;

}

