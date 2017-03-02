#include "bazaimienazwiskomeskie.h"
#include <ctime>


BazaImieNazwiskoMeskie::BazaImieNazwiskoMeskie(){
    srand(time(NULL));

    plikImieMeskie.setFileName("../dane/imionameskie");

    if(plikImieMeskie.open( QIODevice::ReadOnly | QIODevice::Text)){

        streamImieMeskie.setDevice(&plikImieMeskie);
        plikNazwiskoMeskie.setFileName("../dane/nazwiskameskie");

        if(plikNazwiskoMeskie.open( QIODevice::ReadOnly | QIODevice::Text)){
            streamNazwiskoMeskie.setDevice(&plikNazwiskoMeskie);

        }
    }
    TworzBaze();
}
BazaImieNazwiskoMeskie::~BazaImieNazwiskoMeskie(){
    imieMeskie.clear();
    nazwiskoMeskie.clear();
}


void BazaImieNazwiskoMeskie::TworzBaze(){
    TworzBazeImie();
    TworzBazeNazwisko();
}
void BazaImieNazwiskoMeskie::TworzBazeImie(){
    QString imie = "";
    for(;;){
        imie = streamImieMeskie.readLine(0);
        imieMeskie.append(imie);
        if(streamImieMeskie.atEnd()){
            break;
        }
    }
}
void BazaImieNazwiskoMeskie::TworzBazeNazwisko(){
    QString nazwisko = "";
    for(;;){
        nazwisko = streamNazwiskoMeskie.readLine(0);
        nazwiskoMeskie.append(nazwisko);
        if(streamNazwiskoMeskie.atEnd()){
            break;
        }
    }
}
ImieNazwisko BazaImieNazwiskoMeskie::generujImieNazwisko(){
    ImieNazwisko t;
    int losimie = rand()%(imieMeskie.size()-1);
    int losnazwisko = rand()%(nazwiskoMeskie.size()-1);

    t.Imie = imieMeskie[losimie];
    t.Nazwisko = nazwiskoMeskie[losnazwisko];

    return t;
}
QString BazaImieNazwiskoMeskie::generujImie(){
    int losimie = rand()%(imieMeskie.size()-1);
    return imieMeskie[losimie];
}

QString BazaImieNazwiskoMeskie::generujNazwisko(){
    int losnazwisko = rand()%(nazwiskoMeskie.size()-1);
    return nazwiskoMeskie[losnazwisko];
}
