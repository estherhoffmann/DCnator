#include "Play.h"
#include<stdio.h>

Play::Play()
{
    Tela = 42;
    EstaNaTelaInicial = true;
    EstaNaTelaDeNomes = false;
    EstaNasPerguntas = false;
    ClicouEmSair = false;
    BotaoTelaFinal = 0;
    Clicou = false;

    //Criando os nós da árvore
    ArvoreJogo.Inserir(42);
    ArvoreJogo.Inserir(44);
    ArvoreJogo.Inserir(43);
    ArvoreJogo.Inserir(46);
    ArvoreJogo.Inserir(47);
    ArvoreJogo.Inserir(45);
    ArvoreJogo.Inserir(20);
    ArvoreJogo.Inserir(8);
    ArvoreJogo.Inserir(2);
    ArvoreJogo.Inserir(1);
    ArvoreJogo.Inserir(4);
    ArvoreJogo.Inserir(3);
    ArvoreJogo.Inserir(6);
    ArvoreJogo.Inserir(5);
    ArvoreJogo.Inserir(7);
    ArvoreJogo.Inserir(14);
    ArvoreJogo.Inserir(10);
    ArvoreJogo.Inserir(9);
    ArvoreJogo.Inserir(12);
    ArvoreJogo.Inserir(11);
    ArvoreJogo.Inserir(13);
    ArvoreJogo.Inserir(16);
    ArvoreJogo.Inserir(15);
    ArvoreJogo.Inserir(18);
    ArvoreJogo.Inserir(17);
    ArvoreJogo.Inserir(19);
    ArvoreJogo.Inserir(30);
    ArvoreJogo.Inserir(26);
    ArvoreJogo.Inserir(22);
    ArvoreJogo.Inserir(21);
    ArvoreJogo.Inserir(24);
    ArvoreJogo.Inserir(23);
    ArvoreJogo.Inserir(25);
    ArvoreJogo.Inserir(28);
    ArvoreJogo.Inserir(27);
    ArvoreJogo.Inserir(29);
    ArvoreJogo.Inserir(36);
    ArvoreJogo.Inserir(32);
    ArvoreJogo.Inserir(31);
    ArvoreJogo.Inserir(34);
    ArvoreJogo.Inserir(33);
    ArvoreJogo.Inserir(35);
    ArvoreJogo.Inserir(38);
    ArvoreJogo.Inserir(37);
    ArvoreJogo.Inserir(40);
    ArvoreJogo.Inserir(39);
    ArvoreJogo.Inserir(41);
}


Play::~Play()
{
    //dtor
}


