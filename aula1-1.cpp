#include <iostream>
using namespace std;

//Calculadora - Aula 1 - Atividade 1
int main() {
    int a, b;
    char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    if (op == '+') cout << a + b;
    else if (op == '-') cout << a - b;
    else if (op == '*') cout << a * b;
    else if (op == '/') cout << a / b;
    else cout << "Invalid operator!";
    cout << endl;
    return 0;
}


