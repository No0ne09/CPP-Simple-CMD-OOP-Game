#include "tablica.h"

Tablica::Tablica()
{
    for (int i = 0; i < 15; i++) {
            for (int j = 0; j < 15; j++) {
                if (i == 0 || i == 14 || j == 0 || j == 14) {
                    Tab[i][j] = '#';
                } else {
                    Tab[i][j] = '.';
                }
            }
        }


}

char* Tablica:: GetTab() {
        return &Tab[0][0];
    }
