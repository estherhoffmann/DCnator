#ifndef TREE_H
#define TREE_H
#include "Node.h"

class Tree
{
    public:
        Tree();
        ~Tree();
        Node* getRaiz();

        void Inserir(int id);
        void InserirSubArvore(Node *Raiz, int id);

        int getVerificacaoNodeDesejado(Node* Raiz, int IDNodeDesejado);
        void MudaVerificacaoNodeDesejado(Node* Raiz, int IDNodeDesejado, int SimOuNao);
        Node* ProcuraNodeDesejado(Node* Raiz, int id);


    private:
        Node *Raiz;
};

#endif // TREE_H
