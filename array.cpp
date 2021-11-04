#include<iostream>
using namespace std;

int main()
{
    // declaring and initialising the array
    int arr[10] = {0};  //if one value is initilised then rest of the values will be 0.

    // calculating size of array
    int n = sizeof(arr)/sizeof(arr[0]);

    // taking input
    cout << "Enter the values in array: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    // printing output using range based for loop
    cout << "Array is: ";
    for(auto i : arr)
        cout << i << " ";


    return 0;
}

// yukgjgbmhvh