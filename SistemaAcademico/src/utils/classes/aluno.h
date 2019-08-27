
#ifndef ALUNO_H_
#define ALUNO_H_

#include "departamento.h"
#include "pessoa.h"

class Aluno : public Pessoa {
    
    private:
        int id;
        int ra;
        Departamento* departamento;

    public:
        Aluno();
        Aluno(int id);
        Aluno(int diaNasc, int mesNasc, int anoNasc, const char* nome = "");
        ~Aluno();


        int getId() {return id;}
        void setId(int id) {this->id = id;}

        int getRa() {return ra;}
        void setRa(int ra) {this->ra = ra;}

        Departamento* getDepartamento() {return departamento;}
        void setDepartamento(Departamento* dept) {this->departamento = dept;}

};

#endif // ALUNO_H_
