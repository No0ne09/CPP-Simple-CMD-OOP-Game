#ifndef KEYBOARD_H
#define KEYBOARD_H

class Keyboard {
    private:
    Keyboard(const Keyboard& re);
    Keyboard& operator=(const Keyboard& re);
public:
    Keyboard(){};
    virtual ~Keyboard(){};
    virtual int Input();
    friend class Silnik;

};

#endif
