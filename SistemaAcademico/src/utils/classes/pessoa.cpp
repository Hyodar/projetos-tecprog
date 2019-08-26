
// Imported modules:

#include <iostream>
#include <cstring>

#include "pessoa.h"

// Function declarations:

// ---------------------------------------------------------------------------

void Pessoa::init(int diaNasc, int mesNasc, int anoNasc, const char* nome)
 : dataNasc() {
    dataNasc.init(diaNasc, mesNasc, anoNasc); 
    this->nome = nome;
}

// ---------------------------------------------------------------------------

Pessoa::Pessoa(int diaNasc, int mesNasc, int anoNasc, const char* nome) {
    init(diaNasc, mesNasc, anoNasc, nome);
}

// ---------------------------------------------------------------------------

Pessoa::Pessoa() {
    init(-1, -1, -1);
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

// ---------------------------------------------------------------------------

int Pessoa::getIdade() {
    return idade;
}

// ---------------------------------------------------------------------------

void Pessoa::setIdade(int idade) {
    this->idade = idade;
}

// ---------------------------------------------------------------------------

string Pessoa::getNome() {
    return nome;
}

// ---------------------------------------------------------------------------

void Pessoa::setNome(const char* nome) {
    this->nome = nome;
}

// ---------------------------------------------------------------------------

Universidade* Pessoa::getUnivFiliado() {
    return univFiliado;
}

// ---------------------------------------------------------------------------

void Pessoa::setUnivFiliado(Universidade* universidade) {
    univFiliado = universidade;
}

// ---------------------------------------------------------------------------

void Pessoa::ondeTrabalha() {
    std::cout << nome << " trabalha para a" << univFiliado->getNome() << "\n";
}

