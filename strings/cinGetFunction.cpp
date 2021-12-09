#include<iostream>
using namespace std;

int main()
{
    char word[100];

    cout << "Please enter a string: ";
    char temp = cin.get();
    int i=0;
    while (temp != '#')
    {
        word[i++] = temp;
        temp = cin.get();
    }
    cout << word;

    return 0;    
}