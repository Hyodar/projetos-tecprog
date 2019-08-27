
#ifndef NODE_ALUNO_H_
#define NODE_ALUNO_H_

#include "aluno.h"

class NodeAluno {

    private:
        Aluno* aluno;
        
        NodeAluno* anteAluno;
        NodeAluno* proxAluno;

    public:
        NodeAluno();
        ~NodeAluno();

        Aluno* getAluno() {return aluno;}
        void setAluno(Aluno* aluno) {this->aluno = aluno;}

        NodeAluno* getAnteAluno() {return anteAluno;}
        void setAnteAluno(NodeAluno* node) {this->anteAluno = node;}
        
        NodeAluno* getProxAluno() {return proxAluno;}
        void setProxAluno(NodeAluno* node) {this->proxAluno = node;}

};

#endif // NODE_ALUNO_H_
