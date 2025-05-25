#include <iostream>
using namespace std;

int main() {
    int num1, num2 , result;
    char op;

    cout << "please enter a computational expression: ";
    cin >> num1 >> op >> num2;

    if (op == '+') {
        result = num1 + num2;
        cout << "result: " << result;
    } else if (op == '-') {
        result = num1 - num2;
        cout << "result: " << result;
    } else if (op == '*') {
        result = num1 * num2;
        cout << "result: " << result;
    } else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            cout << "result: " << result;
        } else {
            cout << "Error!the denominator is zero!";
        }
    } else {
        cout << "The operator is not valid!";
    }

    return 0;
}

