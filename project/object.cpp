#include "object.h"

Object::Object(int x, int y): posX(x), posY(y) {}

int Object::GetX() {
    return posX;
}

int Object::GetY() {
    return posY;
}

void Object::SetXY(int x, int y) {
    posX = x;
    posY = y;
}
