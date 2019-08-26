
#ifndef UNIVERSIDADE_H_
#define UNIVERSIDADE_H_

class Universidade {

    private:
        char nome[30];

    public:
        Universidade(const char* nome = "");

        ~Universidade();

        char* getNome();
        void setNome(const char* nome);

};

#endif // UNIVERSIDADE_H_
