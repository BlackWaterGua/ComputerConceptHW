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
#include"mammal.h"
using namespace std;

#ifndef LION_H
#define LION_H

class lion: public meat, public mammal{
public:
  lion(string);
  void howl();
};

#endif
