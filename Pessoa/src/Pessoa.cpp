#include <iostream>
#include <string>
#include "Pessoa.h"

void Pessoa::setNome(std::string n){
        nome = n;
}
void Pessoa::setTelefone(std::string t){
        telefone = t;
}
void Pessoa::setIdade(int i){
        idade = i;
}
std::string Pessoa::getNome(){
    return nome;
}
std::string Pessoa::getTelefone(){
    return telefone;
}
int Pessoa::getIdade(){
    return idade;
}

Pessoa::Pessoa(std::string n)
{
    setNome(n);

}
Pessoa::Pessoa(std::string n,int i ,std::string t)
{
    setNome(n);
    setIdade(i);
    setTelefone(t);

}
