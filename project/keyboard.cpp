#include "keyboard.h"
#include <iostream>
using namespace std;

#define KEY_UP_BIG 87
#define KEY_DOWN_BIG 83
#define KEY_LEFT_BIG 65
#define KEY_RIGHT_BIG 68

#define KEY_UP 119
#define KEY_DOWN 115
#define KEY_LEFT 97
#define KEY_RIGHT 100

int Keyboard::Input() {
    char c;
    std::cin >> c;
    switch(c) {
        case 'w':
        case 'W':
            return KEY_UP;
        case 's':
        case 'S':
            return KEY_DOWN;
        case 'a':
        case 'A':
            return KEY_LEFT;
        case 'd':
        case 'D':
            return KEY_RIGHT;
        default:
            return 0;
    }
}
