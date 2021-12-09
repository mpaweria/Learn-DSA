#include<iostream>
using namespace std;

int main()
{
    char word[10];

    cout << "Please enter a word: ";
    cin >> word;        //  does not read white spaces.
    cout << word;

    return 0;
}