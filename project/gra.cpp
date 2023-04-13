#include "gra.h"

Gra::Gra() {
    kroki = 100;
    licz_enemy = 0;
    licz_player = 0;
}


void Gra::Display(int& kroki, int& licz_enemy, int& licz_player) {
    cout << "Twoj x: " << Player.GetX();
    cout << " Twoj y: " << Player.GetY() << endl;
    cout << "Wrogi x: " << Enemy1.GetX();
    cout << " Wrogi y: " << Enemy1.GetY() << endl;
    cout << "Twoje punkty: " << licz_player << endl;
    cout << "Punkty przeciwnika: " << licz_enemy << endl;
    cout << "Pozostalo " << kroki << " ruchow" << endl;
}

void Gra::Play() {
    while (kroki) {
        Display(kroki, licz_enemy, licz_player);
        Sterowanie(kroki, licz_enemy, licz_player);
        system("cls");
    }
    system("cls");
    cout << "Koniec ruchow" << endl;
    CheckWin(licz_enemy, licz_player);
}
