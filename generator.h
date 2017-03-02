#ifndef GENERATOR_H
#define GENERATOR_H
#include <QString>
#include "modul.h"



class Generator
{
private:
    BazaImieNazwiskoMeskie  *BDm;
    BazaImieNazwiskoZenskie *BDz;

    GenerujLogin            login;

    GenerujHaslo            haslo;
public:
    Generator();
    ~Generator();
    ImieNazwisko generujImieNazwiskoMeskie();
    ImieNazwisko generujImieNazwiskoZenskie();
    ImieNazwisko generujImieNazwisko();
    QString      generujImieZenskie();
    QString      generujImieMeskie();
    QString      generujImie();

    QString      generujLogin(QString imie, QString nazwisko);

    QString      generujHaslo(int dlugoscHasla);
};

#endif // GENERATOR_H
