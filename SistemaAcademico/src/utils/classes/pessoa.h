
#ifndef PESSOA_H_
#define PESSOA_H_

#include <string>
using namespace std;

#include "universidade.h"
#include "data.h"

class Pessoa {

    protected:
        int id;
        int idade;
        Data dataNasc;
        string nome;

    public:
        Pessoa();
        Pessoa(int diaNasc, int mesNasc, int anoNasc, const char* nome = "");

        ~Pessoa();

        void calcIdade(int diaAtual, int mesAtual, int anoAtual);
        void init(int diaNasc, int mesNasc, int anoNasc, const char* nome = "");
        
        int getIdade() {return idade;}

        int getId() {return id;}
        void setId(int id) {this->id = id;}

        string getNome() {return nome;}
        void setNome(const char* nome) {this->nome = nome;}
};

#endif // PESSOA_H_
