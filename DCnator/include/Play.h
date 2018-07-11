#include <iostream>
#ifndef PLAY_H
#define PLAY_H
#include "Tree.h"
#include <SFML/Graphics.hpp>

class Play
{
    public:
        Play();
        ~Play();
        void CarregaImagens();
        void Eventos();
        void Mouse();
        void Reseta();
        int NodeAtual(Node* Raiz);
        void Jogo();
        bool TerminouJogo(Node* Raiz, int id);
        bool EhTelaDePessoa(int tela);
        bool EhTelaErrou(int tela);
        void ReiniciaVerificacoes(Node* Raiz);

    private:
        Tree ArvoreJogo;
        int Tela;
        int SimOuNao;

        int BotaoTelaFinal;

        bool EstaNaTelaInicial;
        bool EstaNaTelaDeNomes;
        bool EstaNasPerguntas;
        bool ClicouEmSair;
        bool Clicou;


        //SFML
        sf::RenderWindow window;
        sf::Event evnt;
        sf::Texture TMenu, TNames, TQuest[48];
        sf::Sprite SMenu, SNames, SQuest[48];
};

#endif // PLAY_H
