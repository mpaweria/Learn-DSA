#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int num) {
    for(int i=0; i<n; i++)
    {
        if(arr[i]==num)
            return i;
    }
    // out of the loop
    return -1;
}
int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]), num=3;

    cout << linearSearch(arr, n, num);

    return 0;
}

// Linear search checks each and every element of the loop until the desired element is found. 
// Its time complexity is O(n).