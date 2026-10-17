
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int choice;
    double a, b, result;
    const double PI = acos(-1.0);

    do {
        cout << "\n===== C++ Scientific Calculator =====\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Exponentiation (x^y)\n";
        cout << "6. Square Root\n";
        cout << "7. Sine (sin)\n";
        cout << "8. Cosine (cos)\n";
        cout << "9. Tangent (tan)\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a + b << '\n';
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a - b << '\n';
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a * b << '\n';
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                if (b == 0) {
                    cout << "Error: Division by zero is not allowed.\n";
                } else {
                    cout << "Result = " << a / b << '\n';
                }
                break;

            case 5:
                cout << "Enter base and exponent: ";
                cin >> a >> b;
                result = pow(a, b);
                if (isnan(result) || isinf(result)) {
                    cout << "Error: Invalid result.\n";
                } else {
                    cout << "Result = " << result << '\n';
                }
                break;

            case 6:
                cout << "Enter a number: ";
                cin >> a;
                if (a < 0) {
                    cout << "Error: Square root of a negative "
                         << "number is not real.\n";
                } else {
                    cout << "Result = " << sqrt(a) << '\n';
                }
                break;

            case 7:
                cout << "Enter angle in degrees: ";
                cin >> a;
                cout << "Result = " << sin(a * PI / 180.0) << '\n';
                break;

            case 8:
                cout << "Enter angle in degrees: ";
                cin >> a;
                cout << "Result = " << cos(a * PI / 180.0) << '\n';
                break;

            case 9:
                cout << "Enter angle in degrees: ";
                cin >> a;
                if (fabs(cos(a * PI / 180.0)) < 1e-12) {
                    cout << "Error: Tangent is undefined "
                         << "at this angle.\n";
                } else {
                    cout << "Result = " << tan(a * PI / 180.0) << '\n';
                }
                break;

            case 0:
                cout << "Calculator closed.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}
