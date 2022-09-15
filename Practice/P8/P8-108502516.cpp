/*
*   Practice 8
*   Name: ÁÂËÈéº
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/
#include<iostream>

using namespace std;

void f(int *,int *);

int main()
{
    int a, b;
    cin >> a >> b;
    f(&a, &b);
    cout << a << endl;
    cout << b << endl;
}

void f (int *a,int *b)
{
    int a1=*a,b1=*b;
    *a=a1+b1;
    *b=a1*b1;
}
