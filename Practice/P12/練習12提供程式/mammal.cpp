#include "mammal.h"

void mammal::drink_milk(){
    cout << "drink milk" << endl;
}

void mammal::set_habitat(string h){
    habitat = h;
}

string mammal::get_habitat(){
    return habitat;
}
