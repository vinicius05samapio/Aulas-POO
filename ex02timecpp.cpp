//exemplo 02: time.cpp

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "time.hpp"

using namespace std;

//implementação dos métodos da classe Time




//setters

//configura o valor de Time utilizando a hora universal, assegurando que os
//dados permaneçam consistentes configurando valores inválidos como zero
void Time::setTime(int h, int m, int s) {

    setHour(h)
    setMinute(m)
    setSecond(s)

}

//---------------------------------

//configura o valor das horas
void Time::setHour(int h) {

    //se o argumento gor válido, configura as horas
    if (h >= 0 && h < 24)
        hour = h;
    //caso contrário, lança um exceção de argumento inválido
    else
        throw invalid_argument("hour must be 0-23!");
}

//--------------------------------

//configura o valor dos minutis
void Time::setMinute(int m) {

    //se o argumento for válido, configura os minutos
    if (m >= 0 && m < 60)
        minute = m;
    //caso contrário, lança um exceção de argumento inválido
    else
        throw invalid_argument("minute must be 0-59!");

}

//--------------------------------

//configura o valor dos segundos
void Time::setSecond(int s) {

    //se o argumento for válido, configura os segundos
    if (s >= 0 && s < 60)
        second = s;
    //caso contrário, lança um exceção de argumento inválido
    else
        throw invalid_argument("second must be 0-59!");

}

//------------------------------------

//getters

//retorna o valor das horas
unsigned int Time::getHour() const {
    return hour;
}

//retorna o valor dos minutos
unsigned int Time::getMinute() const {
    return minute;
}

//retorna o valor dos segundos
unsigned int Time::getSecond() const {
    return second;
}

//--------------------------------------



