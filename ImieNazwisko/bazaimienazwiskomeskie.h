#ifndef BAZAIMIENAZWISKOMESKIE_H
#define BAZAIMIENAZWISKOMESKIE_H

#include <QString>
#include <QVector>
#include <QFile>
#include <QTextStream>
#include "imienazwiskostruct.h"
class BazaImieNazwiskoMeskie
{
    QFile plikImieMeskie;
    QFile plikNazwiskoMeskie;

    QTextStream streamImieMeskie;
    QTextStream streamNazwiskoMeskie;


    QVector <QString> imieMeskie;
    QVector <QString> nazwiskoMeskie;


    void TworzBazeImie();
    void TworzBazeNazwisko();

    void TworzBaze();
    public:

    BazaImieNazwiskoMeskie();
    ImieNazwisko generujImieNazwisko();
    ~BazaImieNazwiskoMeskie();

    QString generujImie();
    QString generujNazwisko();
};


#endif // BAZAIMIENAZWISKOMESKIE_H
