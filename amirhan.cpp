#include <iostream>
#include <string>

int main() {
    std::string binaryStr;
    std::cout << "Введите двоичное число: ";
    std::cin >> binaryStr;

    try {
        int decimalNum = std::stoi(binaryStr, nullptr, 2);
        std::cout << "Десятичное значение: " << decimalNum << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Ошибка: введено неверное двоичное число." << std::endl;
    }

    return 0;
}