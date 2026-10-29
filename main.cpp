#include <iostream>
#include <cmath>
#include <limits>
 
using namespace std;
 
int main() {
    char op;
    double a, b;
    char again;
 
    cout << "=== Calculator ===\n";
 
    do {
        cout << "\nEnter the operation (+ - * / % ^) : ";
        cin >> op;
 
        cout << "Enter the first number : ";
        cin >> a;
        cout << "Enter the second number : ";
        cin >> b;
 
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error: please enter valid numbers.\n";
            continue;
        }
 
        switch (op) {
            case '+':
                cout << "Result = " << a + b << "\n";
                break;
            case '-':
                cout << "Result = " << a - b << "\n";
                break;
            case '*':
                cout << "Result = " << a * b << "\n";
                break;
            case '/':
                if (b == 0)
                    cout << "Error: cannot divide by zero.\n";
                else
                    cout << "Result = " << a / b << "\n";
                break;
            case '%':
                if (b == 0)
                    cout << "Error: cannot divide by zero.\n";
                else
                    cout << "Result = " << fmod(a, b) << "\n";
                break;
            case '^':
                cout << "Result = " << pow(a, b) << "\n";
                break;
            default:
                cout << "Unknown operation.\n";
        }
 
        cout << "\nDo you want another operation? (y/n) : ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
 
    cout << "Goodbye!\n";
    return 0;
}