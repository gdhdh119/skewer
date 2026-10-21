#include <iostream>
using namespace std;

// Function to convert decimal to binary
void decToBinary(int n)
{
    // Handle the special case of 0
    if (n == 0) {
        cout << 0;
        return;
    }

    int binaryNum[32];
    int i = 0;

    // Store binary digits from right to left
    while (n > 0) {
        binaryNum[i] = n % 2;
        n /= 2;
        i++;
    }

    // Print the digits in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}

int main()
{
    int n = 10;

    decToBinary(n);

    return 0;
}