#ifndef INVOICE_H
#define INVOICE_H

class Invoice
{
    public:
       Invoice();
       Invoice(int N,int Q,double P,std::string D);
       void setNum(int n);
       void setQnt(int q);
       void setPreco(double p);
       void setDescricao(std::string d);

       int getNum();
       int getQnt();
       double getPreco();
       std::string getDescricao();
       double getInvoiceAmount();

    private:
        int num,qnt;
        double preco;
        std::string descricao;

};

#endif // INVOICE_H_
