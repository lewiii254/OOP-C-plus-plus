#include <iostream>
using namespace std;

class Phone {
public:
    string make;
    string model;
    string imei_number;

    // Constructor
    Phone(string m, string mod, string imei) {
        make = m;
        model = mod;
        imei_number = imei;
        cout << "Phone created: " << make << " " << model << " (IMEI: " << imei_number << ")" << endl;
    }

    // Destructor
    ~Phone() {
        cout << "Phone destroyed: " << make << " " << model << endl;
    }

    void vibrate() {
        cout << make << " " << model << " is vibrating..." << endl;
    }
};

int main() {
    Phone phone1("Samsung", "Galaxy S21", "123456789012345");
    Phone phone2("Nokia", "C32", "12345");
    phone1.vibrate();
    return 0;
}
