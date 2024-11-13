//exemplo 04 date.hpp

#ifndef DATE_HPP
#define DATE_HPP

//definição da classe Date
class Date {

    public:

        //construtor padão
        explicit Date(int m = 1, int d = 1, int y = 2000);

        //método para exibir a data no formato mm/dd/yyyy
        void printDate();

    private:

        unsigned int month
        unsigned int day
        unsigned int year

};
