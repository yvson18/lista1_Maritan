#include <iostream>
#include <string>
#include "Pagamento.h"

void Pagamento::setValorDoPagamento(double valorDoPagamento){
    this->valorDoPagamento = valorDoPagamento;
}
void Pagamento::setNomeDoFuncionario(std::string nomeDoFuncionario){
    this->nomeDoFuncionario = nomeDoFuncionario;
}
double Pagamento::getValordoPagamento(){
    return this->valorDoPagamento;
}
std::string Pagamento::getnomeDoFuncionario(){
    return this->nomeDoFuncionario;
}

Pagamento::Pagamento(double vPg,std::string nF){
    setValorDoPagamento(vPg);
    setNomeDoFuncionario(nF);
}
Pagamento::Pagamento(){

}

