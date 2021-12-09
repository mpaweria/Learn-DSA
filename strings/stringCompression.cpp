#include<iostream>
#include<string>
using namespace std;

string stringCompression(string s){
    string str;
    int count;
    for(int i=0; i<s.length(); i++)
    {
        count=1;
        while(s[i]==s[i+1] && i<s.length()-1)
        {
            count++;
            i++;
        }
        str.push_back(s[i]);
        if(count==1)
            continue;
        str+=to_string(count);
    }

    return str;
}
int main()
{
    string s1 = "aaabbccc";
    cout << stringCompression(s1) << endl;

    string s2 = "abcd";
    cout << stringCompression(s2);

    return 0;
}