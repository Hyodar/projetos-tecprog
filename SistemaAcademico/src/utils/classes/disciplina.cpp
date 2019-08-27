
// Included modules

#include <iostream>
using namespace std;

#include "disciplina.h"

// Function declarations

Disciplina::Disciplina(int numeroAlunos, const char* areaConhecimento) {
    contAlunos             = 0;
    departamento           = nullptr;
    anteDisciplina         = nullptr;
    proxDisciplina         = nullptr;
    alunosPrim             = nullptr;
    alunosAtual            = nullptr;
    this->numAlunos        = numAlunos;
    this->areaConhecimento = areaConhecimento;
}

// ---------------------------------------------------------------------------

Disciplina::~Disciplina() {
    NodeAluno* node = alunosPrim;

    while(node != nullptr) {
        alunosPrim = alunosPrim->getProxAluno();
        delete node;
        node = alunosPrim;
    }
}

// ---------------------------------------------------------------------------

void Disciplina::setDepartamento(Departamento* departamento) {
    this->departamento = departamento;
    departamento->setDisciplina(this);
}

// ---------------------------------------------------------------------------

bool Disciplina::incluirAluno(Aluno* aluno) {
    if((contAlunos == numAlunos) || aluno == nullptr) {
        return false;
    }

    NodeAluno* newAluno = new NodeAluno;
    newAluno->setAluno(aluno);
    newAluno->setProxAluno(nullptr);

    if(alunosPrim == nullptr) {
        alunosPrim  = newAluno;
        alunosAtual = newAluno;
    } else {
        NodeAluno* node = alunosPrim;

        for(; node != nullptr; node = node->getProxAluno()) {
            if(aluno->getNome() != node->getAluno()->getNome()) {
                newAluno->setProxAluno(node);
                newAluno->setAnteAluno(node->getAnteAluno());

                if(node == alunosPrim) alunosPrim = newAluno;
                else node->getAnteAluno()->setProxAluno(newAluno);

                node->setAnteAluno(newAluno);
                break;
            }

            if(node == alunosAtual) {
                alunosAtual->setProxAluno(newAluno);
                newAluno->setAnteAluno(alunosAtual);
                alunosAtual = newAluno;
                break;
            }
        }
    }

    ++contAlunos;
    return true;
}

// ---------------------------------------------------------------------------

bool Disciplina::excluirAluno(Aluno* aluno) {
    NodeAluno* node = alunosPrim;

    for(; node != nullptr; node = node->getProxAluno()) {

        if(node->getAluno()->getId() == aluno->getId()) {
            if(alunosPrim == alunosAtual) {
                alunosPrim  = nullptr;
                alunosAtual = nullptr;
            } else if (node == alunosPrim) {
                alunosPrim = alunosPrim->getProxAluno();
                alunosPrim->setAnteAluno(nullptr);
            } else if (node == alunosAtual) {
                alunosAtual = alunosAtual->getAnteAluno();
                alunosAtual->setProxAluno(nullptr);
            } else {
                node->getAnteAluno()->setProxAluno(node->getProxAluno());
                node->getProxAluno()->setAnteAluno(node->getAnteAluno());
            }

            delete node;

            --contAlunos;
            return true;
        }
    }

    return false;
}

// ---------------------------------------------------------------------------

void Disciplina::listarAlunos() {
    if(alunosPrim != nullptr) {
        cout << "-- Alunos de " << nome << " -- \n";

        NodeAluno* node = alunosAtual;
        
        for(; node != nullptr; node = node->getProxAluno()) {
            cout << node->getAluno()->getNome() << "\n";
        }
    }
}

