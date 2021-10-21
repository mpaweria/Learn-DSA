// Arrays are always passed by reference to a function

#include<iostream>
using namespace std;

void passArray(int arr[], int n) {
    for(int i=0; i<n; i++)
    {
        arr[i]*=2;
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array before calling passArray function: ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    passArray(arr, n);

    cout << endl << "Array after calling passArray function: ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}
//  The value of arr got doubled after changing it in the passArray function, this shows that arrays are passesd by reference.
