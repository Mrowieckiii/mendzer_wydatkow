#include <iostream>
#include  <vector>
using namespace std;

int main() {

    bool prawda = true;
    vector<double> wydatki;
    double kwota;

    while (prawda) {
        int wybor;
        cout << "---Menadzer Wydatkow---" << endl;
        cout << "1.Dodaj wydatek"<<endl;
        cout << "2.Pokaz wszystkie wydatki" <<endl;
        cout << "0.wyjscie" <<endl;
        cin >> wybor;


        switch (wybor) {
            case 1:
                cout << "Podaj kwote"<<endl;
                cin >> kwota;
                wydatki.push_back(kwota);
                break;
            case 2:
                if (wydatki.empty()) {
                    cout << "Brak zapisanych wydatkow!!" <<endl;
                }else {
                    for (int i = 0; i < wydatki.size(); i++) {
                      cout << i + 1 << " - " << wydatki[i] << "zl" << endl;
                    }
                }
                break;
            case 0:
            prawda = false;
                break;
            default:

                break;
        }
    }

}