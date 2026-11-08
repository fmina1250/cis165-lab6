#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
    const int COLOR_SIZE = 20;
    char first_color[COLOR_SIZE];
    char second_color[COLOR_SIZE];

    cout << "Enter the first primary color (red, blue, or yellow): ";
    cin >> setw(COLOR_SIZE) >> first_color;

    cout << "Enter the second primary color (red, blue, or yellow): ";
    cin >> setw(COLOR_SIZE) >> second_color;

    bool is_first_valid = (strcmp(first_color, "red") == 0 || 
                           strcmp(first_color, "blue") == 0 || 
                           strcmp(first_color, "yellow") == 0);

    bool is_second_valid = (strcmp(second_color, "red") == 0 || 
                            strcmp(second_color, "blue") == 0 || 
                            strcmp(second_color, "yellow") == 0);

    if (!is_first_valid || !is_second_valid) {
        cout << "Error: One or both inputs are not valid primary colors." << endl;
        return 1;
    }

    cout << "Result: ";
    if (strcmp(first_color, second_color) == 0) {
        cout << first_color << endl;
    }
    else if ((strcmp(first_color, "red") == 0 && strcmp(second_color, "blue") == 0) ||
             (strcmp(first_color, "blue") == 0 && strcmp(second_color, "red") == 0)) {
        cout << "purple" << endl;
    }
    else if ((strcmp(first_color, "red") == 0 && strcmp(second_color, "yellow") == 0) ||
             (strcmp(first_color, "yellow") == 0 && strcmp(second_color, "red") == 0)) {
        cout << "orange" << endl;
    }
    else if ((strcmp(first_color, "blue") == 0 && strcmp(second_color, "yellow") == 0) ||
             (strcmp(first_color, "yellow") == 0 && strcmp(second_color, "blue") == 0)) {
        cout << "green" << endl;
    }

    return 0;
}