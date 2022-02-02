#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // initialising a 2D Vector
    vector<vector<int>> vec = {{1,2,3,4},
                                {5,6,7},
                                {8,9,10},
                                {11,12}};

    // update an element
    vec[0][0] += 10;

    // print the 2D Vector
    for(int i=0; i<vec.size(); i++)
    {
        for(int j=0; j<vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}