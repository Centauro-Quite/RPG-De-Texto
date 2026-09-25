#pragma once
#include "base.h"
#include "InimigosBase.h"

class Combate{
private:
    Base& Player;
    InimigosBase& Inimigo;
    StatusInimigos statusI;
    StatusPlayer statusP;
    void turnoJogador();
    void turnoInimigo(); 
 
public: 
    Combate(Base &Player, InimigosBase& Inimigo);
    void entrar(); 
    void sair();
};