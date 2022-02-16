#include<iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;

    while (n>0)
    {
        int lastBit = n & 1;
        count += lastBit;
        n = n>>1;
    }
    return count;
}
int countBitsHack(int n) {
    int count = 0;

    while (n>0)
    {
        n = n & (n-1);
        count++;
    }
    return count;    
}
int main() {
    int num = 15;
    cout << countSetBits(num) << endl;
    cout << countBitsHack(num);
}