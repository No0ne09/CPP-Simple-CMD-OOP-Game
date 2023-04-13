#ifndef GRACMD_H
#define GRACMD_H

#include "gra.h"
#include <iostream>

using namespace std;

class GraCMD : public Gra {
public:
    GraCMD(){}
    virtual ~GraCMD(){}
    virtual void Display(int& kroki, int& licz_enemy, int& licz_player);

private:
    GraCMD(const GraCMD& re);
    GraCMD& operator=(const GraCMD& re);
};

#endif

