#include<iostream>
#include<vector>
#include<algorithm>      // header file which includes sort function
using namespace std;

bool compare(int a, int b)       // function to change the order of inbuilt sorting
{
    return a>b;
}
void printArray(vector<int> vec)
{
    for(auto i: vec)
        cout << i << " ";
}
int main() 
{
    vector<int> vec = {1, 5, 3, 8, 0, -3, -5};
    // sort(vec.begin(), vec.end(), compare);       //this is the inbuilt sort function, it also takes a 3rd argument

    // there's also an inbuilt comparator greater<int>();
    sort(vec.begin(), vec.end(), greater<int>());

    // to print in reverse order we can use reverse function 
    // reverse(vec.begin(), vec.end());

    printArray(vec);

    return 0;
}
//  Its time complexity is O(nlogn).