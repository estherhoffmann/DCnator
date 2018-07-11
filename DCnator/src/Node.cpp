#include "Node.h"

Node::Node()
{
    ID = 0;
    Dir = NULL;
    Esq = NULL;
    setVerificacao(0);
}

Node::Node(int id)
{
    setID(id);
    Dir = NULL;
    Esq = NULL;
    setVerificacao(0);
}

Node::~Node()
{
    delete Dir;
    delete Esq;
}

//set e get do ID e da Pergunta
void Node::setID(int id)
{
    ID = id;
}

int Node::getID()
{
    return ID;
}

//set e get da direita e esquerda
void Node::setDir(Node *Node)
{
    Dir = Node;
}

Node* Node::getDir()
{
    return Dir;
}

void Node::setEsq(Node *Node)
{
    Esq = Node;
}

Node* Node::getEsq()
{
    return Esq;
}


//set e get da verificação:
void Node::setVerificacao(int NovaVerificacao)
{
    Verificacao = NovaVerificacao;
}

int Node::getVerificacao()
{
    return Verificacao;
}


