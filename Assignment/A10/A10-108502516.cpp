/*
*   Assignment 10
*   Name: 謝侒暻
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/
#include<iostream>
#include<vector>
#include<string>
#include"matrix.h"
using namespace std;

int main()
{
  int n;
  cin >> n;
  matrix m1(n);
  matrix m2(n);
  matrix m3(n);
  cin >> m1;
  cin >> m2;
  cout << m1;
  cout << m2;
  m3 = m1 + m2;
  cout << m3;
  m3 = m1 - m2;
  cout << m3;
  m3 = m1 * m2;
  cout << m3;
}
