#include <iostream>
using namespace std;

int main() {
    int no;
    cout << "Enter a no. " << endl;
    cin >> no;
    if (no > 0)
        cout << "\nYour number is positive.";
    else if (no < 0)
        cout << "\nYour number is negative.";
    else
        cout << "\nYour number is zero.";



    return 0;
}