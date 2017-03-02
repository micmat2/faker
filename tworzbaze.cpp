#include "tworzbaze.h"
#include <iostream>
TworzDane::TworzDane(){
    bd = new BazaMySQL;
    gen= new Generator;
}
TworzDane::~TworzDane(){
    delete bd;
    delete gen;
}

void TworzDane::dodajRekord(){
    ImieNazwisko imienazwisko   = gen->generujImieNazwisko();

    QString login               = wCudzyslow(gen->generujLogin(imienazwisko.Imie, imienazwisko.Nazwisko));

    imienazwisko.Imie           = wCudzyslow(imienazwisko.Imie);
    imienazwisko.Nazwisko       = wCudzyslow(imienazwisko.Nazwisko);
    QString haslo               = wCudzyslow(gen->generujHaslo(10));



    QString zap = "INSERT INTO user VALUES (NULL, " + login + "," + haslo + "," + imienazwisko.Imie + "," + imienazwisko.Nazwisko + ")";

    if(!bd->zaptanie(zap)){
        std::cout << zap.toStdString() << std::endl << std::endl;
    }
}
QString TworzDane::wCudzyslow(QString kolumna){
    return "\"" + kolumna + "\"";
}
