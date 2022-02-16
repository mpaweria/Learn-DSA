#include<iostream>
using namespace std;

int getIthBit(int n, int i) {
    int mask = 1 << i;
    return ((n & mask) > 0 ? 1 : 0);
}
void clearIthBit(int &n, int i) {
    int mask = ~(1<<i);
    n = n & mask;
}
void setIthBit(int &n, int i) {
    int mask = (1<<i);
    n = (n|mask);
}
void updateIthBit(int &n, int i, int v) {
    clearIthBit(n, i);
    int mask = v << i;
    n = n|mask;
}
void clearLastIBits(int &n, int i) {
    int mask = (-1 << i);
    n = n & mask;
}
void clearBitsInRange(int &n, int i, int j) {
    int a = 1 << (j+1), b = (1 << i)-1;
    int mask = a|b;
    n = n & mask;
}
void replaceBits(int &n, int i, int j, int m) {
    clearBitsInRange(n,i,j);
    int mask = m << i;
    n = n|mask;
}
int main() {
    int n=15, i=1, j=3, m=2;

    cout << getIthBit(n, i) << endl;

    clearIthBit(n, i);
    cout << n << endl;

    setIthBit(n,i);
    cout << n << endl;

    updateIthBit(n, i, 0);
    cout << n << endl;

    clearLastIBits(n,i);
    cout << n << endl;

    clearBitsInRange(n,i,j);
    cout << n << endl;

    replaceBits(n,i,j,m);
    cout << n << endl;

    return 0;
}