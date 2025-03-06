#include <iostream>
using namespace std;

int main() {
    // Using do-while loop
    int i = 0;
    do {
        int j = 0;
        do {
            cout << "@ ";
            j++;
        } while (j < 6);
        
        cout << endl;
        i++;
    } while (i < 5);
    
    return 0;
}