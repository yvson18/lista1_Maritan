#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"

class ControleDePagamentos
{
    public:
        ControleDePagamentos();
        void setPagamentos(Pagamento p,int pos);
        double calculaTotaldePagamentos();
        bool existePagamentoParaFuncionario(std::string nome);

    private:
        Pagamento pagamentos[2];
};

#endif // CONTROLEDEPAGAMENTOS_H
