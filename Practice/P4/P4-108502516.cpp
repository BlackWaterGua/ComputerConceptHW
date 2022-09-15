/*
*   Practice 4
*   Name: ÁÂËÈéº
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/
#include<iostream>

using namespace std;

void change(int);

int main()
{
    int num;
    cin >> num;
    while(num<0||num>=100000)
    cin >> num;

    change(num);


}

void change(int num)
{
    int n1, n2, n3, n4, n5;
    n1=num/10000;
    n2=(num-(10000*n1))/1000;
    n3=(num-(10000*n1)-(1000*n2))/100;
    n4=(num-(10000*n1)-(1000*n2)-(100*n3))/10;
    n5=(num-(10000*n1)-(1000*n2)-(100*n3)-(10*n4));
    switch(n1)
    {
        case 1:
            cout << ".----" << endl;
            break;

        case 2:
            cout << "..---" << endl;
            break;

        case 3:
            cout << "...--" << endl;
            break;

        case 4:
            cout << "....-" << endl;
            break;

        case 5:
            cout << "....." << endl;
            break;

        case 6:
            cout << "-...." << endl;
            break;

        case 7:
            cout << "--..." << endl;
            break;

        case 8:
            cout << "---.." << endl;
            break;

        case 9:
            cout << "----." << endl;
            break;

        case 0:
            cout << "-----" << endl;
            break;

        default:
            cout << "none" << endl;
            break;
    }

    switch(n2)
    {
        case 1:
            cout << ".----" << endl;
            break;

        case 2:
            cout << "..---" << endl;
            break;

        case 3:
            cout << "...--" << endl;
            break;

        case 4:
            cout << "....-" << endl;
            break;

        case 5:
            cout << "....." << endl;
            break;

        case 6:
            cout << "-...." << endl;
            break;

        case 7:
            cout << "--..." << endl;
            break;

        case 8:
            cout << "---.." << endl;
            break;

        case 9:
            cout << "----." << endl;
            break;

        case 0:
            cout << "-----" << endl;
            break;

        default:
            cout << "none" << endl;
            break;
    }

        switch(n3)
    {
        case 1:
            cout << ".----" << endl;
            break;

        case 2:
            cout << "..---" << endl;
            break;

        case 3:
            cout << "...--" << endl;
            break;

        case 4:
            cout << "....-" << endl;
            break;

        case 5:
            cout << "....." << endl;
            break;

        case 6:
            cout << "-...." << endl;
            break;

        case 7:
            cout << "--..." << endl;
            break;

        case 8:
            cout << "---.." << endl;
            break;

        case 9:
            cout << "----." << endl;
            break;

        case 0:
            cout << "-----" << endl;
            break;

        default:
            cout << "none" << endl;
            break;
    }

        switch(n4)
    {
        case 1:
            cout << ".----" << endl;
            break;

        case 2:
            cout << "..---" << endl;
            break;

        case 3:
            cout << "...--" << endl;
            break;

        case 4:
            cout << "....-" << endl;
            break;

        case 5:
            cout << "....." << endl;
            break;

        case 6:
            cout << "-...." << endl;
            break;

        case 7:
            cout << "--..." << endl;
            break;

        case 8:
            cout << "---.." << endl;
            break;

        case 9:
            cout << "----." << endl;
            break;

        case 0:
            cout << "-----" << endl;
            break;

        default:
            cout << "none" << endl;
            break;
    }
        switch(n5)
    {
        case 1:
            cout << ".----" << endl;
            break;

        case 2:
            cout << "..---" << endl;
            break;

        case 3:
            cout << "...--" << endl;
            break;

        case 4:
            cout << "....-" << endl;
            break;

        case 5:
            cout << "....." << endl;
            break;

        case 6:
            cout << "-...." << endl;
            break;

        case 7:
            cout << "--..." << endl;
            break;

        case 8:
            cout << "---.." << endl;
            break;

        case 9:
            cout << "----." << endl;
            break;

        case 0:
            cout << "-----" << endl;
            break;

        default:
            cout << "none" << endl;
            break;
    }
    return;
}
