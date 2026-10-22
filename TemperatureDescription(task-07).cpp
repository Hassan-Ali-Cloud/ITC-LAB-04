
#include <iostream>
using namespace std;

int main() {
    int temperature;

    cout << "Enter temperature in Celsius: ";
    cin >> temperature;

    if (temperature < 10) {
        cout << "Weather: Cold" << endl;
    }
    else if (temperature < 25) {
        cout << "Weather: Pleasant" << endl;
    }
    else if (temperature < 35) {
        cout << "Weather: Warm" << endl;
    }
    else {
        cout << "Weather: Hot" << endl;
    }

    return 0;
}