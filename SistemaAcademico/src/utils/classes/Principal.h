
#ifndef PRINCIPAL_H_
#define PRINCIPAL_H_

#include "Pessoa.h"
#include "Universidade.h"

class Principal {

    private:
        Pessoa simao;
        Pessoa einstein;
        Pessoa newton;

        int diaAtual;
        int mesAtual;
        int anoAtual;

        Universidade utfpr;

    public:
       Principal();

       ~Principal();

       void executar();
};

#endif // PRINCIPAL_H_
