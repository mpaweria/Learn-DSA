//  Using Reference Variable

#include<iostream>
#include<cmath>
using namespace std;

void applyTax(int &income)
{
    float tax = 0.10;

    income = round(income - income*tax);       // without round function, it's printing 89 because of the floating point math issue.
}
int main()
{
    int salary = 100;
    cout << "Total Salary: " << salary << endl;
    applyTax(salary);
    cout << "Income After Tax: " << salary;

    return 0;
}