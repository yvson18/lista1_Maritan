#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main(){

    Invoice teclado = Invoice(123423,200,120.50,"teclado cobra cobra razer");

    cout <<teclado.getNum()<<endl;
    cout <<teclado.getQnt()<<endl;
    cout <<teclado.getPreco()<<endl;
    cout <<teclado.getDescricao()<<endl;

return 0;
}











