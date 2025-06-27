#include <iostream>
using namespace std;

//Aula 1 - Atividade 2
int main() {
    cout << "Hello, World!" << endl;
    
    int a = 5;
    int b = 3;
    int sum = a + b;
    
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;
    
    if (sum > 5) {
        cout << "Sum is greater than 5" << endl;
    } else {
        cout << "Sum is 5 or less" << endl;
    }
    
    cout << "Counting from 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}