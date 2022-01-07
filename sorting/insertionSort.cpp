#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> insertionSort(vector<int> vec)
{
    int n = vec.size(), current, prev;
    for(int i=1; i<=n-1; i++)
    {
        current = vec[i];
        prev = i-1;    
        while(prev >=0 && vec[prev] > current)
        {
            vec[prev+1] = vec[prev];
            prev--;
        }
        vec[prev+1] = current;
    }
    return vec;
}
void printArray(vector<int> vec)
{
    for(auto i: vec)
        cout << i << " ";
}
int main() 
{
    vector<int> vec = {1, 5, 3, 8, 0, -3, -5};
    printArray(insertionSort(vec));

    return 0;
}
//  Its time complexity is O(n^2).