#include <iostream>
using namespace std;
int addInt(int a, int b) {
    return a + b;
}

float addFloat(float a, float b) {
    return a + b;
}

template < typename T> //имя типа"Т"
T add(T a, T b) {      //универсальная шаблонная ф--ция
    return a + b;
}

int main()
{
    cout << addInt(5, 7) << endl;
    cout << addFloat(5.3, 7.7) << endl;
    cout << add(5, 7) << endl;        //вывод шаблонной ф--ции int
    cout << add(5.4, 7.6) << endl;    //вывод шаблонной ф--ции float
    cin.get();
}
