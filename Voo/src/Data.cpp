#include <iostream>
#include <string>
#include "Data.h"


//--------Set------------
void Data::setDia(int d){
    this->dia = d;
}
void Data::setMes(int m){
    this->mes = m;
}
void Data::setAno(int a){
    this->ano = a;
}
//--------Get-------------
int Data::getDia(){
    return this->dia;
}
int Data::getMes(){
    return this->mes;
}
int Data::getAno(){
    return this->ano;
}
//-------Construtor-------
Data::Data(int D, int M, int A){

    if((D>=1 && D<=31) && (M>=1 && M<=12)){
        setDia(D);
        setMes(M);
        setAno(A);
    }else{
        setDia(01);
        setMes(01);
        setAno(0001);
    }
}

//----Funcoes da questao--
int Data::compara(Data dataComp){

    if((dataComp.getDia()== this->dia)&&(dataComp.getMes()==mes)&&(dataComp.getAno()==ano)){
        return 0;
    }else if(ano < dataComp.getAno()){
        return -1;
    }else if(ano > dataComp.getAno()){
        return 1;
    }else if(mes < dataComp.getMes()){
        return -1;
    }else if(mes > dataComp.getMes()){
        return 1;
    }else if (dia < dataComp.getDia()){
        return -1;
    }else if(dia > dataComp.getDia()){
        return 1;
    }

}
bool Data::isBissexto(){

        if(ano % 4 == 0){
            if(ano % 100 != 0){
                return true;
            }else if(ano % 400 == 0){
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
}
std::string Data::getMesExtenso(){

    int m;
        m = mes;
        switch(m){

        case 1:
            return "Janeiro";
        case 2:
            return "Fevereiro";
        case 3:
            return "Marco";
        case 4:
            return "Abril";
        case 5:
            return "Maio";
        case 6:
            return "Junho";
        case 7:
            return "Julio";
        case 8:
            return "Agosto";
        case 9:
            return "Setembro";
        case 10:
            return "Outubro";
        case 11:
            return "Novembro";
        case 12:
            return "Dezembro";
        }
}

Data::Data()
{
    dia = 1;
    mes = 1;
    ano = 1;

}

