/*
*   Practice 11
*   Name: 謝侒暻
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/
#include<iostream>
#include<cmath>
#include<vector>
#include<string>

using namespace std;

class Shape{
public:
  Shape()
  {

  }

  double getPerimeter(){

  }
  double getArea(){

  }

protected:
  string shapeName;
};

class Rectangle:public Shape{
public:
  Rectangle()
  {
    shapeName = "Rectangle";
  }

  void set(int w,int h)
  {
    width = w;
    height = h;
  }

  double getArea()
  {
    double A;
    A=width*height;
    return A;
  }
  double getPerimeter()
  {
    double P;
    P=(width+height)*2;
    return P;
  }

private:
  int width;
  int height;
};

class Triangle:public Shape{
public:
  Triangle()
  {
    shapeName = "Triangle";
  }

  void set(int a,int b,int c)
  {
    this->a = a;
    this->b = b;
    this->c = c;
  }
  double getPerimeter()
  {
    double P;
    P=a+b+c;
    return P;
  }
  double getArea()
  {
    double A, s;
    s=(a+b+c)/2;
    A=s*(s-a)*(s-b)*(s-c);
    A=sqrt(A);
    return A;
  }

private:
  int a;
  int b;
  int c;
};

class Circle:public Shape{
public:
  Circle()
  {
    shapeName = "Circle";
  }

  void set(int r)
  {
    this->r = r;
  }
  double getArea()
  {
    double A;
    A=r*r*M_PI;
    return A;
  }
  double getPerimeter()
  {
    double P;
    P=2*r*M_PI;
    return P;
  }

private:
  int r;
};

int main()
{
  int w, h;
  cin >> w >> h;
  Rectangle r1 = Rectangle();
  r1.set(w, h);

  int sa, sb, sc;
  cin >> sa >> sb >> sc;
  Triangle t1 = Triangle();
  t1.set(sa, sb, sc);

  int sr;
  cin >> sr;
  Circle c1;
  c1.set(sr);

  cout << r1.getArea() << endl;
  cout << r1.getPerimeter() << endl;
  cout << t1.getArea() << endl;
  cout << t1.getPerimeter() << endl;
  cout << c1.getArea() << endl;
  cout << c1.getPerimeter() << endl;
}
