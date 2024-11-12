//exemplo 01: time.cpp

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "time.hpp"

using namespace std;

//--------------------------------------------------------

//implementação dos métodos da classe time

//construtor
//assegura que todos os objetos Time iniciem em um estado consistente
Time::Time() : hour(0), minute(0), second(0) {}

//--------------------------------------------------------

//método Setter, para configurar o valor de Time utilizando a hora universal
//Assegura que os dados permaneçam consistentes configurando valores inválidos
//como zero
void Time::setTime(int h, int m, int s) {

    //se os argumentos forem válidos, configura os valores
    if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)) {
        hour = h;
        minute = m;
        second = s;
    }

    //caso contrário, lança um exceção de argumento inválido
    else
        throw invalid_argument("hour, minute and/or second was out of range!");

}

//------------------------------------------------------------

//método que exibe a hora em formato universal (HH:MM:SS)
void Time::printUniversal() const {

    cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;

}

//---------------------------------------------------------------

//método que exibe a hora em formato padrão (HH:MM:SS AM ou PM)
void Time::printStandard() const {

    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? " AM" : " PM");

}

