#include <iostream>

template < typename T> // пример шаблона класса
class Calculator{
public:
    T add(T a, T b) {
        return a + b;
    }

    T subtrect(T a, T b) {
        return a - b;
    }

    T multiply(T a, T b) {
        return a * b;
    }

    T divide(T a, T b) {
        if (b == 0) {
            std::cout << "Error: Division by zero!" << std::endl;
            return 0;
        }
        return a / b;
    }
};

int main()
{
    std::cout << "\t class template\n\n";
    Calculator<int> intCalculator;
    std::cout << intCalculator.add(5,8)              << std::endl;
    std:: cout << intCalculator.subtrect(5, 8)       << std::endl;

    Calculator<float> floatCalculator;
    std::cout << floatCalculator.add(5.2, 7.84)      << std::endl;
    std::cout << floatCalculator.subtrect(5.2, 7.84) << std::endl;
    std::cout << floatCalculator.multiply(5.2, 7.84) << std::endl;
    std::cout << floatCalculator.divide(5.2, 7.84)   << std::endl;
    std::cin.get();
}
