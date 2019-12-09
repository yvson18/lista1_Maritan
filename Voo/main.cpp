#include <iostream>
#include <string>
#include "Voo.h"

using namespace std;

int main()
{
    Data d1 = Data(9,12,2019);
    Horario h1 = Horario(9,19,30);
    Voo latam = Voo(447,d1,h1);

        cout<<latam.ocupa(5)<<endl;
        cout<<latam.ocupa(5)<<endl;
        cout<<latam.proximoLivre()<<endl;
        cout<<latam.vagas()<<endl;
        cout<<latam.verifica(5)<<endl;
        cout<<latam.getNumVoo()<<endl;

    Data dteste = latam.getData();

        cout<<dteste.getDia()<<endl;
        cout<<dteste.getMes()<<endl;
        cout<<dteste.getAno()<<endl;

    Horario hteste = latam.getHorario();

        cout<<hteste.getHora()<<endl;
        cout<<hteste.getMinuto()<<endl;
        cout<<hteste.getSegundo()<<endl;



    return 0;
}
