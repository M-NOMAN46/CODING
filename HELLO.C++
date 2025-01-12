#include <iostream>
using namespace std;

int main() {
    
    double num1, num2;

    
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    
    double sum = num1 + num2;
    cout << "Sum: " << sum << endl;


    double difference = num1 - num2;
    cout << "Difference: " << difference << endl;

    
    double product = num1 * num2;
    cout << "Product: " << product << endl;

    
    if (num2 != 0) {
        double quotient = num1 / num2;
        cout << "Quotient: " << quotient << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }

    return 0;
}
