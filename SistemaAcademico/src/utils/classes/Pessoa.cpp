
// Imported modules:

#include <iostream>
#include <cstring>

#include "Pessoa.h"

// Function declarations:

// ---------------------------------------------------------------------------

void Pessoa::init(int diaNasc, int mesNasc, int anoNasc, const char* nome) {
    diaP = diaNasc;
    mesP = mesNasc;
    anoP = anoNasc;
    std::strcpy(nomeP, nome);
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
    idadeP = anoAtual - anoP;

    if(mesP > mesAtual) {
        --idadeP;
    } else if(mesP == mesAtual && diaP > diaAtual) {
        --idadeP;
    }
    
}

// ---------------------------------------------------------------------------

int Pessoa::getIdade() {
    return idadeP;
}

// ---------------------------------------------------------------------------

void Pessoa::setIdade(int idade) {
    idadeP = idade;
}

// ---------------------------------------------------------------------------

Universidade* Pessoa::getUnivFiliado() {
    return pUnivFiliado;
}

// ---------------------------------------------------------------------------

void Pessoa::setUnivFiliado(Universidade* universidade) {
    pUnivFiliado = universidade;
}

// ---------------------------------------------------------------------------

void Pessoa::ondeTrabalha() {
    std::cout << nomeP << " trabalha para a" << pUnivFiliado->getNome() << "\n";
}

