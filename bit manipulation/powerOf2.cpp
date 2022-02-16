#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number you want to check: ";
    cin >> n;

    cout << (((n & n-1) == 0) ? "Power of 2" : "Not a power of 2");

    return 0;
}