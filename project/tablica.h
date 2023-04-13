#ifndef TABLICA_H
#define TABLICA_H

class Tablica {
private:
    char Tab[15][15];
    Tablica(const Tablica& re);
    Tablica& operator=(const Tablica& re);
public:

    Tablica();
    ~Tablica(){};
    char* GetTab();
    friend class Silnik;
};

#endif

