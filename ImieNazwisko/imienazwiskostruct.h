#ifndef IMIENAZWISKOSTRUCT_H
#define IMIENAZWISKOSTRUCT_H
#include <QString>

struct ImieNazwisko{
    QString Imie;
    QString Nazwisko;
    QString ret(){
        return Imie + " " + Nazwisko;
    }
};

#endif // IMIENAZWISKOSTRUCT_H
