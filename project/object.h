#ifndef OBJECT_H
#define OBJECT_H

class Object {
private:
    int posX;
    int posY;
    Object(const Object& re);
    Object& operator=(const Object& re);
public:
    Object(int x, int y);
    ~Object(){}
    int GetX();
    int GetY();
    void SetXY(int x, int y);
    friend class Silnik;
};

#endif // OBJECT_H
