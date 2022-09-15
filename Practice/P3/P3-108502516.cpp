/*
*   Practice 3
*   Name: ÁÂËÈéº
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int i, n, n1,a;

    cin >> n;
    if(n<=3)
    {
        cout << "It¡¦s not a Christmas tree!!!" << endl;
        return 0;
    }
    n1=n;
    int n2 = 1;
    for(i=0;i<n1;i++)
    {
        cout << setw(n); //<< " ";
        for(int j=n2;j>0;j--)
        {
            cout << "*";
        }
        n2+=2;
        n--;
        cout << endl;
    }
    for(i=0;i<n1/3;i++)
    {
        for(int j=1;j<=n1-2;j++)
            cout << " ";
        cout << "***" <<endl;
    }
}
