#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string inverseToTwoComplement(string binary) {
    // Идем с конца строки (младший разряд)
    int carry = 1; 
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1' && carry == 1) {
            binary[i] = '0';
            carry = 1; // перенос единицы дальше
        } else if (binary[i] == '0' && carry == 1) {
            binary[i] = '1';
            carry = 0; // перенос закончился
            break;     // дальше можно не идти
        }
    }
    return binary;
}

int main() {
    setlocale(LC_ALL, "Russian");
    string reverseCode;

    cout << "Введите обратный двоичный код: ";
    cin >> reverseCode;

    // Проверка на корректность ввода
    for (char c : reverseCode) {
        if (c != '0' && c != '1') {
            cout << "Ошибка: ввод должен состоять только из 0 и 1." << endl;
            return 1;
        }
    }

    string complementCode = inverseToTwoComplement(reverseCode);

    cout << "Дополнительный код: " << complementCode << endl;

    return 0;
}