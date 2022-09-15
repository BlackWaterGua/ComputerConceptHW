/*
*   Assignment 5
*   Name: ÁÂËÈéº
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/
#include<iostream>

using namespace std;

int F(int);

int main()
{
    int n;
    cin >> n;
    while(n<0||n>500)
        cin >> n;
    while(n!=0)
    {
        F(n);
        cout << F(n) << endl;
        cin >> n;
    }
}
int F(int n)
{
    int a;
    if(n>=10)
        a=1+F(n-22)+F(F(n-30)-30);
    if(n>=5&&n<=9)
        a=2+F(n-2);
    if(n<=4)
        a=3;
    return a;
}
