#include <iostream>
using namespace std;

int main() {
    float a=0, b=0, A=0;
    int opzione=0;
    cout << "Inserire le misure dei lati a: " << endl;
    cin >> a;
    cout << "E b: " << endl;
    cin >> b;
    cout << "Scegliere l'area da calcolare: \n -Digitare 1 per Area triangolo; \n -Digitare 2 per area quadrato; \n -Digitare 3 per area rettangolo" << endl;
    cin >> opzione;
    switch (opzione) {
        case 1:
            A= (a*b)/2;
            cout << "Il risultato dell'area richiesta e\':  " << A << endl;
            break;
        case 2:
            A= a*a;
            cout << "Il risultato dell'area richiesta e\':  " << A << endl;
            break;
        case 3:
            A= a*b;
            cout << "Il risultato dell'area richiesta e\':  " << A << endl;
            break;
        default :
            cout << "opzione non valida" << endl;
            break;
    }


    return 0;
}
