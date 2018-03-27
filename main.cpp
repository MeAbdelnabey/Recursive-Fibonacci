// Made by Mohamed Ahmed 20170364 G14

#include <bits/stdc++.h>

float No;
using namespace std;

double F(int);
int main()
{
    cout << "welcome to Fibonacci code !!\n";
    while (true)
    {

    cout << "Enter a positive number for the number of places :  " << endl;
    cin >> No;
    cout << F(No) <<endl;}
    return 0;
}
double F(int n) {
    float c,op1,op2;
    if (cin.fail())
        cout << "Wrong choice" << endl;
    else if (No < 0 )
        cout << "No Negative numbers allowed" << endl;
    else if (No == 0)
        return 0;

    else if (No == 1)
        return 1;
    else {
    op1=0.5+0.5*sqrt(5);op2=0.5-0.5*sqrt(5);
    c=( pow(op1,No) - pow(op2,No))/sqrt(5);
    return c;}}
