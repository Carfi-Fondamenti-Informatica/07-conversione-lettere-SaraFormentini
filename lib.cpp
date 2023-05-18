
#include "lib.h";
bool verifica (char b){
    int a;
    a=(int)b;
    if (((a>=65)&&(a<=90))or((a>=97)&&(a<=122))) {
        return true;
    }else {
        return false;
    }
}

char conversione (char b){
    char risultato;
    int a;
    a=int(b);
    if ((a>=65)&&(a<=90)){
        risultato = char (a+32);
    }else if ((a>=97)&&(a<=122)){
        risultato=char(a-32);
    }
    return risultato;
}
