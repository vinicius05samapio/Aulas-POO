//exemplo 02: time.hpp

#ifndef TIME_HPP
#define TIME_HPP

//Definição da classe Time
class Time {

    public:

        //Construtor padrão
        explicit Time(int hour = 0, int minute = 0, int second = 0);

        //setters
        void setTime(int hour, int minute, int second); //define hora, minuto e segundos
        void setHour (int hour);        //define as horas, depois da validação
        void setMinute (int minute);    //define os minutos, depois da validação
        void setSecond (int second);    //define os segundos, depois da validação

        //constructor padrão
        explicit Time(int hour = 0, int minute = 0)
};
