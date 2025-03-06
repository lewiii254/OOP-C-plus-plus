#include <iostream>
using namespace std;

const int NUM_COWS = 5;
const int DAYS_IN_WEEK = 7;

// Function to read production
void readProduction(double production[][DAYS_IN_WEEK]) {
    for (int cow = 0; cow < NUM_COWS; cow++) {
        cout << "Enter daily milk production for cow #" << cow + 1 << " (7 days):" << endl;
        for (int day = 0; day < DAYS_IN_WEEK; day++) {
            cout << "Day " << day + 1 << ": ";
            cin >> production[cow][day];
        }
    }
}

// Function to compute average daily production per cow
void computeAverageProduction(const double production[][DAYS_IN_WEEK]) {
    cout << "\nAverage daily production per cow:" << endl;
    
    for (int cow = 0; cow < NUM_COWS; cow++) {
        double total = 0;
        for (int day = 0; day < DAYS_IN_WEEK; day++) {
            total += production[cow][day];
        }
        
        double average = total / DAYS_IN_WEEK;
        cout << "Cow #" << cow + 1 << ": " << average << " liters per day" << endl;
    }
}

int main() {
    // 2D array to store production data for 5 cows over 7 days
    double milkProduction[NUM_COWS][DAYS_IN_WEEK];
    
    // Read production data
    readProduction(milkProduction);
    
    // Compute and display average production
    computeAverageProduction(milkProduction);
    
    return 0;
}