void Play::CarregaImagens()
{
    //MENU
    if(!TMenu.loadFromFile("imagens/menu.jpg"))
        cout << "Erro no menu" << endl;

    SMenu.setTexture(TMenu);


    //NOMES
    if(!TNames.loadFromFile("imagens/pessoas.jpg"))
        cout << "Erro nos nomes" << endl;

    SNames.setTexture(TNames);


    //PERGUNTAS
    if(!TQuest[1].loadFromFile("imagens/um.jpg"))
        cout << "Erro" << endl;
    SQuest[1].setTexture(TQuest[1]);

    if(!TQuest[2].loadFromFile("imagens/dois.jpg"))
        cout << "Erro" << endl;
    SQuest[2].setTexture(TQuest[2]);

    if(!TQuest[3].loadFromFile("imagens/tres.jpg"))
        cout << "Erro" << endl;
    SQuest[3].setTexture(TQuest[3]);

    if(!TQuest[4].loadFromFile("imagens/quatro.jpg"))
        cout << "Erro" << endl;
    SQuest[4].setTexture(TQuest[4]);

    if(!TQuest[5].loadFromFile("imagens/cinco.jpg"))
        cout << "Erro" << endl;
    SQuest[5].setTexture(TQuest[5]);

    if(!TQuest[6].loadFromFile("imagens/seis.jpg"))
        cout << "Erro" << endl;
    SQuest[6].setTexture(TQuest[6]);

    if(!TQuest[7].loadFromFile("imagens/erro.jpg"))
        cout << "Erro" << endl;
    SQuest[7].setTexture(TQuest[7]);

    if(!TQuest[8].loadFromFile("imagens/oito.jpg"))
        cout << "Erro" << endl;
    SQuest[8].setTexture(TQuest[8]);

    if(!TQuest[9].loadFromFile("imagens/nove.jpg"))
        cout << "Erro" << endl;
    SQuest[9].setTexture(TQuest[9]);

    if(!TQuest[10].loadFromFile("imagens/dez.jpg"))
        cout << "Erro" << endl;
    SQuest[10].setTexture(TQuest[10]);

    if(!TQuest[11].loadFromFile("imagens/onze.jpg"))
        cout << "Erro" << endl;
    SQuest[11].setTexture(TQuest[11]);

    if(!TQuest[12].loadFromFile("imagens/doze.jpg"))
        cout << "Erro" << endl;
    SQuest[12].setTexture(TQuest[12]);

    if(!TQuest[13].loadFromFile("imagens/erro.jpg"))
        cout << "Erro" << endl;
    SQuest[13].setTexture(TQuest[13]);

    if(!TQuest[14].loadFromFile("imagens/quatorze.jpg"))
        cout << "Erro" << endl;
    SQuest[14].setTexture(TQuest[14]);

    if(!TQuest[15].loadFromFile("imagens/quinze.jpg"))
        cout << "Erro" << endl;
    SQuest[15].setTexture(TQuest[15]);

    if(!TQuest[16].loadFromFile("imagens/dezesseis.jpg"))
        cout << "Erro" << endl;
    SQuest[16].setTexture(TQuest[16]);

    if(!TQuest[17].loadFromFile("imagens/dezessete.jpg"))
        cout << "Erro" << endl;
    SQuest[17].setTexture(TQuest[17]);

    if(!TQuest[18].loadFromFile("imagens/dezoito.jpg"))
        cout << "Erro" << endl;
    SQuest[18].setTexture(TQuest[18]);

    if(!TQuest[19].loadFromFile("imagens/erro.jpg"))
        cout << "Erro" << endl;
    SQuest[19].setTexture(TQuest[19]);

    if(!TQuest[20].loadFromFile("imagens/vinte.jpg"))
        cout << "Erro" << endl;
    SQuest[20].setTexture(TQuest[20]);

    if(!TQuest[21].loadFromFile("imagens/vinteeum.jpg"))
        cout << "Erro" << endl;
    SQuest[21].setTexture(TQuest[21]);

    if(!TQuest[22].loadFromFile("imagens/vinteedois.jpg"))
        cout << "Erro" << endl;
    SQuest[22].setTexture(TQuest[22]);

    if(!TQuest[23].loadFromFile("imagens/vinteetres.jpg"))
        cout << "Erro" << endl;
    SQuest[23].setTexture(TQuest[23]);

    if(!TQuest[24].loadFromFile("imagens/vinteequatro.jpg"))
        cout << "Erro" << endl;
    SQuest[24].setTexture(TQuest[24]);

    if(!TQuest[25].loadFromFile("imagens/erro.jpg"))
        cout << "Erro" << endl;
    SQuest[25].setTexture(TQuest[25]);

    if(!TQuest[26].loadFromFile("imagens/vinteeseis.jpg"))
        cout << "Erro" << endl;
    SQuest[26].setTexture(TQuest[26]);

    if(!TQuest[27].loadFromFile("imagens/vinteesete.jpg"))
        cout << "Erro" << endl;
    SQuest[27].setTexture(TQuest[27]);

    if(!TQuest[28].loadFromFile("imagens/vinteeoito.jpg"))
        cout << "Erro" << endl;
    SQuest[28].setTexture(TQuest[28]);

    if(!TQuest[29].loadFromFile("imagens/erro.jpg"))
        cout << "Erro" << endl;
    SQuest[29].setTexture(TQuest[29]);

    if(!TQuest[30].loadFromFile("imagens/trinta.jpg"))
        cout << "Erro" << endl;
    SQuest[30].setTexture(TQuest[30]);

    if(!TQuest[31].loadFromFile("imagens/trintaeum.jpg"))
        cout << "Erro" << endl;
    SQuest[31].setTexture(TQuest[31]);

    if(!TQuest[32].loadFromFile("imagens/trintaedois.jpg"))
        cout << "Erro" << endl;
    SQuest[32].setTexture(TQuest[32]);

    if(!TQuest[33].loadFromFile("imagens/trintaetres.jpg"))
        cout << "Erro" << endl;
    SQuest[33].setTexture(TQuest[33]);

    if(!TQuest[34].loadFromFile("imagens/trintaequatro.jpg"))
        cout << "Erro" << endl;
    SQuest[34].setTexture(TQuest[34]);

    if(!TQuest[35].loadFromFile("imagens/erro.jpg"))
        cout << "Erro" << endl;
    SQuest[35].setTexture(TQuest[35]);

    if(!TQuest[36].loadFromFile("imagens/trintaeseis.jpg"))
        cout << "Erro" << endl;
    SQuest[36].setTexture(TQuest[36]);

    if(!TQuest[37].loadFromFile("imagens/trintaesete.jpg"))
        cout << "Erro" << endl;
    SQuest[37].setTexture(TQuest[37]);

    if(!TQuest[38].loadFromFile("imagens/trintaeoito.jpg"))
        cout << "Erro" << endl;
    SQuest[38].setTexture(TQuest[38]);

    if(!TQuest[39].loadFromFile("imagens/trintaenove.jpg"))
        cout << "Erro" << endl;
    SQuest[39].setTexture(TQuest[39]);

    if(!TQuest[40].loadFromFile("imagens/quarenta.jpg"))
        cout << "Erro" << endl;
    SQuest[40].setTexture(TQuest[40]);

    if(!TQuest[41].loadFromFile("imagens/erro.jpg"))
        cout << "Erro" << endl;
    SQuest[41].setTexture(TQuest[41]);

    if(!TQuest[42].loadFromFile("imagens/quarentaedois.jpg"))
        cout << "Erro" << endl;
    SQuest[42].setTexture(TQuest[42]);

    if(!TQuest[43].loadFromFile("imagens/quarentaetres.jpg"))
        cout << "Erro" << endl;
    SQuest[43].setTexture(TQuest[43]);

    if(!TQuest[44].loadFromFile("imagens/quarentaequatro.jpg"))
        cout << "Erro" << endl;
    SQuest[44].setTexture(TQuest[44]);

    if(!TQuest[45].loadFromFile("imagens/quarentaecinco.jpg"))
        cout << "Erro" << endl;
    SQuest[45].setTexture(TQuest[45]);

    if(!TQuest[46].loadFromFile("imagens/quarentaeseis.jpg"))
        cout << "Erro" << endl;
    SQuest[46].setTexture(TQuest[46]);

    if(!TQuest[47].loadFromFile("imagens/erro.jpg"))
        cout << "Erro" << endl;
    SQuest[47].setTexture(TQuest[47]);
}


