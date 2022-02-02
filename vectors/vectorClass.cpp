#include<iostream>
#include "vector.h"
using namespace std;

int main()
{
    Vector<int> vec;
    Vector<char> charVec;

    charVec.push_back('a');
    charVec.push_back('b');
    charVec.push_back('c');

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    vec.pop_back();

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    for(int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    for(int i=0; i<charVec.size(); i++)
    {
        cout << charVec[i] << " ";
    }
}