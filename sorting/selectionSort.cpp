#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> selectionSort(vector<int> vec)
{
    int n=vec.size();
    for(int i=0; i<=n-2; i++)
    {
        int minPosition = i;

        for(int j=i; j<n; j++)
        {
            // find the position of minimum element
            if(vec[minPosition] > vec[j])
                minPosition = j;
        }
        // swap the elements
        swap(vec[i], vec[minPosition]);
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
    printArray(selectionSort(vec));

    return 0;
}
//  Its time complexity is O(n^2).

