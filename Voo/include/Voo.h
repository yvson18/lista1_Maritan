#ifndef VOO_H
#define VOO_H
#define TM 100
#include "Data.h"
#include "Horario.h"
#include <string>

class Voo
{
    public:
        Voo(int n, Data d, Horario h);
        Data getData();
        Horario getHorario();
        int getNumVoo();
        int proximoLivre();
        std::string verifica(int cadeira);
        int vagas();
        bool ocupa(int cadeira);

    private:
        bool lugares[TM] = {0};
        int num;
        Data data;
        Horario horario;
};

#endif // VOO_H
