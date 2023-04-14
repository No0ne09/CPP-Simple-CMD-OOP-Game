#include "gra.h"

Gra::Gra() {
    kroki = 100;
    licz_enemy = 0;
    licz_player = 0;
}


void Gra::Display(int& kroki, int& licz_enemy, int& licz_player) {
    cout << "Twoja kolumna: " << Player.GetX()<<" ";
    cout << "Twoj wiersz: " << Player.GetY() << endl;
    cout << "Wrogi wiersz: " << Enemy1.GetX()<<" ";
    cout << "Wroga kolumna: " << Enemy1.GetY() << endl;
    cout << "Moneta 1 kolumna: " << Moneta1.GetX()<< endl;;
    cout << "Moneta 1 wiersz: " << Moneta1.GetY() << endl;
    cout << "Moneta 2 kolumna: " << Moneta2.GetX()<< endl;;
    cout << "Moneta 2 wiersz: " << Moneta2.GetY() << endl;
    cout << "Moneta 3 kolumna: " << Moneta3.GetX()<< endl;;
    cout << "Moneta 3 wiersz: " << Moneta3.GetY() << endl;
    cout << "Moneta 4 kolumna: " << Moneta4.GetX()<< endl;;
    cout << "Moneta 4 wiersz: " << Moneta4.GetY() << endl;
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
