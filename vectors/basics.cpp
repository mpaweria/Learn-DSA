#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // create vector
    vector<int> arr;

    // initialize a vector
    vector<int> vec = {1, 2, 3, 4};

    // fill constructor (vec2 will have 10 elements initialised with 0)
    vector<int> vec2(10, 0);

    // push_back function, adds element to the last, vec = {1,2,3,4,5}
    vec.push_back(5);

    // pop_back function, deletes the last element, vec = {1,2,3,4}
    vec.pop_back();

    // size gives the number of elements, 4
    cout << "Size: " << vec.size() << endl;

    // capacity gives the capacity of the vector to hold elements without growing, 8
    cout << "Capacity: " << vec.capacity() << endl;

    // print elements of the vector
    for(int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}