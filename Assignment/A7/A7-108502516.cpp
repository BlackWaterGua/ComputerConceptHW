/*
*   Assignment 7
*   Name: ÁÂËÈéº
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i=1;i<=t;i++)
    {
        int n, num;
        cin >> n;
        int cunt=n-1;
        int judge,y,f;

        vector<int> input[n];
        for(int jy=0;jy<n;jy++)
        {
            for(int jx=0;jx<n;jx++)
            {
                cin >> num;
                input[jy].push_back(num);
            }
        }
        if(n%2==0)
        {
            for(int a=0;a<n/2;a++)
            {
                if(judge==f)
                    break;
                for(int c=0;c<n;c++)
                {
                    if(input[a][c]==input[cunt-a][cunt-c])
                        judge=y;
                    else
                    {
                        judge=f;
                        break;
                    }
                }
            }
            cout << "Test " << i << ": ";
            cout << ((judge==y) ? "Symmetric" : "Non-symmetric") << endl;
        }
        if(n%2==1)
        {
            for(int b=0;b<(n/2)+1;b++)
            {
                if(judge==f)
                    break;
                for(int d=0;d<n;d++)
                {
                    if(input[b][d]==input[cunt-b][cunt-d])
                        judge=y;
                    else
                    {
                        judge=f;
                        break;
                    }
                }
            }
            cout << "Test " << i << ": ";
            cout << ((judge==y) ? "Symmetric" : "Non-symmetric") << endl;
        }
    }
}
