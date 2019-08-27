
#ifndef DEPARTAMENTO_H_
#define DEPARTAMENTO_H_

#include <string>
using namespace std;

class Universidade;
class Disciplina;

class Departamento {
    
    private:
        string nome;

        Universidade* universidade;

        Disciplina* disciplinasPrim;
        Disciplina* disciplinasAtual;

    public:
        Departamento();
        ~Departamento();

        string getNome() {return nome;}
        void setNome(const char* nome) {this->nome = nome;}

        Universidade* getUniversidade() {return universidade;}
        void setUniversidade(Universidade* universidade) {this->universidade = universidade;}

        void setDisciplina(Disciplina* disciplina);
        void listarDisciplinas();
};

#endif // DEPARTAMENTO_H_

