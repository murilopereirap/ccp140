#include <iostream>
#include "Pessoa.cpp"
using namespace std;

int main(){
    Endereco e("Rua R", 1, "Bairo B");
    Pessoa p("Nome", "Sobrenome", 123456789, 11, 9, 2001, e);

    cout << "Dados da Pessoa" << endl;
    cout << "Nome: " << p.getNome() << " "<< p.getSobrenome() << endl;
    cout << "CPF: " << p.getCPF() << endl;
    cout << "Nascimento: " << p.getNascimento() << endl;
    cout << "Endereco: " << p.getEndereco() << endl;
}