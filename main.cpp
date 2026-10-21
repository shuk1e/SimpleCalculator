// Simple command-line calculator written in C++.
#include <iostream>
using namespace std;

int main() {
    double firstNumber, secondNumber;
    char operation;

    cout << "=== Simple Calculator ===" << endl;

    cout << "Enter first number: ";
    if (!(cin >> firstNumber)) {
        cout << "Error: Please enter a valid number." << endl;
        return 1;
    }

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    if (!(cin >> secondNumber)) {
        cout << "Error: Please enter a valid number." << endl;
        return 1;
    }

    switch (operation) {
        case '+':
            cout << "Result: " << firstNumber + secondNumber << endl;
            break;
        case '-':
            cout << "Result: " << firstNumber - secondNumber << endl;
            break;
        case '*':
            cout << "Result: " << firstNumber * secondNumber << endl;
            break;
        case '/':
            if (secondNumber == 0) {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            cout << "Result: " << firstNumber / secondNumber << endl;
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
            return 1;
    }

    return 0;
}
