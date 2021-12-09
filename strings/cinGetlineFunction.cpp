#include<iostream>
using namespace std;

int main()
{
    char sentence[100];

    cin.getline(sentence, 100, '#');     // getline will stop taking input at #

    cout << sentence;

    return 0;
}
//  if we pass only 2 parameter in getline function cin.getline(sentence, 100), then it'll take input 
//  till '\n' or till 100 characters.