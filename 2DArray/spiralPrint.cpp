#include<iostream>
using namespace std;

void print(int arr[][10], int n, int m)
{
    int rowStart = 0, colEnd = m-1, rowEnd = n-1, colStart = 0;

    while (rowStart <= rowEnd && colStart <= colEnd)
    {
        for(int col = colStart; col <= colEnd; col++)
            cout << arr[rowStart][col] << " ";

        for(int row = rowStart+1; row <= rowEnd; row++)
            cout << arr[row][colEnd] << " ";

        for(int col = colEnd-1; col >= colStart; col--)
        {
            if(rowStart==rowEnd)
                break;
            cout << arr[rowEnd][col] << " ";
        }

        for(int row = rowEnd-1; row >= rowStart+1; row--)
        {
            if(colStart==colEnd)
                break;
            cout << arr[row][colStart] << " ";
        }   

        colStart++;
        colEnd--;
        rowStart++;
        rowEnd--;
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

    int n=4, m=4;

    print(arr, n, m);

    return 0;
}