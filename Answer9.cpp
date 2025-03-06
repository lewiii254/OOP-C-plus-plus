#include <iostream>
using namespace std;

// Function to calculate m raised to power n using a loop
int power(int m, int n) {
    int result = 1;
    
    for (int i = 0; i < n; i++) {
        result *= m;
    }
    
    return result;
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
    
    int result = power(m, n);
    cout << m << " raised to power " << n << " = " << result << endl;
    
    return 0;
}