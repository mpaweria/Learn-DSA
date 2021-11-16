#include<iostream>
#include<vector>
using namespace std;

// int binarySearch(int arr[], int n, int num) {
//     int start=0, end=n-1;
//     while(start<=end)
//     {
//         int mid = (start+end)/2;
//         if(arr[mid]==num)
//             return mid;
//         else if(arr[mid] < num)
//             start = mid+1;
//         else
//             end = mid-1;
//     }
//     // out of the loop
//     return -1;
// }
// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int n = sizeof(arr)/sizeof(arr[0]), num=7;

//     cout << binarySearch(arr, n, num);

//     return 0;
// }

// Binary Search works for either stirctly increasing or decreasing arrays. It repeatedly reduces the search interval by half.
// Its time complexity is O(log n).

int lowerBound(vector<int> A, int Val) {
    // your code goes here
    int s=0, e=A.size()-1, mid=0;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(A[mid]==Val) 
            return A[mid];
        else if(A[mid]<Val)
            s = mid+1;
        else
            e = mid-1;
    }
    return A[mid-1];
}
int main() 
{
    vector<int> vec = {-1, 0};
    cout << lowerBound(vec, 4);

    return 0;
}