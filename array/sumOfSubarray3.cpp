#include<iostream>
#include<algorithm>
using namespace std;

// Using Kadane's Algorithm

int subarraySum3 (int arr[], int n) {
    int currSum=0, maxSum=0;
    for(int i=0; i<n; i++)
    {
        currSum += arr[i];

        if(currSum < 0)
            currSum = 0;

        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}
int main() {
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Maximum subarray sum is: " << subarraySum3(arr, n);

    return 0;
}