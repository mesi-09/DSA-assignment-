#include <iostream>
using namespace std;

int main() {
    double num1 = 200.0;
    double num2 = 15.0;

    if (num2 != 0) {
        double result = num1 / num2;
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;
        cout << "The division result is: " << result << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }

    return 0;
}