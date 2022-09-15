/*
*   Practice 7
*   Name: ÁÂËÈéº
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/
#include<iostream>
#include<ctime>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string input;
    getline(cin,input);


    for(int i=0;i<input.size();i++)
    {
        if(input[i]>='A'&&input[i]<='Z')
            {
            input[i]=input[i]+n;
            while(input[i]>'Z')
                input[i]=input[i]-26;
            while(input[i]<'A')
                input[i]=input[i]+26;
            }
        if(input[i]>='a'&&input[i]<='z')
            {
            input[i]=input[i]+n;
            while(input[i]>'z')
                input[i]=input[i]-26;
            while(input[i]<'a')
                input[i]=input[i]+26;
            }
    }
    cout << input << endl;

    time_t now=time(0);
    tm *ltm=localtime(&now);
    cout << ltm->tm_mon+1 << "-";
    cout << ltm->tm_mday  << " ";
    cout << ltm->tm_year+1900 << endl;

}
