#include "Tree.h"

Tree::Tree()
{
    Raiz = NULL;
}

Tree::~Tree()
{
    delete Raiz;
}


Node* Tree::getRaiz()
{
    return Raiz;
}


//Insere na árvore (ABB)
void Tree::Inserir(int id)
{
    if(Raiz == NULL)
        Raiz = new Node(id);
    else
        InserirSubArvore(Raiz, id);
}


void Tree::InserirSubArvore(Node *Raiz, int id)
{
    //se id for menor que o id da raiz da sub árvore, insere à esq
    if(id < Raiz->getID())
    {
        if(Raiz->getEsq() == NULL)
        {
            Node *NewNode = new Node(id);
            Raiz->setEsq(NewNode);
        }
        else
        {
            InserirSubArvore(Raiz->getEsq(), id);
        }
    }

    else if(id > Raiz->getID())
    {
        if(Raiz->getDir() == NULL)
        {
            Node *NewNode = new Node(id);
            Raiz->setDir(NewNode);
        }
        else
        {
            InserirSubArvore(Raiz->getDir(), id);
        }
    }
}


int Tree::getVerificacaoNodeDesejado(Node* Raiz, int IDNodeDesejado)
{
    Node* Aux = ProcuraNodeDesejado(Raiz, IDNodeDesejado);
    return Aux->getVerificacao();
}


void Tree::MudaVerificacaoNodeDesejado(Node* Raiz, int IDNodeDesejado, int SimOuNao)
{
    Node* Aux = ProcuraNodeDesejado(Raiz, IDNodeDesejado);
    Aux->setVerificacao(SimOuNao);
}


//retorna um ponteiro para o Node que tem um ID específico
Node* Tree::ProcuraNodeDesejado(Node *Raiz, int IDNodeDesejado)
{
    //se não existir um nó com o ID desejado
    if(Raiz == NULL)
    {
        return NULL;
    }

    //se achar o nó
    if (IDNodeDesejado == Raiz->getID())
       return Raiz;

    //se ainda nao achou
    else
    {
        if (IDNodeDesejado > Raiz->getID()) {
            return ProcuraNodeDesejado(Raiz->getDir(), IDNodeDesejado);
        } else {
            return ProcuraNodeDesejado(Raiz->getEsq(), IDNodeDesejado);
        }
    }
}


