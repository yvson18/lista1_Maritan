#ifndef PAGAMENTO_H
#define PAGAMENTO_H


class Pagamento
{
    public:
        Pagamento();
        Pagamento(double vPg,std::string nF);
        void setValorDoPagamento(double valorDoPagamento);
        void setNomeDoFuncionario(std::string nomeDoFuncionario);
        double getValordoPagamento();
        std::string getnomeDoFuncionario();

    private:
        double valorDoPagamento;
        std::string nomeDoFuncionario;
};

#endif // PAGAMENTO_H
