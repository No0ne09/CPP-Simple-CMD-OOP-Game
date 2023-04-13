#ifndef SILNIK_H
#define SILNIK_H

#define KEY_UP_BIG 87
#define KEY_DOWN_BIG 83
#define KEY_LEFT_BIG 65
#define KEY_RIGHT_BIG 68

#define KEY_UP 119
#define KEY_DOWN 115
#define KEY_LEFT 97
#define KEY_RIGHT 100

#include "tablica.h"
#include "object.h"
#include "keyboardGetch.h"
#include "keyboard.h"

class Silnik {
private:
    Silnik(const Silnik& re);
    Silnik& operator=(const Silnik& re);
protected:
    Tablica Tab;
    Object Player;
    Object Enemy1;
    Object Moneta1;
    Object Moneta2;
    Object Moneta3;
    Object Moneta4;
    KeyboardGetch keyboard;
    void Sterowanie(int& kroki, int& licz_enemy, int& licz_player);
    void CheckWin(int& licz_enemy, int& licz_player);

public:
    Silnik();
    ~Silnik(){};

};

#endif
