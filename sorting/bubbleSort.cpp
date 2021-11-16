#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> bubbleSort(vector<int> vec)
{
    bool swapped = false;
    int n = vec.size();
    for(int i=0; i<n-1; i++)
    {
        swapped = false;
        for(int j=0; j<n-i-1; j++)
        {
            if(vec[j] > vec[j+1])
            {
                swap(vec[j], vec[j+1]);
                swapped = true;
            }
        }
        // if no element is swapped, array is sorted, break the loop to improve time complexity.
        if(swapped == false)
            break;
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
    printArray(bubbleSort(vec));

    return 0;
}
//  Its time complexity is O(n^2).