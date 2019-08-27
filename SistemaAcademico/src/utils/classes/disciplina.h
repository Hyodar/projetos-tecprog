
#ifndef DISCIPLINA_H_
#define DISCIPLINA_H_

#include "departamento.h"
#include "aluno.h"
#include "node_aluno.h"

#include <string>
using namespace std;

class Disciplina {

    private:
        int id;
        int numAlunos;
        int contAlunos;
        string nome;
        string areaConhecimento;

        Departamento* departamento;
        NodeAluno* alunosPrim;
        NodeAluno* alunosAtual;

        Disciplina* anteDisciplina;
        Disciplina* proxDisciplina;

    public:
        Disciplina();
        Disciplina(int numAlunos, const char* areaConhecimento = "");
        ~Disciplina();

        int getId() {return id;}
        void setId(int id) {this->id = id;}

        string getNome() {return nome;}
        void setNome(const char* nome) {this->nome = nome;}

        Departamento* getDepartamento() {return departamento;}
        void setDepartamento(Departamento* departamento);

        bool incluirAluno(Aluno* aluno);
        bool excluirAluno(Aluno* aluno);
        void listarAlunos();

        Disciplina* getAnteDisciplina() {return anteDisciplina;}
        void setAnteDisciplina(Disciplina* disc) {this->anteDisciplina = disc;}

        Disciplina* getProxDisciplina() {return proxDisciplina;}
        void setProxDisciplina(Disciplina* disc) {this->proxDisciplina = disc;}
        
};

#endif // DISCIPLINA_H_

