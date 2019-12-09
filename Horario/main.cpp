#include <iostream>
#include "Horario.h"

using namespace std;

int main()
{
    Horario hora1 = Horario(79,23,2);
    cout <<"Horario construido: "<<hora1.getHora()<<":"<<hora1.getMinuto()<<":"<<hora1.getSegundo()<<endl;
    hora1.setHorario(6,30,0);
    cout <<"Horario setado: "<<hora1.getHora()<<":"<<hora1.getMinuto()<<":"<<hora1.getSegundo()<<endl;
    for(int i = 0; i <10000; i++){
        hora1.avancarHorario();
    }

    cout <<"Futuro: "<<hora1.getHora()<<":"<<hora1.getMinuto()<<":"<<hora1.getSegundo()<<endl;

    return 0;
}
