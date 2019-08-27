
#ifndef PROFESSOR_H_
#define PROFESSOR_H_

#include "pessoa.h"
#include "universidade.h"

class Professor : public Pessoa {
    
    public:
        Professor();
        Professor(int diaNasc, int mesNasc, int anoNasc, const char* nome = "");
        ~Professor();
};

#endif // PROFESSOR_H_