void Play::Eventos()
{
    while(window.pollEvent(evnt)){
            if(evnt.type == sf::Event::Closed)
                window.close();
        }
}


void Play::Mouse()
{

    //se está na tela INICIAL (opções: jogar e sair)
    if(EstaNaTelaInicial)
    {
        if((180<sf::Mouse::getPosition(window).x && sf::Mouse::getPosition(window).x<425) &&
           (494<sf::Mouse::getPosition(window).y && sf::Mouse::getPosition(window).y<580))
           {
                if(sf::Mouse::isButtonPressed(sf::Mouse::Left)) //se a pessoa clicar em SAIR
                {
                    ClicouEmSair = true;
                }
            }
        if((270<sf::Mouse::getPosition(window).x && sf::Mouse::getPosition(window).x<547) &&
           (331<sf::Mouse::getPosition(window).y && sf::Mouse::getPosition(window).y<431))
            {
                if(sf::Mouse::isButtonPressed(sf::Mouse::Left)) //se a pessoa clicar em JOGAR)
                {
                    EstaNaTelaInicial = false;
                    EstaNaTelaDeNomes = true;
                }
            }
    }


    //se está na TELA DE NOMES
    if(EstaNaTelaDeNomes){
        if((323<sf::Mouse::getPosition(window).x && sf::Mouse::getPosition(window).x<575) &&
           (501<sf::Mouse::getPosition(window).y && sf::Mouse::getPosition(window).y<586)){
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left)) //se a pessoa clicar no botão CONTINUAR
            {
                EstaNaTelaDeNomes = false;
                EstaNasPerguntas = true;
            }
        }
    }

    //se está nas telas de pergunta
    if(EstaNasPerguntas)
    {
        Clicou = false;
        if((703<sf::Mouse::getPosition(window).x && sf::Mouse::getPosition(window).x<952) &&
       (507<sf::Mouse::getPosition(window).y && sf::Mouse::getPosition(window).y<594))
        {
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left)) //se a pessoa clicar em SIM
            {
                SimOuNao = 2;
                Clicou = true;
            }

        }
        else if((284<sf::Mouse::getPosition(window).x && sf::Mouse::getPosition(window).x<535) &&
        (507<sf::Mouse::getPosition(window).y && sf::Mouse::getPosition(window).y<595))
        {
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left)) //se a pessoa clicar em NAO
            {
                SimOuNao = 1;
                Clicou = true;
            }
        }
    }

    //se está em uma tela que mostra a pessoa
    if(EhTelaDePessoa(Tela))
    {
        //se a pessoa clicar em SAIR
        if((506<sf::Mouse::getPosition(window).x && sf::Mouse::getPosition(window).x<712) &&
        (520<sf::Mouse::getPosition(window).y && sf::Mouse::getPosition(window).y<607)){
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                BotaoTelaFinal = 1;
            }
        }

        //se a pessoa clicar em NAO FOI QUEM EU PENSEI
        else if((756<sf::Mouse::getPosition(window).x && sf::Mouse::getPosition(window).x<961) &&
        (521<sf::Mouse::getPosition(window).y && sf::Mouse::getPosition(window).y<608)){
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                BotaoTelaFinal = 2;
            }
        }
        //se a pessoa clicar em JOGAR NOVAMENTE
        else if((1003<sf::Mouse::getPosition(window).x && sf::Mouse::getPosition(window).x<1208) &&
        (520<sf::Mouse::getPosition(window).y && sf::Mouse::getPosition(window).y<608)){
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                BotaoTelaFinal = 3;
            }
        }

    }


    //se está em uma tela final de "errou"
    if(EhTelaErrou(Tela) || (BotaoTelaFinal == 2))
    {
        //se a pessoa clicar em SAIR
        if((619<sf::Mouse::getPosition(window).x && sf::Mouse::getPosition(window).x<824) &&
        (451<sf::Mouse::getPosition(window).y && sf::Mouse::getPosition(window).y<539)){
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                BotaoTelaFinal = 1;
            }
        }

        //se a pessoa clicar em JOGAR NOVAMENTE
        else if((902<sf::Mouse::getPosition(window).x && sf::Mouse::getPosition(window).x<1106) &&
        (450<sf::Mouse::getPosition(window).y && sf::Mouse::getPosition(window).y<538)){
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                BotaoTelaFinal = 3;
            }
        }
    }


}

