#ifndef POLACZENIEMYSQL_H
#define POLACZENIEMYSQL_H
#include <QtSql>
#include <QString>
#include <QtDebug>

class BazaMySQL
{
private:
    bool czyPolaczenie;
    QSqlDatabase bd;

public:
    BazaMySQL();
    bool zaptanie(QString zap);
};

#endif // POLACZENIEMYSQL_H
