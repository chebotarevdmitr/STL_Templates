#include <iostream>
using namespace std;
int addInt(int a, int b) {
    return a + b;
}

float addFloat(float a, float b) {
    return a + b;
}

template < typename T>
T addFloat(T a, T b) {
    return a + b;
}

int main()
{
    cout << addInt(5, 7) << endl;
    cout << addFloat(5.3, 7.7) << endl;
    cin.get();
}
