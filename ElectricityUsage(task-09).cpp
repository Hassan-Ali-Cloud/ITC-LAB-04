
#include <iostream>
using namespace std;

int main() {
    int units;

    cout << "Enter monthly units: ";
    cin >> units;

    if (units <= 100) {
        cout << "Usage category: Low usage";
    }
    else if (units <= 300) {
        cout << "Usage category: Medium usage";
    }
    else {
        cout << "Usage category: High usage";
    }

    return 0;
}
