#include <iostream>
using namespace std;

int main() {
    int score;
    
    cout << "Enter student score (0-100): ";
    cin >> score;
    
    string grade, remarks;
    int category;
    
    if (score < 0 || score > 100) {
        cout << "Invalid score. Score must be between 0 and 100." << endl;
        return 1;
    }
    
    // Convert score to category (0-7)
    if (score >= 0 && score <= 29) category = 0;
    else if (score <= 39) category = 1;
    else if (score <= 49) category = 2;
    else if (score <= 59) category = 3;
    else if (score <= 69) category = 4;
    else if (score <= 79) category = 5;
    else if (score <= 89) category = 6;
    else category = 7;
    
    switch (category) {
        case 0:
            grade = "E";
            remarks = "Very Poor";
            break;
        case 1:
            grade = "D";
            remarks = "Poor";
            break;
        case 2:
            grade = "D+";
            remarks = "Below Average";
            break;
        case 3:
            grade = "C";
            remarks = "Fair";
            break;
        case 4:
            grade = "C+";
            remarks = "Above Average";
            break;
        case 5:
            grade = "B";
            remarks = "Good";
            break;
        case 6:
            grade = "B+";
            remarks = "Very Good";
            break;
        case 7:
            grade = "A";
            remarks = "Excellent";
            break;
    }
    
    cout << "Grade: " << grade << endl;
    cout << "Remarks: " << remarks << endl;
    
    return 0;
}