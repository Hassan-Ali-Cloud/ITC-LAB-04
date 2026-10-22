
#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 85) {
        cout << "Scholarship awarded";
    }
    else {
        cout << "Scholarship not awarded";
    }

    return 0;
}
