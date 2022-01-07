#include<iostream>
using namespace std;

void print(int arr[][10], int m, int n)
{
    int colEnd = n-1, rowEnd = m-1, rowStart = 0, colStart = 0;

    while (colEnd >= 0)
    {
        for(int row = rowStart; row <= rowEnd; row++)
            cout << arr[row][colEnd] << " ";
        colEnd--;
        for(int row = rowEnd; row >= rowStart; row--)
            cout << arr[row][colEnd] << " ";
        colEnd--;
    }
}

int main()
{
    int arr[][10] = {
                    {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}
                    };

    int m=4, n=4;

    print(arr, m, n);

    return 0;
}