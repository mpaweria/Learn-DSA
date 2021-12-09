#include<iostream>
using namespace std;

int main()
{
    int digit=0, space=0, alphabet=0, punctuation=0;

    // using string keyword.
    // string str = "Hello, My Name's Maitreyi. My Number is 8264734895. Who are you? Nice to meet you!";
    
    // for(int i=0; i<str.length(); i++)
    // {
    //     if(str[i] == ' ')
    //         space++;
    //     else if(str[i] >= '0' && str[i] <= '9')
    //         digit++;
    //     else if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
    //         alphabet++;
    //     else 
    //         punctuation++;
    // }
    // cout << str << endl;

    //  using char array
    char s;
    s = cin.get();
    while (s != '\n')
    {
        if(s == ' ' || s == '\t')
            space++;
        else if(s >= '0' && s <= '9')
            digit++;
        else if(s >= 'a' && s <= 'z' || s >= 'A' && s <= 'Z')
            alphabet++;
        else 
            punctuation++;
        s = cin.get();
    }

    cout << "In the given string the:\nNumber of Alphabets: " << alphabet << "\nNumber of Spaces: " << space << "\nNumber of digits: " 
         << digit << "\nNumber of Puncuations: " << punctuation;

    return 0;
}