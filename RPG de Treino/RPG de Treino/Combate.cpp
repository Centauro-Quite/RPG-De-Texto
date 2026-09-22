#include "Combate.h"

Combate::Combate(Base& Player): Player(Player){
    //Criar inimigo aletorio depois
}

Combate::Combate(Base& Player, InimigosBase &Inimigos) : Player(Player), Inimigo(Inimigo){
    //Tutorial e bosses
}
void Combate::entrar(){
    
}