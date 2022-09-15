/*
*   Practice 12
*   Name: 謝侒暻
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/
#include<iostream>
#include<vector>
#include<string>
#include"meat.h"
#include"reptile.h"
using namespace std;

#ifndef SNAKE_H
#define SNAKE_H

class snake: public meat, public reptile{
public:
  snake(bool a)
  {
    toxin = a;
  }
  void set_toxin(bool);
  bool get_toxin();
  void winter_sleep();

private:
  bool toxin;
};

#endif
