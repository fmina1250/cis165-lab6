#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double weight = 0.0;
    double height = 0.0;
    double bmi = 0.0;

    cout << "Enter weight in pounds: ";
    cin >> weight;

    cout << "Enter height in inches: ";
    cin >> height;

    if (weight <= 0 || height <= 0) {
        cout << "Error: Weight and height must be greater than zero." << endl;
        return 1;
    }

    bmi = weight * 703.0 / (height * height);

    cout << fixed << setprecision(2);
    cout << "Calculated BMI: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Message: Underweight" << endl;
    }
    else if (bmi <= 25.0) {
        cout << "Message: Optimal weight" << endl;
    }
    else {
        cout << "Message: Overweight" << endl;
    }

    return 0;
}