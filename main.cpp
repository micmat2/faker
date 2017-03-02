#include <QCoreApplication>
#include <iostream>
#include <QFile>
#include <QTextStream>
#include "tworzbaze.h"
using namespace std;


int main(int argc, char *argv[])
{


    TworzDane td;
    for(int i = 0; i < 10; ++i){
        td.dodajRekord();
        if(i%100 == 0){
            cout << i << endl;
        }
    }

}
