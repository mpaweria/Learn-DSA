#include<iostream>
using namespace std;

int main()
{
    char arr[][10] = {                 // number of rows is empty because it'll be calculated from the initialisation.
                        "one",
                        "two",
                        "three",
                        "four",
                        "five"
                    };
    
    cout << arr[2][3] << endl;         // it'll print 'e' from three.
    cout << arr[2] << endl;            // it'll print three unlike int array where it'll print the address of 1st element in 2nd row.

    return 0;
}