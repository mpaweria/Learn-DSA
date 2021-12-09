#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[10] = "apple";
    char b[10];
    char c[10] = "red ";

    // length of the string 
    cout << strlen(a) << endl;

    // copy the string 
    strcpy(b, a);        // 1st parameter is th destination, 2nd is the source
    cout << b << endl;

    // compare the strings
    cout << strcmp(a, b) << endl;     // gives 0 if the strings are equal
    cout << strcmp(a, c) << endl;     // gives any number other than 0

    // concatenate 2 strings
    cout << strcat(c, b);
}