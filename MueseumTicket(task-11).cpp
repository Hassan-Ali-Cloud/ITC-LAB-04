
#include <iostream>
using namespace std;

int main() {
    int visitorAge;

    cout << "Enter visitor age: ";
    cin >> visitorAge;

    if (visitorAge < 0) {
        cout << "Invalid age";
    }
    else if (visitorAge < 5) {
        cout << "Free entry";
    }
    else if (visitorAge <= 17) {
        cout << "Child/Student ticket: Rs. 200";
    }
    else if (visitorAge <= 59) {
        cout << "Adult ticket: Rs. 500";
    }
    else {
        cout << "Senior ticket: Rs. 300";
    }

    return 0;
}
