#include<iostream>
using namespace std;

//  This is the Brute Force approach
int subarraySum(int arr[], int n) {
    int sum=0, max=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            sum = 0;
            for(int k=i; k<j; k++)
            {
                sum+=arr[k];
                max = (max < sum) ? sum : max;
            }
        }
    }
    return max;
}
int main() {
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Maximum subarray sum is: " << subarraySum(arr, n);

    return 0;
}