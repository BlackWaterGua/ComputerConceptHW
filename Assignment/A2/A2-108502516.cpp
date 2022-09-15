/*
*   Assignment 2
*   Name: ¡¬À»È∫
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double score;
    int total;
    int gradecount;
    double average;

    gradecount=0;
    total=0;

    while(gradecount<10)
    {
        cin >> score;
        if(score!=-1)
        {
            if(score<=100 && score>=0)
                {
                total=total+score;
                gradecount++;
                }
        }
        else
            break;
    }

    average=static_cast<double>(total)/gradecount;

    cout << gradecount << endl;
    cout << average << endl;

    if(average>=90)
        cout << "A" << endl;
    else if (average>=80)
        cout << "B" << endl;
    else if (average>=70)
        cout << "C" << endl;
    else if (average>=60)
        cout << "D" << endl;
    else if (average<60&&average>=0)
        cout << "F" << endl;
    return 0;
}

