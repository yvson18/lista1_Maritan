#include <iostream>
#include <string>
#include "ControleDePagamentos.h"
#include "Pagamento.h"

void ControleDePagamentos::setPagamentos(Pagamento p,int pos){
    pagamentos[pos] = p;

}

double ControleDePagamentos::calculaTotaldePagamentos(){
    double soma = 0;

        for(int i = 0; i < 2; i++){
            soma += pagamentos[i].getValordoPagamento();
        }
    return soma;
}
bool ControleDePagamentos::existePagamentoParaFuncionario(std::string nome){

    bool state;

        for(int i = 0; i < 2; i++){
            if(nome==pagamentos[i].getnomeDoFuncionario()){
                state = true;
            }else{
                state = false;
            }
        }
    return state;
}


ControleDePagamentos::ControleDePagamentos()
{

}


