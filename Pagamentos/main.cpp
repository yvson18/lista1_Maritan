#include <iostream>
#include <string>
#include "Pagamento.h"
#include "ControleDePagamentos.h"

using namespace std;

int main()
{
    Pagamento func1,func2;
    func1.setValorDoPagamento(1500);
    func1.setNomeDoFuncionario("Batman");
    func2.setValorDoPagamento(1200);
    func2.setNomeDoFuncionario("Shazam");
    ControleDePagamentos d;

    d.setPagamentos(func1,0);
    d.setPagamentos(func2,1);

    cout << d.calculaTotaldePagamentos()<<endl;

    return 0;
}
