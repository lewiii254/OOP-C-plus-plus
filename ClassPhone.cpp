#include <iostream>
using namespace std;

class Phone {
public:
    string make;
    string model;
    string imei_number;

    Phone(string m, string mod, string imei) {
        make = m;
        model = mod;
        imei_number = imei;
    }

    void vibrate() {
        cout << make << " " << model << " is vibrating..." << endl;
    }
};

int main() {
    Phone phone1("Samsung", "Galaxy S21", "123456789012345");
    phone1.vibrate();
    return 0;
}
