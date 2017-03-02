#include "bazaimienazwiskozenskie.h"
#include <ctime>


BazaImieNazwiskoZenskie::BazaImieNazwiskoZenskie(){
    srand(time(NULL));
    plikImieZenskie.setFileName("../dane/imionazenskie");
    if(plikImieZenskie.open( QIODevice::ReadOnly | QIODevice::Text)){
        streamImieZenskie.setDevice(&plikImieZenskie);
        plikNazwiskoZenskie.setFileName("../dane/nazwiskazenskie");
        if(plikNazwiskoZenskie.open( QIODevice::ReadOnly | QIODevice::Text)){
            streamNazwiskoZenskie.setDevice(&plikNazwiskoZenskie);

        }
    }

TworzBaze();
}
BazaImieNazwiskoZenskie::~BazaImieNazwiskoZenskie(){
    imieZenskie.clear();
   nazwiskoZenskie.clear();
}


void BazaImieNazwiskoZenskie::TworzBaze(){
    TworzBazeImie();
    TworzBazeNazwisko();
}
void BazaImieNazwiskoZenskie::TworzBazeImie(){
    QString imie = "";
    for(;;){
        imie = streamImieZenskie.readLine(0);
        imieZenskie.append(imie);
        if(streamImieZenskie.atEnd()){
            break;
        }
    }
}
void BazaImieNazwiskoZenskie::TworzBazeNazwisko(){
    QString nazwisko = "";
    for(;;){
        nazwisko = streamNazwiskoZenskie.readLine(0);
       nazwiskoZenskie.append(nazwisko);
        if(streamNazwiskoZenskie.atEnd()){
            break;
        }
    }
}
ImieNazwisko BazaImieNazwiskoZenskie::generujImieNazwisko(){
    ImieNazwisko t;
    int losimie = rand()%(imieZenskie.size()-1);
    int losnazwisko = rand()%(nazwiskoZenskie.size()-1);

    t.Imie = imieZenskie[losimie];
    t.Nazwisko =nazwiskoZenskie[losnazwisko];

    return t;
}
QString BazaImieNazwiskoZenskie::generujImie(){
    int losimie = rand()%(imieZenskie.size()-1);
    return imieZenskie[losimie];
}

QString BazaImieNazwiskoZenskie::generujNazwisko(){
    int losnazwisko = rand()%(nazwiskoZenskie.size()-1);
    return nazwiskoZenskie[losnazwisko];
}
