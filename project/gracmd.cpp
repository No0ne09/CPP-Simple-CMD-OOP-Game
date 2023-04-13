 #include "gracmd.h"

 void GraCMD :: Display(int &kroki, int &licz_enemy, int &licz_player)  {

        for(int i=0;i<15;i++){
            for(int j=0;j<15;j++){
                if(j==Player.GetX() && i==Player.GetY()){
                   cout<<"P ";

                }
                else if (Enemy1.GetX() == j && Enemy1.GetY() == i) {
                cout << "E ";

                }
                else if (Moneta1.GetX() == j && Moneta1.GetY() == i) {
                cout << "$ ";

                }
                else if (Moneta2.GetX() == j && Moneta2.GetY() == i) {
                cout << "$ ";

                }
                else if (Moneta3.GetX() == j && Moneta3.GetY() == i) {
                cout << "$ ";

                }
                else if (Moneta4.GetX() == j && Moneta4.GetY() == i) {
                cout << "$ ";

                }
                else{
               cout<<Tab.GetTab()[i*15+j]<<" ";
                }
            }
           cout<<endl;

        }
        cout<<"Twoje punkty: "<<licz_player<<endl;
        cout<<"Punkty przeciwnika: "<<licz_enemy<<endl;
        cout<<"Pozostalo "<<kroki<<" ruchow"<<endl;



}
