//exemplo 04 date.cpp

#include <iostream>
#include "ex04datehpp.cpp"

using namespace std;

//-----------------------------------------------------------

//implementação dos métodos da classe Date

//construtor personalzado
Date::Date(int m, int d, int y) : month(m), day(d), year(y) {}

//-----------------------------------------------------------

//método para exibir a data no formato mm/dd/yyyy

void Date::printDate() {

    cout << month << "/" << day << "/" << year/

}
