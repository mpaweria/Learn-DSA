#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int num) {
    int start=0, end=n-1;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid]==num)
            return mid;
        else if(arr[mid] < num)
            start = mid+1;
        else
            end = mid-1;
    }
    // out of the loop
    return -1;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr)/sizeof(arr[0]), num=7;

    cout << binarySearch(arr, n, num);

    return 0;
}

// Binary Search works for either stirctly increasing or decreasing arrays. It repeatedly reduces the search interval by half.
// Its time complexity is O(log n).