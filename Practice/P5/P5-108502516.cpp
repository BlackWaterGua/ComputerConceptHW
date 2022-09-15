/*
*   Practice 5
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
    cout << F(n) << endl;
}

int F(int n)
{
    int sum=0, num=0, n2=n;
    unsigned long int depower=1000000000;
    for(int i=1;i<=10;i++)
    {
        num=n2/depower;
        sum=sum+num;
        n2=n2-depower*num;
        depower=depower/10;
    }
    int a;
    if(n%2==0 && n!=0)
        a=2+F(n/2);
    if(n%2==1)
        a=3+F(sum-5);
    if(n<=0)
        a=0;
    return a;
}
