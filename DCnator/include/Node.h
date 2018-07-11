#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;

class Node
{
    public:
        Node();
        Node(int id);
        ~Node();

        void setID(int id);
        int getID();

        void setDir(Node *Node);
        Node* getDir();

        void setEsq(Node *Node);
        Node* getEsq();

        void setVerificacao(int NovaVerificacao);
        int getVerificacao();


    private:
        int ID;
        Node *Dir;
        Node *Esq;
        int Verificacao;
};

#endif // NODE_H
