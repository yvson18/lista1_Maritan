#include "Voo.h"
#include "Data.h"
#include "Horario.h"
#include <string>
#include <iostream>
#define TM 100

bool Voo::ocupa(int cadeira){

    int index = cadeira - 1;

     if(lugares[index] == false){
        lugares[index] = true;
       // std::cout <<lugares[index]<<std::endl;
        return true;
     }else{
        return false;
     }
}

int Voo::vagas(){

    int qnt = 0;
        for(int i  = 0; i < TM; i++){
            if(lugares[i] == false){
                qnt++;
            }
        }
        return qnt;
}


std::string Voo::verifica(int cadeira){
    int index = cadeira - 1;

        if(lugares[index] == true){
            return "Ocupado";
        }else{
            return "Disponivel";
        }
}

int Voo::proximoLivre(){
  int i;

    for( i  = 0; i < TM; i++){
      if(lugares[i] == false){
            break;
      }
    }
    return i+1;
}

int Voo::getNumVoo(){
    return this->num;
}

Data Voo::getData(){
    return this->data;
}

Horario Voo::getHorario(){
    return this->horario;
}

Voo::Voo(int n, Data d, Horario h)
{
    num = n;
    data.setDia(d.getDia());
    data.setMes(d.getMes());
    data.setAno(d.getAno());
    horario.setHorario(h.getHora(),h.getMinuto(),h.getSegundo());

}
