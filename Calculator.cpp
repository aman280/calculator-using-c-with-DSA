#include <iostream>
using namespace std;

class Calculator {
public:
    void menu() {
        cout << " AMAN Calculator" << endl;
        cout << "1. Addition of numbers" << endl;
        cout << "2. Subtraction of numbers" << endl;
        cout << "3. Multiplication of numbers" << endl;
        cout << "4. Division of numbers" << endl;
        cout << "5. Modulus of numbers" << endl;
        cout << "6. Exit from the menu" << endl;
    }

    void performOperation(int choice) {
        int a, b;
        if (choice >= 1 && choice <= 5) {
            cout << "Enter your First no.: ";
            cin >> a;
            cout << "Enter your Second no.: ";
            cin >> b;
        }

        switch (choice) {
            case 1: cout << "Your Result: " << (a + b) << endl; break;
            case 2: cout << "Your Result: " << (a - b) << endl; break;
            case 3: cout << "Your Result: " << (a * b) << endl; break;
            case 4: 
                if (b != 0)
                    cout << " Your Result: " << (a / b) << endl;
                else
                    cout << "Error bro  have you not read in primary classes." << endl;
                break;
            case 5: 
                if (b != 0)
                    cout << " Your Result: " << (a % b) << endl;
                else
                    cout << "error bro have you not read in primary classes " << endl;
                break;
            case 6: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice!" << endl;
        }
    }
};

int main() {
    Calculator calc;
    int choice;
    do {
        calc.menu();
        cout << "Enter your choice: ";
        cin >> choice;
        calc.performOperation(choice);
        cout << endl;
    } while (choice != 6);
    return 0;
}
