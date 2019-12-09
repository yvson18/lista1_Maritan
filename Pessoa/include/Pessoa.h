#ifndef PESSOA_H
#define PESSOA_H


class Pessoa
{
    public:
        Pessoa(std::string n);
        Pessoa(std::string n,int i ,std::string t);
        void setNome(std::string n);
        void setTelefone(std::string t);
        void setIdade(int i);
        std::string getNome();
        std::string getTelefone();
        int getIdade();

    private:
        std::string nome,telefone;
        int idade;

};

#endif // PESSOA_H
