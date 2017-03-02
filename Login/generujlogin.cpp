#include "generujlogin.h"
GenerujLogin::GenerujLogin()
{

}
QString GenerujLogin::generujLogin(QString imie, QString nazwisko)
{
    imie = imie.toLower();
    nazwisko = nazwisko.toLower();
    return imie + "." + nazwisko;
}
