#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    cout << "Multiplication table of " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
