/*
*   Practice 6
*   Name: ÁÂËÈéº
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/

#include<iostream>

using namespace std;

int main()
{
    int runtime;
    cin >> runtime;
    for(int i=0;i<runtime;i++)
    {
        int cunt=0;
        string input;
        cin >> input;
        for(int j=0;j<input.size();j++)
        {

            if(input[j+1]==input[j])
                cunt=cunt+1;
            if(input[j+1]!=input[j])
            {
                cunt=cunt+1;
                cout << input[j] << cunt;
                cunt=0;
            }
        }
        cout << endl;
    }
}
