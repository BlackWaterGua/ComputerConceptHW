/*
*   Assignment 8
*   Name: ÁÂËÈéº
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/
#include<iostream>
#include<ctime>
using namespace std;

void f(int *, int);
void f_2(int , int *);

int main()
{
    int loop_num = 24000;
    int a, b;
    cin >> a >> b;
    double start_time = clock();

    for(int i=0;i<loop_num;i++)
    {
        f_2(a, &b);
        //cout << b << endl;
        for(int j=0;j<loop_num;j++)
        {
            f(&a, b);
            //cout << a << endl;
        }
    }
    double end_time = clock();

    cout << a << endl;
    cout << b << endl;
}

void f(int *a, int b)
{
    *a=*a%7;
    b=b%11;
    *a=*a**a - 3*b;
}

void f_2(int a, int *b)
{
    a=a%13;
    *b=*b%5;
    *b=*b**b - 13*a;
}
