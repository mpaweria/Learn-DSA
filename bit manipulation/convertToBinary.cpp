#include<iostream>
using namespace std;

int convertToBinary(int n) {
    int power = 1, ans=0;
    while (n>0)
    {
        int unit = n & 1;
        ans += unit*power;
        power *= 10;
        n = n >> 1;
    }
    return ans;
}
int main() {
    int n = 15;
    cout << convertToBinary(n);

    return 0;
}