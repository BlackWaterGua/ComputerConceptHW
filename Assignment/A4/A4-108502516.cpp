/*
*   Assignment 4
*   Name: ÁÂËÈéº
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/
#include<iostream>
#include<iomanip>

using namespace std;

void find_f(int);
void find_p(int);

int main()
{
    int num;
    cin >> num;
    while(num<0)
        cin >> num;

    find_f(num);
}

void find_f(int num)
{
    int a, b;
    for(a=1;a<=num;a++)
    {
        b=num%a;
        if(b==0)
        {
            cout << a << " ";
            find_p(a);
        }
    }
    return;
}

void find_p(int num)
{
    int a, b, Count=0;
    for(a=1;a<=num;a++)
    {
        b=num%a;
        if(b==0)
            Count++;
    }
    if(Count>2||Count==1)
        cout << "n" << endl;
    else if(Count==2)
        cout << "y" << endl;
}
