#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char b;
    cin>>b;
    if (verifica(b)){
        cout<<"vero";
        cout << conversione (b);
    }else {
        cout<<"errore"<<endl;
    }

    return 0;
}
