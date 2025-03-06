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
    
    int current = 1;
    bool found = false;
    
    cout << "Multiples: ";
    
    while (!found) {
        current++;
        
        if (current % num1 == 0 || current % num2 == 0) {
            cout << current << " ";
            
            // Check if current is a multiple of both numbers
            if (current % num1 == 0 && current % num2 == 0) {
                found = true;
            }
        }
    }
    
    cout << endl;
    
    return 0;
}