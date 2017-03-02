#include "generator.h"
#include <iostream>
#include <ctime>
using namespace std;
Generator::Generator(){
    srand(time(NULL));
    this->BDm = new BazaImieNazwiskoMeskie();
    this->BDz = new BazaImieNazwiskoZenskie();
}
Generator::~Generator(){
    delete BDm;
    delete BDz;
}
ImieNazwisko Generator::generujImieNazwiskoMeskie(){
    return BDm->generujImieNazwisko();
}
ImieNazwisko Generator::generujImieNazwiskoZenskie(){
    return BDz->generujImieNazwisko();
}
ImieNazwisko Generator::generujImieNazwisko(){
int los = rand()%2;
    if(los == 0){
        return BDz->generujImieNazwisko();
    }
    else{
        return  BDm->generujImieNazwisko();
    }
}
QString Generator::generujImieZenskie(){
    return BDz->generujImie();
}
QString Generator::generujImieMeskie(){
    return BDm->generujImie();
}
QString Generator::generujImie(){
    int los = rand()%2;
        if(los == 0){
            return BDz->generujImie();
        }
        else{
            return  BDm->generujImie();
        }
}
QString Generator::generujLogin(QString imie, QString nazwisko){
    return login.generujLogin(imie, nazwisko);
}

QString Generator::generujHaslo(int dlugoscHasla){
    return haslo.generujHaslo(10);

}
