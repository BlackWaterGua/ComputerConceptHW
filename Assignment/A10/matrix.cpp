/*
*   Assignment 10
*   Name: 謝侒暻
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/
#include "matrix.h"
using namespace std;

matrix::matrix(int Msize)
{
  M_size=Msize;
}
istream &operator>> (istream &input, matrix &M)
{
  int x;
  for(int i=0;i<M.M_size;i++)
  {
    vector<int> n;
    for(int j=0;j<M.M_size;j++)
    {
      input >> x;
      n.push_back(x);
    }
    M.m.push_back(n);
  }
  return input;
}
ostream &operator<< (ostream &output, matrix &M)
{
  for(int i=0;i<M.M_size;i++)
  {
    if(i==0)
      output << "[";
    else if(i==M.M_size-1)
      output << " ";
    else
      output << " ";
      output << "[";
    for(int j=0;j<M.m[i].size();j++)
    {
      if(j<M.m[i].size()-1)
        output << M.m[i][j] << " ";
      else
        output << M.m[i][j];
    }
    output << "]";
    if(i==0)
      output << " " << endl;
    else if(i==M.M_size-1)
      output << "]" << endl;
    else
      output << " " << endl;
    }
  return output;
}
void matrix::operator+= (matrix &M)
{
  for(int i=0;i<M.M_size;i++)
  {
    for(int j=0;j<M.M_size;j++)
    {
      m[i][j] += M.m[i][j];
    }
  }
}
void matrix::operator-= (matrix &M)
{
  for(int i=0;i<M.M_size;i++)
  {
    for(int j=0;j<M.M_size;j++)
    {
      m[i][j] -= M.m[i][j];
    }
  }
}
void matrix::operator*= (matrix &M)
{
  int a,b,c,d,e,f,g,h,i;
  a = m[0][0] * M.m[0][0] + m[0][1] * M.m[1][0] + m[0][2] * M.m[2][0];
  b = m[0][0] * M.m[0][1] + m[0][1] * M.m[1][1] + m[0][2] * M.m[2][1];
  c = m[0][0] * M.m[0][2] + m[0][1] * M.m[1][2] + m[0][2] * M.m[2][2];
  d = m[1][0] * M.m[0][0] + m[1][1] * M.m[1][0] + m[1][2] * M.m[2][0];
  e = m[1][0] * M.m[0][1] + m[1][1] * M.m[1][1] + m[1][2] * M.m[2][1];
  f = m[1][0] * M.m[0][2] + m[1][1] * M.m[1][2] + m[1][2] * M.m[2][2];
  g = m[2][0] * M.m[0][0] + m[2][1] * M.m[1][0] + m[2][2] * M.m[2][0];
  h = m[2][0] * M.m[0][1] + m[2][1] * M.m[1][1] + m[2][2] * M.m[2][1];
  i = m[2][0] * M.m[0][2] + m[2][1] * M.m[1][2] + m[2][2] * M.m[2][2];
  m[0][0]=a, m[0][1]=b, m[0][2]=c, m[1][0]=d, m[1][1]=e, m[1][2]=f, m[2][0]=g, m[2][1]=h, m[2][2]=i;
}
matrix matrix::operator+ (matrix &M)
{
  matrix *tmp = new matrix(M.M_size);
  *tmp = *this;
  *tmp += M;
  return *tmp;
}
matrix matrix::operator- (matrix &M)
{
  matrix *tmp = new matrix(M.M_size);
  *tmp = *this;
  *tmp -= M;
  return *tmp;
}

matrix matrix::operator* (matrix &M)
{
  matrix *tmp = new matrix(M.M_size);
  *tmp = *this;
  *tmp *= M;
  return *tmp;
}
