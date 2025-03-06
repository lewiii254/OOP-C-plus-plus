#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    // Input two numbers between 2 and 9
    do {
        cout << "Enter first number (between 2 and 9): ";
        cin >> num1;
    } while (num1 < 2 || num1 > 9);
    
    do {
        cout << "Enter second number (between 2 and 9): ";
        cin >> num2;
    } while (num2 < 2 || num2 > 9);
    
    cout << "Multiples (skipping common multiples): ";
    
    for (int i = 1; i <= 100; i++) {
        // Check if i is a multiple of either number but not both
        if ((i % num1 == 0 || i % num2 == 0) && !(i % num1 == 0 && i % num2 == 0)) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}