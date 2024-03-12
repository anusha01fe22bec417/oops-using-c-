#include <iostream>
#include <cmath>
using namespace std;3

int main() {
    int number, originalNumber, remainder, result = 0, n = 0;


    cout << "Enter a number to check if it's an Armstrong number: ";
    cin >> number;

    originalNumber = number;


    for (originalNumber = number; originalNumber != 0; originalNumber /= 10, ++n);

    originalNumber = number;


    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }


    if (result = number)
        cout << number << " is an Armstrong number." << endl;
    else
        cout << number << " is not an Armstrong number." << endl;

    return 0;
}