//Retorna true se o node atual contém o resultado final (é uma folha da árvore)
bool Play::TerminouJogo(Node* Raiz, int Tela)
{
    Node *Aux = ArvoreJogo.ProcuraNodeDesejado(ArvoreJogo.getRaiz(), Tela);
    if(Aux->getDir() == NULL)
        return true;
    else
        return false;
}


bool Play::EhTelaDePessoa(int tela)
{
   if(tela == 1 || tela == 3 || tela == 5 || tela == 9 || tela == 11 || tela == 15 || tela == 17 || tela == 21
        || tela == 23 || tela == 27 || tela == 31 || tela == 33 || tela == 37 || tela == 39 || tela == 43 || tela == 45)
   {
       return true;
   }
   else
        return false;

}


bool Play::EhTelaErrou(int tela)
{
    if(EhTelaDePessoa(tela))
        return false;
    else
    {
        if(tela == 7 || tela == 13 || tela == 19 || tela == 25 || tela == 29 || tela == 35 || tela == 41 || tela == 47)
        {
            return true;
        }
    }
}


void Play::Reseta()
{
    Tela = 42;
    EstaNaTelaInicial = false;
    EstaNaTelaDeNomes = true;
    EstaNasPerguntas = false;
    BotaoTelaFinal = 0;
    ReiniciaVerificacoes(ArvoreJogo.getRaiz());
}


