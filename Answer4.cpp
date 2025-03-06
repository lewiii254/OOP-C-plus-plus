#include <iostream>
using namespace std;

int main() {
    // Using while loop
    int i = 0;
    while (i < 5) {
        int j = 0;
        while (j < 6) {
            cout << "@ ";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}