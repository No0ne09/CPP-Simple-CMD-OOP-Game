#ifndef KEYBOARDGETCH_H
#define KEYBOARDGETCH_H

#include <conio.h>
#include "keyboard.h"

class KeyboardGetch : public Keyboard {
private:
    KeyboardGetch(const KeyboardGetch& re);
    KeyboardGetch& operator=(const KeyboardGetch& re);
public:
    KeyboardGetch(){};
    virtual ~KeyboardGetch(){};
    virtual int Input();
};

#endif
