
#ifndef PESSOA_H_
#define PESSOA_H_

#include "Universidade.h"

class Pessoa {

    private:
        int diaP;
        int mesP;
        int anoP;

        int idadeP;
        char nomeP[30];

        Universidade* pUnivFiliado;

    public:
        Pessoa();
        Pessoa(int diaNasc, int mesNasc, int anoNasc, const char* nome = "");

        ~Pessoa();

        void calcIdade(int diaAtual, int mesAtual, int anoAtual);
        void init(int diaNasc, int mesNasc, int anoNasc, const char* nome = "");
        
        int getIdade();
        void setIdade(int idade);

        Universidade* getUnivFiliado();
        void setUnivFiliado(Universidade* universidade);

        void ondeTrabalha();
};

#endif // PESSOA_H_
