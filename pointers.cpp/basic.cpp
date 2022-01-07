#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    cout << &x << endl;     // address of operator, prints the address of 10

    int *ptr = &x;          // ptr is a pointer to x
    cout << ptr << endl;    // prints the address of x, same as &x

    cout << *ptr << endl;   // * is use a dereference operator here, print the value ptr is pointing to i.e. 10

    int *nullPtr = 0;       // nullPtr is a NULL Pointer, it points nowhere and can't be dereferenced

    int &y = x;             // y is a reference variable, shares the same memory location with x
    y++;                    // will increment value at x as well, as y is alias of x
    cout << x << endl;      // prints 11
    cout << y << endl;      // prints 11
    x++;
    cout << x << endl;      // prints 12
    cout << y << endl;      // prints 12

    return 0;
}