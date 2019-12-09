#include <iostream>
#include <string.h>
#include "Data.h"

using namespace std;

int main()
{

    Data d1,d2;

    d1 = Data(21,01,1900);
    d2 = Data(11,11,2000);


   cout<<"Resultado da comparacao: "<<d1.compara(d2)<<endl;
   cout<<"Eh d1 bissexto?: "<<d1.isBissexto()<<endl;
   cout<<"Eh d2 bissexto?: "<<d2.isBissexto()<<endl;
   cout<<"Mes extenso: "<<d1.getMesExtenso()<<endl;


}
