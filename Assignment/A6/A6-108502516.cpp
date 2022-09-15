/*
*   Assignment 6
*   Name: ¡¬À»È∫
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int a=0;a<n;a++)
    {
        char eng;int num;
        string s1;
        cin >> s1;
        for(int b=0;b<s1.size();b++)
        {
            if(s1[b]<='Z'&&s1[b]>='A')
                eng=s1[b];
            if(s1[b]<='9'&&s1[b]>='0')
            {

                if(s1[b+1]<='9'&&s1[b+1]>='0')
                {
                    num=(s1[b]-'0')*10+(s1[b+1]-'0');
                    b=b+1;
                    while(s1[b+1]<='9'&&s1[b+1]>='0')
                    {
                        num=num*10+(s1[b+1]-'0');
                        b++;
                    }
                }
                else
                    num=s1[b]-'0';
                for(int c=0;c<num;c++)
                    cout << eng;
            }
        }
        cout << endl;
    }
}
