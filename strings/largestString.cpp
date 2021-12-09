#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of strings you want to compare: ";
    cin >> n;
    cin.get();     // to take the '\n' that we have pressed to input n, otherwise our getline will take n-1 strings.

    char sentence[1000];
    char largest[1000];
    int largestLength = 0, length = 0;
    while (n--)
    {
        cin.getline(sentence, 1000);
        length = strlen(sentence);
        if(length > largestLength)
        {
            largestLength = length;
            strcpy(largest, sentence);
        }
    }
    cout << "The largest string is " << largest;

    return 0;
}