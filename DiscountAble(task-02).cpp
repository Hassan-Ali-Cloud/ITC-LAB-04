#include <iostream>
using namespace std;

int main() {
    int bill;
    cout << "Enter Your Bill:  ";
    cin >> bill;

    cout << "Your Bill Rs." << bill<<endl;

    if (bill >= 5000)
        cout << "You qualify for a discount";
    else
        cout << "You are not Eligible of Discount";

    return 0;
}