/*
*   Assignment 3
*   Name: ¡¬À»È∫
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/

#include<iostream>
using namespace std;

int main()
{
    int a, b, c, large, side1, side2, type;
    cout << "Please key in first number:" << endl;
    cin >> a;
    cout << "Please key in second number:" << endl;
    cin >> b;
    cout << "Please key in third number:" << endl;
    cin >> c;

    if(a>b&&a>c)
        large=a,side1=b,side2=c;
    if(b>a&&b>c)
        large=b,side1=a,side2=c;
    if(c>a&&c>b)
        large=c,side1=a,side2=b;


    if(side1+side2>large)
        type=2;
    if(side1*side1+side2*side2==large*large&&side1==side2)
        type=5;
    if(side1*side1+side2*side2==large*large)
        type=3;
    if(side1==side2)
        type=4;
    if(a==b&&b==c)
        type=6;


    switch(type)
    {
        case 2:
            cout << "Triangle" << endl;
            break;
        case 3:
            cout << "Right triangle" << endl;
            break;
        case 4:
            cout << "Isosceles triangle" << endl;
            break;
        case 5:
            cout << "Isosceles right triangle" << endl;
            break;
        case 6:
            cout << "Regular triangle" << endl;
            break;
        default:
            cout << "Not triangle" << endl;
    }
    return 0;
}
