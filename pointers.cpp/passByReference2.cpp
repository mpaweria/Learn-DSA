//  Using Pointers

#include<iostream>
using namespace std;

void watchMovie(int *views)     // accepts address of a variable
{
    *views = *views + 1;        // pointer is being dereferenced here
}
int main()
{
    int views = 100;
    watchMovie(&views);         // passing address of a variable
    watchMovie(&views);
    watchMovie(&views);

    cout << views;

    return 0;
}