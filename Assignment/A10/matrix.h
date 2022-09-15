/*
*   Assignment 10
*   Name: 謝侒暻
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/
#include<iostream>
#include<vector>
#include<string>

using namespace std;

#ifndef MATRIX_H
#define MATRIX_H

class matrix{
public:
  matrix(int);
  void setMsize(int);
  friend istream &operator>> (istream &, matrix &);
  friend ostream &operator<< (ostream &, matrix &);
  matrix operator+ (matrix &);
  matrix operator- (matrix &);
  void operator+= (matrix &);
  void operator-= (matrix &);
  void operator*= (matrix &);
  matrix operator* (matrix &);

private:
  int M_size;
  vector<vector<int> > m;
};

#endif
