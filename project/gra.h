#ifndef GRA_H
#define GRA_H

#include "silnik.h"
#include <iostream>

using namespace std;

class Gra : public Silnik {
public:
    Gra();
    virtual ~Gra(){};
    virtual void Display(int& kroki, int& licz_enemy, int& licz_player);
    void Play();

private:
    int kroki;
    int licz_enemy;
    int licz_player;
    Gra(const Gra& re);
    Gra& operator=(const Gra& re);
};

#endif
