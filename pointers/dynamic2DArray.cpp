#include<iostream>
using namespace std;

int **create2dArray(int rows, int cols)
{
    int **arr = new int *[rows];         // arr is the pointer to the array containg the address of each row

    for(int i=0; i<rows; i++)
    {
        arr[i] = new int [cols];        // in each row, we are creating a new array, thus making it a 2d array
    }

    // init the array with increasing values
    int value = 1;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            arr[i][j] = value++;
        }
    }
    return arr;
}
int main()
{
    int rows=0, cols=0;
    cin >> rows >> cols;
    int **arr = create2dArray(rows, cols);

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    delete [] arr;

    return 0;
}