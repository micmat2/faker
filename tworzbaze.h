#ifndef TWORZBAZE_H
#define TWORZBAZE_H
#include <QString>
#include "bazamysql.h"
#include "generator.h"

class TworzDane{
    BazaMySQL *bd;
    Generator *gen;
public:

    TworzDane();
    ~TworzDane();
    QString wCudzyslow(QString kolumna);

    void dodajRekord();
};
#endif // TWORZBAZE_H
