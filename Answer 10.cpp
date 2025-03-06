#include <iostream>
using namespace std;

// Recursive function to calculate m raised to power n
int powerRecursive(int m, int n) {
    // Base case
    if (n == 0) {
        return 1;
    }
    
    // Recursive case
    return m * powerRecursive(m, n - 1);
}

int main() {
    int m, n;
    
    cout << "Enter base (m): ";
    cin >> m;
    
    cout << "Enter exponent (n): ";
    cin >> n;
    
    if (n < 0) {
        cout << "This program doesn't handle negative exponents." << endl;
        return 1;
    }
    
    int result = powerRecursive(m, n);
    cout << m << " raised to power " << n << " = " << result << endl;
    
    return 0;
}