#include <iostream>
using namespace std;

int main() {
    int no;
    cout << "Enter Your No. :";
    cin >> no;
    if ( no%2 == 0)
        cout << "Number is Even";
    else if ( no%2 != 0)
        cout << "Number is odd";
    else
        cout << "Number is not Valid";

    return 0;
}