#include <iostream>
#include "Data.cpp"
#include "Endereco.cpp"
using namespace std;

class Pessoa{
    private: 
        string nome;
        string sobrenome;
        long cpf;
        Data nascimento;
        Endereco endereco;

    public:

        Pessoa (string nome, string sobrenome, long cpf, int dia, int mes, int ano, Endereco(endereco)):       //as duas formas de definir as variáveis são possíveis
        nome{nome}, sobrenome{sobrenome}, nascimento{dia, mes, ano}, endereco{endereco}
        {
            this -> cpf = cpf;
        }

        void setNome(string nome, string sobrenome){      //make private "nome" and "sobrenome" variable public to external functions through SOBRECARGA DE METODO
            this -> nome = nome;
            this -> sobrenome = nome;
        }

        void setNome(string nome){      //make private "nome" variable public to external functions
            this -> nome = nome;
        }

        void setSobrenome(string sobrenome){      //make private "sobrenome" variable public to external functions
            this -> sobrenome = sobrenome;
        }      

        void setCPF(long cpf){      //make private "cpf" variable public to external functions
            this -> cpf = cpf;
        }

        string getNome(){      //make private "nome" variable public to external functions
            return nome;
        }

        string getSobrenome(){      //make private "sobrenome" variable public to external functions
            return sobrenome;
        }      

        long getCPF(){      //make private "cpf" variable public to external functions
            return cpf;
        }

        string getNascimento(){
            return this -> nascimento.getData();
        }

        string getEndereco(){
            return this->endereco.getEndereco();
        }

};