#include<iostream>
using namespace std;

pair<int,int> linearSearch(int arr[][10], int n, int m, int target)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            if(arr[i][j] == target)
                return {i,j};
    }
    return {-1,-1};
}
pair<int,int> binarySearch(int arr[][10], int n, int m, int target)
{
    int row = 0, col = m-1;

    while (row < n && col >= 0)
    {
        if(arr[row][col]==target)
            return {row,col};
        else if(arr[row][col] < target)
            row++;
        else
            col--;
    }
    return {-1,-1};
}
int main()
{
    int arr[][10] = {
                    {10,20,30,40},
                    {15,25,35,45},
                    {17,27,37,47},
                    {19,29,39,49}
                    };
    int n=4, m=4, target=27;

    pair<int,int> linear = linearSearch(arr, n, m, target);
    pair<int,int> binary = binarySearch(arr, n, m, target);

    cout << "Linear Search: " << linear.first << " " << linear.second << endl;
    cout << "Binary Search: " << binary.first << " " << binary.second << endl;
}