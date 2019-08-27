
// Imported module
#include "pessoa.h"

// Function declarations:

// ---------------------------------------------------------------------------

void Pessoa::init(int diaNasc, int mesNasc, int anoNasc, const char* nome) {
    this->dataNasc.init(diaNasc, mesNasc, anoNasc);
    this->nome = nome;
}

// ---------------------------------------------------------------------------

Pessoa::Pessoa(int diaNasc, int mesNasc, int anoNasc, const char* nome) {
    init(diaNasc, mesNasc, anoNasc, nome);
}

// ---------------------------------------------------------------------------

Pessoa::Pessoa() {
    init(0, 0, 0);
}

// ---------------------------------------------------------------------------

Pessoa::~Pessoa() {
    // noop
}

// ---------------------------------------------------------------------------

void Pessoa::calcIdade(int diaAtual, int mesAtual, int anoAtual) {
    idade = anoAtual - dataNasc.getAno();

    if(dataNasc.getMes() > mesAtual) {
        --idade;
    } else if(dataNasc.getMes() == mesAtual && dataNasc.getDia() > diaAtual) {
        --idade;
    }
    
}

