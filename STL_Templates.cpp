#include <iostream>
using namespace std;

template < typename T> //имя типа"Т"
T add(T a, T b) {      //универсальная шаблонная ф--ция
    return a + b;
}

int main()
{
    cout << add(5, 7) << endl;        //вывод шаблонной ф--ции int
    cout << add(5.4, 7.6) << endl;    //вывод шаблонной ф--ции float
    cin.get();
}
