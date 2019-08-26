
#ifndef PESSOA_H_
#define PESSOA_H_

#include <string>
using namespace std;

#include "Universidade.h"
#include "Data.h"

class Pessoa {

    private:
        Data dataNasc;
        int idade;
        string nome;
        Universidade* univFiliado;

    public:
        Pessoa();
        Pessoa(int diaNasc, int mesNasc, int anoNasc, const char* nome = "");

        ~Pessoa();

        void calcIdade(int diaAtual, int mesAtual, int anoAtual);
        void init(int diaNasc, int mesNasc, int anoNasc, const char* nome = "");
        
        int getIdade();

        string getNome();
        void setNome(const char* nome);

        Universidade* getUnivFiliado();
        void setUnivFiliado(Universidade* universidade);

        void ondeTrabalha();
};

#endif // PESSOA_H_
