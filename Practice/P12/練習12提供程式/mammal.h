#include "iostream"
using namespace std;

#ifndef MAMMAL_H_INCLUDED
#define MAMMAL_H_INCLUDED

class mammal{
public:
    void drink_milk();
    void set_habitat(string);
    string get_habitat();

protected:
    string habitat;
};


#endif // MAMMAL_H_INCLUDED
