#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

int main()
{

   int sair = 0,op,idade;
   Pessoa p1 = Pessoa("");
   Pessoa p2 = Pessoa("",0,"0");
   string nome,telefone;

        do{

          cout << "Digite a op\n1 = cadastrar\n2 = Exibir\n3 = sair"<<endl;;
          cin>> op;
            switch(op){
            case 1:
                cout << "nome Pessoa 1: ";
                cin >> nome;
                p1.setNome(nome);
                cout << "nome Pessoa 2: ";
                cin >> nome;
                p2.setNome(nome);
                cout << "idade pessoa 2: ";
                cin >> idade;
                p2.setIdade(idade);
                cout << "telefone pessoa 2: ";
                cin >> telefone;
                p2.setTelefone(telefone);
                break;

            case 2:
                cout<<"Pessoa 1: "<< p1.getNome()<<endl;
                cout<<"Pessoa 2: "<< p2.getNome()<<endl;
                cout<<p2.getTelefone()<<endl;
                cout<<p2.getIdade()<<endl;
                break;
            case 3:
                sair = 1;
                break;
            default:
                cout << "op invalida"<<endl;
                break;
            }

        }while(!sair);



    return 0;
}
