#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements (n): ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers from 1 to " << n + 1 << " with one missing:\n";
    int actual_sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        actual_sum += arr[i];
    }

    int total_sum = (n + 1) * (n + 2) / 2;
    int missing_number = total_sum - actual_sum;

    cout << "The missing number is: " << missing_number << endl;

    return 0;
}
