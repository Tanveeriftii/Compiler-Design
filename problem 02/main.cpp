#include<iostream>
using namespace std;

int main() {

    int arr[10], i;

    cout << "Enter 10 Array Elements:";
    for (i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "Even numbers are:";
    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0)
            cout << arr[i] << " ";
    }

    cout << "\nOdd numbers are:";
    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 != 0)
            cout << arr[i] << " ";
    }

    return 0;
}
