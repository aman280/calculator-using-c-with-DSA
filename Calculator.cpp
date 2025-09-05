#include <iostream>
using namespace std;

int main() {
    double a, b;
    float n;

    cout << "How many times do you want to calculate? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Calculation " << i << ":" << endl;

        cout << "Enter first digit : ";
        cin >> a;
        cout << "Enter second digit: ";
        cin >> b;

        cout << "Addition of numbers: " << a + b << endl;
        cout << "Subtraction of numbers: " << a - b << endl;
        cout << "Multiplication of numbers: " << a * b << endl;

        if (b != 0)
            cout << "Divisionof numbers: " << a / b << endl;
        else
            cout << "A number canot be divided by zero (itna v nahi pata bhai)" << endl;

        if (b != 0)
            cout << "you will get the remainder(modulus): " << a % b << endl;
        else
            cout << "Error bro you can get modulus by dividing zero" << endl;

        cout << endl;
    }

    cout << "Exit from the Calculator." << endl;
    return 0;
}
