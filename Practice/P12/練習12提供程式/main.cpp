#include <iostream>
#include "mammal.h"
#include "reptile.h"
#include "meat.h"
#include "lion.h"
#include "snake.h"

using namespace std;

int main()
{
    cout << "lion" << endl;
    lion l("grassland");
    l.drink_milk();
    l.eat_meat();
    cout << l.get_habitat() << endl;
    l.howl();

    cout << endl << "snake" << endl;
    snake s(true);
    cout << s.get_toxin() << endl;
    s.eat_meat();
    s.winter_sleep();
    s.set_toxin(false);
    cout << s.get_toxin() << endl;


    return 0;
}
