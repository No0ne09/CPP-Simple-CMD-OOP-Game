#include "silnik.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Silnik::Silnik()
    : Player(1, 1),
     Enemy1(14 - Player.GetX(), 14 - Player.GetY()),
     Moneta1(rand() % (6 - 1 + 1) + 1, rand() % (6 - 1 + 1) + 1),
     Moneta2(rand() % (13 - 8 + 1) + 8, rand() % (6 - 1 + 1) + 1),
     Moneta3(rand() % (6 - 1 + 1) + 1, rand() % (13 - 8 + 1) + 8),
     Moneta4(rand() % (13 - 8 + 1) + 8, rand() % (13 - 8 + 1) + 8) {}




     void Silnik :: Sterowanie(int &kroki, int &licz_enemy, int &licz_player)  {
        switch(keyboard.Input()){

                case KEY_UP_BIG:
                case KEY_UP:

                    if(Tab.GetTab()[(Player.GetY()-1)*15+Player.GetX()] != '#'&&kroki>0){
                        Player.SetXY(Player.GetX(), Player.GetY()-1);
                        Enemy1.SetXY(14-Player.GetX(),14-Player.GetY());
                         kroki--;
                    }

                break;

            case KEY_DOWN_BIG:
            case KEY_DOWN:

                    if(Tab.GetTab()[(Player.GetY()+1)*15+Player.GetX()] != '#'&&kroki>0){
                        Player.SetXY(Player.GetX(), Player.GetY()+1);
                        Enemy1.SetXY(14-Player.GetX(),14-Player.GetY());
                         kroki--;
                    }

                break;

            case KEY_RIGHT_BIG:
            case KEY_RIGHT:

                    if(Tab.GetTab()[Player.GetY()*15+Player.GetX()+1] != '#'&&kroki>0){
                        Player.SetXY(Player.GetX()+1, Player.GetY());
                        Enemy1.SetXY(14-Player.GetX(),14-Player.GetY());

                         kroki--;
                    }

                break;

            case KEY_LEFT_BIG:
            case KEY_LEFT:

                    if(Tab.GetTab()[Player.GetY()*15+Player.GetX()-1] != '#'&&kroki>0){
                        Player.SetXY(Player.GetX()-1, Player.GetY());
                        Enemy1.SetXY(14-Player.GetX(),14-Player.GetY());
                        kroki--;
                    }

                break;
        }
         if (Player.GetX() == Enemy1.GetX() && Player.GetY() == Enemy1.GetY()) {
            system("cls");
        cout << "Wrog Cie dopadl!" << endl;
        exit(0);

    }
    //moneta1
    if (Player.GetX() == Moneta1.GetX() && Player.GetY() == Moneta1.GetY()) {
        Moneta1.SetXY(rand()%(6-1+1)+1,rand()%(6-1+1)+1);
if (Player.GetX() == Moneta1.GetX() && Player.GetY() == Moneta1.GetY())
        Moneta1.SetXY(rand()%(6-1+1)+1,rand()%(6-1+1)+1);
        licz_player++;

    }
     if (Enemy1.GetX() == Moneta1.GetX() && Enemy1.GetY() == Moneta1.GetY()) {
        Moneta1.SetXY(rand()%(6-1+1)+1,rand()%(6-1+1)+1);
        if (Enemy1.GetX() == Moneta1.GetX() && Enemy1.GetY() == Moneta1.GetY())
        Moneta1.SetXY(rand()%(6-1+1)+1,rand()%(6-1+1)+1);
        licz_enemy+=10;

    }

    //moneta2
    if (Player.GetX() == Moneta2.GetX() && Player.GetY() == Moneta2.GetY()) {
        Moneta2.SetXY(rand()%(13-8+1)+8,rand()%(6-1+1)+1);
        if (Player.GetX() == Moneta2.GetX() && Player.GetY() == Moneta2.GetY())
        Moneta2.SetXY(rand()%(13-8+1)+8,rand()%(6-1+1)+1);
        licz_player++;

    }
     if (Enemy1.GetX() == Moneta2.GetX() && Enemy1.GetY() == Moneta2.GetY()) {
        Moneta2.SetXY(rand()%(13-8+1)+8,rand()%(6-1+1)+1);
        if (Enemy1.GetX() == Moneta2.GetX() && Enemy1.GetY() == Moneta2.GetY())
        Moneta2.SetXY(rand()%(13-8+1)+8,rand()%(6-1+1)+1);
        licz_enemy+=10;

    }
    //moneta 3
    if (Player.GetX() == Moneta3.GetX() && Player.GetY() == Moneta3.GetY()) {
        Moneta3.SetXY(rand()%(6-1+1)+1,rand()%(13-8+1)+8);
        if (Player.GetX() == Moneta3.GetX() && Player.GetY() == Moneta3.GetY())
        Moneta3.SetXY(rand()%(6-1+1)+1,rand()%(13-8+1)+8);
        licz_player++;

    }
     if (Enemy1.GetX() == Moneta3.GetX() && Enemy1.GetY() == Moneta3.GetY()) {
        Moneta3.SetXY(rand()%(6-1+1)+1,rand()%(13-8+1)+8);
        if (Enemy1.GetX() == Moneta3.GetX() && Enemy1.GetY() == Moneta3.GetY())
        Moneta3.SetXY(rand()%(6-1+1)+1,rand()%(13-8+1)+8);
        licz_enemy+=10;

    }

    //moneta 4
    if (Player.GetX() == Moneta4.GetX() && Player.GetY() == Moneta4.GetY()) {
        Moneta4.SetXY(rand()%(13-8+1)+8,rand()%(13-8+1)+8);
        if (Player.GetX() == Moneta4.GetX() && Player.GetY() == Moneta4.GetY())
        Moneta4.SetXY(rand()%(13-8+1)+8,rand()%(13-8+1)+8);
        licz_player++;

    }
     if (Enemy1.GetX() == Moneta4.GetX() && Enemy1.GetY() == Moneta4.GetY()) {
        Moneta4.SetXY(rand()%(13-8+1)+8,rand()%(13-8+1)+8);
        if (Enemy1.GetX() == Moneta4.GetX() && Enemy1.GetY() == Moneta4.GetY())
        Moneta4.SetXY(rand()%(13-8+1)+8,rand()%(13-8+1)+8);
        licz_enemy+=10;

    }

}

void Silnik :: CheckWin( int &licz_enemy, int &licz_player){
        cout<<"Uzyskales: "<<licz_player<<" pkt"<<endl;
       cout<<"Przeciwnik uzyskal: "<<licz_enemy<<" pkt"<<endl;
       if(licz_player>licz_enemy){
        cout<<"WYGRALES!"<<endl;
       }
       if(licz_player<licz_enemy){
        cout<<"WYGRAL PRZECIWNIK!"<<endl;
       }
       if(licz_player==licz_enemy){
        cout<<"REMIS!"<<endl;
       }

    }