int Play::NodeAtual(Node* Raiz)
{
    if(Raiz->getVerificacao() == 0)
    {
        return Raiz->getID();
    }
    else
    {
        //se foi escolhido não
        if(Raiz->getVerificacao() == 1)
            return NodeAtual(Raiz->getDir());
        //se foi escolhido sim
        if(Raiz->getVerificacao() == 2)
            return NodeAtual(Raiz->getEsq());
    }
}


void Play::ReiniciaVerificacoes(Node* Raiz)
{
    if (Raiz != NULL) {
        Raiz->setVerificacao(0);
        ReiniciaVerificacoes(Raiz->getEsq());
        ReiniciaVerificacoes(Raiz->getDir());
    }
}


void Play::Jogo()
{

    //Criando a tela
    window.create(sf::VideoMode(1250, 660), "DCnator");
    window.setFramerateLimit(4.5);

    CarregaImagens();

    while(window.isOpen()){

        if(EstaNaTelaInicial)
        {
            Eventos();
            window.clear();
            window.draw(SMenu);
            window.display();
            Mouse();
        }

        if(ClicouEmSair)
        {
            window.close();
        }

        if(EstaNaTelaDeNomes)
        {
            Eventos();
            window.clear();
            window.draw(SNames);
            window.display();
            Mouse();
        }

        if(EstaNasPerguntas)
        {
            Eventos();
            Tela = NodeAtual(ArvoreJogo.getRaiz()); //Tela= ID do nó em que está SE VERIFIC = 0
            window.clear();

            window.draw(SQuest[Tela]);
            window.display();

            Mouse();

            if(Clicou)
            {
                ArvoreJogo.MudaVerificacaoNodeDesejado(ArvoreJogo.getRaiz(), Tela, SimOuNao);
                SimOuNao = 0;
                Clicou = false;
            }

        }

        if(EhTelaDePessoa(Tela))
        {
            EstaNasPerguntas = false;
            window.clear();
            window.draw(SQuest[Tela]);
            window.display();
            Mouse();
        }

        if(EhTelaErrou(Tela))
        {
            EstaNasPerguntas = false;
            window.clear();
            window.draw(SQuest[Tela]);
            window.display();
            Mouse();
        }


        if(BotaoTelaFinal == 1)
        {
            ClicouEmSair = true;
        }

        if(BotaoTelaFinal == 2)
        {
            Tela = 0;
            Eventos();
            window.clear();
            window.draw(SQuest[7]);
            window.display();
            Mouse();
        }

        if(BotaoTelaFinal == 3)
        {
            Eventos();
            window.clear();
            Reseta();
        }



    }//fecha a janela do sfml
}
