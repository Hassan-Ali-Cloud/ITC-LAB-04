
#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber;

    cout << "Enter two numbers (with space between both numbers): ";
    cin >> firstNumber;
    cin >> secondNumber;

    if (firstNumber > secondNumber) {
        cout << "First number is greater" << endl;
    }
    else if (firstNumber < secondNumber) {
        cout << "Second number is greater" << endl;
    }
    else if (firstNumber == secondNumber) {
        cout << "Both numbers are same" << endl;
    }
    else
        cout << "Numbers are not valid";


    return 0;
}
