#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

vector<int> countingSort(vector<int> vec) 
{
    int largest = INT_MIN, smallest = INT_MAX;
    for(int i=0; i<vec.size(); i++)
    {
        largest = vec[i] > largest ? vec[i] : largest;
        smallest = vec[i] < smallest ? vec[i] : smallest;
    }

    // create a frequency vector
    vector<int> freq(largest+1, 0);

    //  mention the frequency of each element of vec
    for(int i=0; i<vec.size(); i++)
        freq[vec[i]]++;

    //  sorting the original array
    int j=0;
    for(int i=0; i<=largest; i++)
    {
        while (freq[i]>0)
        {
            vec[j] = i;
            freq[i]--;
            j++;
        }
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
    vector<int> vec = {1, 5, 3, 8, 0, 4, 7};
    printArray(countingSort(vec));

    return 0;
}
//  Its time complexity is O(n+r).