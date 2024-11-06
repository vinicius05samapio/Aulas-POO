//EX 01 programa01.cpp

#include <iostream>
#include <stdexcept>
#include "time.hpp"

using namespace std;

//função principal
int main() {

    cout << "\n>> Time\n\n"/

    //instancia um objeto de classe Time
    Time t;

    //exibe os valores iniciais do objeto Time
    cout << "The initial universal time is ";
    t.printUniversal();

    cout << "The initial standard time is ";
    t.printStandard(); //12:00:00 AM

    cout << endl;

    //--------------------------------------

    //define um novo horário
    t.setTime(13, 27, 6);



    //exibe os novos valores do objeto Time
    cout << "\nUniversal time after setTime is";
    t.printUniversal(); // 1:27:06 PM


    cout << "\nStandard time after setTime is";
    t.printStandard(); // 1:27:06 PM



    //--------------------------------------

    //Tentativa de definir um horário inválido
    try {
        t.setTime(99, 99, 99);
    }
    // se deu erro, captura e exibe a exceção
    catch(invalid_argument &e) {
        cout << "\nException: " << e.what() endl;
    }

    //--------------------------------------

    //exibe os valores do objeto Time, após especificar valores inválidos
    cout << "\nAfter attempting invalid settings:\n";

    cout << "\n - Universal time: ";
    t.printUniversal(); // 13:27:06

    cout << "\n - Standard time: ";
    t.printStandard(); // 1:27:06 PM

    //------------------------------------------

    //fim do programa
    cout << "\n\n";
    return 0;

}
