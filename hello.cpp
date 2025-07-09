// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     int largest;
//     if (a >= b && a >= c) {
//         largest = a;
//     } else if (b >= a && b >= c) {
//         largest = b;
//     } else {
//         largest = c;
//     }

//     cout << "The largest number is: " << largest << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " leap year." << endl;
    } else {
        cout << year << " not a leap year." << endl;
    }

    return 0;
}



   
