#include <iostream>     // Include the input/output library
using namespace std;    // Use standard namespace (so we can write cout instead of std::cout)

int main() {
    double num1, num2;  // Variables to store two numbers entered by the user
    char op;            // Variable to store the chosen operator (+, -, *, /)

    // Ask user for the first number
    cout << "Enter first number: ";
    cin >> num1;

    // Ask user for an operator
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Ask user for the second number
    cout << "Enter second number: ";
    cin >> num2;

    double result;  // Variable to store the result of the calculation

    // Switch statement to decide which operation to perform
    switch (op) {
        case '+':  // If operator is +
            result = num1 + num2;              // Perform addition
            cout << "Result: " << result << endl; // Print result
            break;

        case '-':  // If operator is -
            result = num1 - num2;              // Perform subtraction
            cout << "Result: " << result << endl; // Print result
            break;

        case '*':  // If operator is *
            result = num1 * num2;              // Perform multiplication
            cout << "Result: " << result << endl; // Print result
            break;

        case '/':  // If operator is /
            if (num2 != 0)                     // Check for division by zero
                result = num1 / num2;          // Perform division
            else {                             // If second number is 0
                cout << "Error: Division by zero!" << endl; // Print error
                return 1;                      // Exit program with error code
            }
            cout << "Result: " << result << endl; // Print result
            break;

        default:   // If the operator is not one of +, -, *, /
            cout << "Wrong operator!" << endl; // Print error
            return 1;                          // Exit program with error code
    }

    return 0; // Indicate successful program termination
}
