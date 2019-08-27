
// Included modules

#include <iostream>
using namespace std;

#include "departamento.h"
#include "universidade.h"
#include "disciplina.h"

Departamento::Departamento() {
    disciplinasPrim  = nullptr;
    disciplinasAtual = nullptr;
}

// ---------------------------------------------------------------------------

Departamento::~Departamento() {
    disciplinasPrim  = nullptr;
    disciplinasAtual = nullptr;
}

// ---------------------------------------------------------------------------

void Departamento::setDisciplina(Disciplina* disciplina) {
    if(disciplinasPrim == nullptr) {
        disciplinasPrim  = disciplina;
        disciplinasAtual = disciplina;
    } else {
        disciplinasAtual->setProxDisciplina(disciplina);
        disciplina->setAnteDisciplina(disciplinasAtual);
        disciplinasAtual = disciplina;
    }
}

// ---------------------------------------------------------------------------

void Departamento::listarDisciplinas() {
    Disciplina* disciplina = disciplinasPrim;

    while(disciplina != nullptr) {
        cout << " - Disciplina: " << disciplina->getNome() <<
                " | Departamento: " << nome << "\n";
        disciplina = disciplina->getProxDisciplina();
    }
}

