#include <iostream>
#include  <vector>
using namespace std;

int main() {

    bool prawda = true;

    while (prawda) {
        int wybor;
        vector<double> wydatki;
        cout << "---Menadzer Wydatkow---" << endl;
        cout << "1.Dodaj wydatek"<<endl;
        cout << "2.Pokaz wszystkie wydatki" <<endl;
        cout << "0.wyjscie" <<endl;
        cin >> wybor;


        switch (wybor) {
            case 1:
                cout << "Podaj kwote"<<endl;
                cin >> wydatki;
                break;
            case 2:

                break;
            case 0:
            prawda = false;
                break;
            default:

                break;
        }
    }

}