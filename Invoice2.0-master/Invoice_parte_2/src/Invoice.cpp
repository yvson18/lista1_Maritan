#include <iostream>
#include <string>
#include "Invoice.h"


void Invoice::setNum(int n){
    this->num = n;
}

void Invoice::setPreco(double p){
    if(p < 0){
        this->preco = 0.0;
    }else{
        this->preco = p;
    }
}

void Invoice::setQnt(int q){

    if(q < 0){
        this->qnt = 0;
    }else{
        this->qnt = q;
    }
}

void Invoice::setDescricao(std::string d){
    this->descricao = d;
}

int Invoice::getNum(){
    return this->num;
}
int Invoice::getQnt(){
    return this->qnt;
}
double Invoice::getPreco(){
    return this->preco;
}
std::string Invoice::getDescricao(){
    return this->descricao;
}

Invoice::Invoice(){
    setNum(0);
    setQnt(0);
    setPreco(0.0);
    setDescricao("");
}

Invoice::Invoice(int N,int Q,double P,std::string D){

    setNum(N);
    setQnt(Q);
    setPreco(P);
    setDescricao(D);
}

