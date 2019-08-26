
// Imported modules

#include <cstring>

#include "universidade.h"

// Function declarations

// ---------------------------------------------------------------------------

Universidade::Universidade(const char* nome) {
    std::strcpy(this->nome, nome);
}

// ---------------------------------------------------------------------------

Universidade::~Universidade() {
    // noop
}

// ---------------------------------------------------------------------------

char* Universidade::getNome() {
    return nome;
}

// ---------------------------------------------------------------------------

void Universidade::setNome(const char* nome) {
    strcpy(this->nome, nome);
}

