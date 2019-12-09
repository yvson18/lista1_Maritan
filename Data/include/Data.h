#ifndef DATA_H
#define DATA_H

class Data
{
    public:
        Data();
        Data(int D, int M, int A);
        int getDia();
        int getMes();
        int getAno();
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);
        int compara(Data dataComp);
        bool isBissexto();
        std::string getMesExtenso();

    private:
        int dia,mes,ano;
};

#endif // DATA_H
