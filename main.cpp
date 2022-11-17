#include <iostream>
using namespace std;

int main() {
    float a=0, b=0, A=0;
    int opzione=0;
   cin >> a >> b;
    cin >> opzione;
    switch (opzione) {
        case 0:
            A= (a*b)/2;
            cout << A << endl;
            break;
        case 1:
            A= a*a;
           cout << A << endl;
            break;
        case 2:
            A= a*b;
            cout << A << endl;
            break;
        default :
            cout << "opzione non valida" << endl;
            break;
    }


    return 0;
}
