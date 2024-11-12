//exeplo02: programa02.cpp

#include <iostream>
#include <stdexcept>
#include "ex02timehpp.cpp"


int main() {

    cout << "\n>> Time \n\n";

    // Instanciamento de vários objetos

    Time t1; // Todos os argumentos são convertidos para sua configuração padrãp
    Time t2(2); //Especifica hora e converte os minutos e segundos para a configuração padrão
    Time t3(21, 34); //Especifica hora e minutos, converte os segundos para a configurçaõ padrão
    Time t4(12, 25, 42); // Especifica hora, minutos e segundso

    //---------------------------------------------------------------------

    cout << "Constructed with: \n\n";

    cout << "T1: todos os argumentos default\n\n";
    t1.printUniversal();
    cout << "\n    ";
    t1.printStandard();

    cout << "\n\n";

    //objeto T2
    cout << "  * t2: hour especified, minute and second defaulted\n    ";
    t2.printUniversal();
    cout << "\n    ";
    t2.printStandard();

    cout << "\n\n";

    //objeto T3
    cout << "  * t3: hour especified, minute specified, second defaulted\n    ";
    t3.printUniversal();
    cout << "\n    ";
    t3.printStandard();

    cout << "\n\n";

    //objeto T4
    cout << "  * t4: hour, minute and second specified\n    ";
    t4.printUniversal();
    cout << "\n    ";
    t4.printStandard();

    cout << "\n\n";

    //Tentativa de inicializar t5 com valores inválidos
    try {
        Time t5(27, 74, 99); //Especifica valores inválidos
    }
    // Se deu erro, captura e exibe a exceção
    catch(invalid_argument &e) {
        cerr << "  * Exception while initializing t5: " << e.what() << endl;
    }

    //fim

    cout << "\n\n";

    return 0;
}
