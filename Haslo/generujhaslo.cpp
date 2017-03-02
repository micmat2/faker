#include "generujhaslo.h"
#include <ctime>
#include <iostream>
GenerujHaslo::GenerujHaslo()
{
    srand(time(NULL));
}
QString GenerujHaslo::generujHaslo(int dlugoscHasla){
    //od 33 do 127
    QString haslo = "";
    unsigned znak = 0;
    for(int i = 0; i < dlugoscHasla;i++){
        switch(rand()%3){
            case 0: znak = rand()%10+48;    break;
            case 1: znak = rand()%26+65;    break;
            case 2: znak = rand()%26+97;    break;
        }
        haslo += char(znak);
    }
    return  haslo;
}
