// question no 5
#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter the character = ";
    cin >> ch;

    if (ch >= '0' && ch <= '9') {
        cout << "Digit";
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << "Alphabet";
    } else {
        cout << "Symbol";
    }

    return 0;
}
