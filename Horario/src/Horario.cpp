#include <iostream>
#include "Horario.h"

using namespace std;

void Horario::setHora(int h){
    this->hora = h;
}
void Horario::setMinuto(int m){
    this->minuto = m;
}
void Horario::setSegundo(int s){
    this->segundo = s;
}
int Horario::getHora(){
    return this->hora;
}
int Horario::getMinuto(){
    return this->minuto;
}
int Horario::getSegundo(){
    return this->segundo;
}

void Horario::setHorario(int h, int m, int s){

    if((s >= 0 && s <=59) && (m >= 0 && m <= 59) && (h >= 0 && h <=23)){
        setSegundo(s);
        setMinuto(m);
        setHora(h);
    }else{
        setSegundo(0);
        setMinuto(0);
        setHora(0);

    }
}

void Horario::avancarHorario(){
    segundo += 1;

    if(segundo > 59){
        minuto +=1;
        segundo = 0;
        cout<<"entrei nos segundos"<<endl;
    }else if(minuto > 59){
        cout<<"entrei nos minutos"<<endl;
        hora += 1;
        minuto = 0;
        segundo = 0;

    }else if( hora > 23){
        cout<<"entrei nas horas"<<endl;
        hora = 0;
        minuto = 0;
        segundo = 0;
    }

}
Horario::Horario(int h , int m, int s)
{

    if((s >= 0 && s <=59) && (m >= 0 && m <= 59) && (h >= 0 && h <=23)){
        setSegundo(s);
        setMinuto(m);
        setHora(h);
    }else{
        setSegundo(0);
        setMinuto(0);
        setHora(0);

    }
}

Horario::Horario()
{
    setSegundo(0);
    setMinuto(0);
    setHora(0);

}


