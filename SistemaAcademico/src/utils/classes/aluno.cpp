
// Included modules

#include "aluno.h"

// Function declarations

Aluno::Aluno(int diaNasc, int mesNasc, int anoNasc, const char* nome)
 : Pessoa(diaNasc, mesNasc, anoNasc, nome) {

}

// ---------------------------------------------------------------------------

Aluno::Aluno(int id) {
    this->id = id;
    this->ra = 0;
}

// ---------------------------------------------------------------------------

Aluno::Aluno() {}

// ---------------------------------------------------------------------------

Aluno::~Aluno() {}

// ---------------------------------------------------------------------------
