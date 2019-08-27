
#ifndef UNIVERSIDADE_H_
#define UNIVERSIDADE_H_

#include <string>
using namespace std;

class Universidade {

    private:
        string nome;

    public:
        Universidade(const char* nome = "");
        ~Universidade();

        string getNome() {return nome;}
        void setNome(const char* nome) {this->nome = nome;}

};

#endif // UNIVERSIDADE_H_
