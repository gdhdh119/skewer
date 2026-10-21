#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string inverseToTwoComplement(string binary) {

    int carry = 1; 
    for (int i = binary.length() - 1; i >= 0; i--) 
    {
        if (binary[i] == '1' && carry == 1) {
            binary[i] = '0';
            carry = 1;
        } else if (binary[i] == '0' && carry == 1) {
            binary[i] = '1';
            carry = 0;
            break;
        }
    }
    return binary;
}

int main() 
{
    setlocale(LC_ALL, "Russian");
    string reverseCode;

    cout << "Введите обратный двоичный код: ";
    cin >> reverseCode;


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