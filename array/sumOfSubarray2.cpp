#include<iostream>
#include<algorithm>
using namespace std;

//  Using prefix sum approach
int subarraySum2 (int arr[], int n) {
    int sum=0, max=0;
    int prefix[n] = {0};        // will store the cummulative sum
    prefix[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }
    // calculating largest sum
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            sum = (i>0) ? prefix[j] - prefix[i-1] : prefix[j];
            max = (max < sum) ? sum : max;

        }
    }
    return max;
}
int main() {
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Maximum subarray sum is: " << subarraySum2(arr, n);

    return 0;
}