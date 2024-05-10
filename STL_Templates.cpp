#include <iostream>
#include <stdexcept> // Для std::runtime_error

template <typename T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }

    T subtract(T a, T b) { // Исправлена опечатка
        return a - b;
    }

    T multiply(T a, T b) {
        return a * b;
    }

    T divide(T a, T b) {
        if (b == 0) {
            throw std::runtime_error("Error: Division by zero!"); // Бросаем исключение
        }
        return a / b;
    }
};

int main() {
    std::cout << "\tClass template\n\n";
    Calculator<int> intCalculator;
    std::cout << intCalculator.add(5, 8) << std::endl;
    std::cout << intCalculator.subtract(5, 8) << std::endl; // Исправлена опечатка

    Calculator<float> floatCalculator;
    std::cout << floatCalculator.add(5.2f, 7.84f) << std::endl;
    std::cout << floatCalculator.subtract(5.2f, 7.84f) << std::endl;
    std::cout << floatCalculator.multiply(5.2f, 7.84f) << std::endl;
    try {
        std::cout << floatCalculator.divide(5.2f, 0.0f) << std::endl; // Добавлена обработка исключения
    }
    catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    // std::cin.get(); // Убрано для совместимости с разными средами
    return 0;
}
/*
  Строка std::cerr << e.what() << std::endl; используется в C++ для вывода сообщения об ошибке в стандартный поток ошибок std::cerr. В данном контексте она используется в блоке обработки исключений для вывода сообщения, связанного с исключением, которое было перехвачено.

Компоненты этой строки:

- std::cerr: Это стандартный поток ошибок в C++, который обычно используется для вывода сообщений об ошибках. Вывод в std::cerr отображается в консоли так же, как и вывод в std::cout, но std::cerr не буферизуется и предназначен для немедленного вывода сообщений об ошибках.

- e.what(): Это метод класса std::exception (и его подклассов), который возвращает строку с описанием исключения. В данном случае e — это объект исключения, который был перехвачен с помощью блока catch. Метод what() используется для получения информации о том, что именно пошло не так.

- << std::endl: Оператор << используется для передачи данных в поток, а std::endl — это манипулятор потока, который вставляет символ новой строки и сбрасывает буфер потока, что приводит к немедленному выводу содержимого потока.

Использование std::cerr вместо std::cout для сообщений об ошибках является хорошей практикой, так как это позволяет перенаправить вывод ошибок отдельно от стандартного вывода, если это необходимо при запуске программы из командной строки.
*/