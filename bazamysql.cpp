#include "bazamysql.h"

BazaMySQL::BazaMySQL()
{
    QString haslo       = "Qwerty12#";
    QString nazwa       = "test";
    QString uzytkownik  = "test";
    QString host        = "localhost";

    bd = QSqlDatabase::addDatabase( "QMYSQL" );

    bd.setDatabaseName(nazwa);
    bd.setHostName(host);
    bd.setPassword(haslo);
    bd.setUserName(nazwa);
    if( !bd.open() )
    {
        qDebug() << "Cos nie tak. brak polaczenie\n";
        czyPolaczenie = false;
    }
    else{
        qDebug() << "Jest polaczenie\n";
        czyPolaczenie = true;
    }
}
bool BazaMySQL::zaptanie(QString zap){
    if(this->czyPolaczenie){
        QSqlQuery qry;

        qry.prepare( zap );
        if( !qry.exec() ){
          qDebug() << "Nie moge wykonac zapytania";
          return false;
        }
        else{

           return true;

        }
    }
    else{
        return false;
    }
}


