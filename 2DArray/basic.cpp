#include<iostream>
using namespace std;

void takeInput(int arr[100][100], int row, int col)
{
    cout << "Enter the elements in the array:" << endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void print(int arr[100][100], int row, int col)
{
    cout << "The given array is:" << endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[100][100];      // declaration of a 2D array
    int row=0, col=0;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;

    takeInput(arr, row, col);
    print(arr, row, col);

    return 0;
}
// When array is passed to a function, we actually pass the pointer to its first element.