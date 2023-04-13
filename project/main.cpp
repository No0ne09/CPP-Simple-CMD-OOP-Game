#include <iostream>
#include <ctime>

#include "gra.h"
#include "gracmd.h"



using namespace std;

int main() {
    srand(time(NULL));
    Gra Gra;
    Gra.Play();
    return 0;
}
