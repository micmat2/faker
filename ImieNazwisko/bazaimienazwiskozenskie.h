#ifndef BAZAIMIENAZWISKOZENSKIE_H
#define BAZAIMIENAZWISKOZENSKIE_H

#include <QString>
#include <QVector>
#include <QFile>
#include <QTextStream>
#include "imienazwiskostruct.h"

class BazaImieNazwiskoZenskie
{
    QFile plikImieZenskie;
    QFile plikNazwiskoZenskie;

    QTextStream streamImieZenskie;
    QTextStream streamNazwiskoZenskie;


    QVector <QString> imieZenskie;
    QVector <QString> nazwiskoZenskie;


    void TworzBazeImie();
    void TworzBazeNazwisko();

    void TworzBaze();
    public:

    BazaImieNazwiskoZenskie();
    ImieNazwisko generujImieNazwisko();
    QString generujImie();
    QString generujNazwisko();
    ~BazaImieNazwiskoZenskie();
};


#endif // BAZAIMIENAZWISKOZENSKIE_H
