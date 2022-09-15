/*
*   Practice 12
*   Name: 謝侒暻
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/
#include<iostream>
#include<vector>
#include<string>
#include"snake.h"
using namespace std;

void snake::set_toxin(bool a)
{
  toxin = a;
}
bool snake::get_toxin()
{
  return toxin;
}
void snake::winter_sleep()
{
  cout << "winter sleep" << endl;
}
