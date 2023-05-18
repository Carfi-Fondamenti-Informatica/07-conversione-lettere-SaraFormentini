#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char b;
    cin>>b;
    if (verifica(b)){
        cout<<conversione(b);
    }else{
        cout<<"errore";
    }


    return 0;
}

