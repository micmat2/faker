#include <QCoreApplication>
#include <iostream>
#include <QFile>
#include <QTextStream>
#include "generator.h"
#include "bazamysql.h"
using namespace std;
class TworzDane{
    BazaMySQL *bd;
    Generator *gen;
public:

    TworzDane(){
        bd = new BazaMySQL;
        gen= new Generator;
    }
    ~TworzDane(){
        delete bd;
        delete gen;
    }
    void dodajRekord(){
        ImieNazwisko imienazwisko = gen->generujImieNazwisko();
        QString login = gen->generujLogin(imienazwisko.Imie, imienazwisko.Nazwisko);
        QString haslo = gen->generujHaslo(10);
        QString zap = "INSERT INTO user VALUES (NULL, \"" + login + "\", \"" + haslo + "\", \"" + imienazwisko.Imie + "\", \"" + imienazwisko.Nazwisko +"\")";

        if(!bd->zaptanie(zap)){
            cout << zap.toStdString() << endl << endl;
        }
    }
};

int main(int argc, char *argv[])
{


    TworzDane td;
    for(int i = 0; i < 100000; ++i){
        td.dodajRekord();
        if(i%100 == 0){
            cout << i << endl;
        }
    }

}
