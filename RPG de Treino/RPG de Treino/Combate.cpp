#include "Combate.h"
#include "Aleatorio.h"

static bool is_number(const std::string& s)
{
    return !s.empty() && std::find_if(s.begin(),
        s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();
}

void Combate::turnoInimigo()
{
    return;
}

Combate::Combate(Base& Player, InimigosBase& Inimigo) : Player(Player), Inimigo(Inimigo),statusI(Inimigo.Status()),
statusP(Player.Status()){

}
void Combate::turnoJogador() {
    std::cout << "1- Atacar\n" << "2- Usar equipamento\n" << "3- Checar Mochila\n" << "4- Checar Inimigo\n" <<
        "5- Checar Status\n" << " Enquanto estiver em combate voce nao e capaz de sair do jogo mas se escrever 'sair' fara uma tentativa de fuga\n";
    std::string input; std::cin >> input;
    if (is_number(input)) {
        switch (std::stoi(input))
        {
        case(1): {
            Player.ListaDeAtaques(true);
            break;
        }
        case(2): {
            //ainda nao ta pronto
        }
        case(3): {
            Player.checarMochila();
        }
        case(4): {
            
        }
        default:
            break;
        }
    }
}

void Combate::entrar() {
    std::cout << "Entrou em combate com:" << '\n' << statusI.Nome << '\n' << "Vamos decidir quem vai comecar " << statusP.Nome
    << " ou " << (statusI.Nome + ".") << "\n";
    Aleatorio rado;
    if (rado.Entre(0, 1) == 0) {
        std::cout << "Voce perdeu 50% igual perdi minha Nangong Yu :(\n" << "Turno do inimigo:\n";
        turnoInimigo();
    }
    else {
        std::cout << "Voce ganhoou o 50% parabens comece primeiro\n";
        turnoJogador();
    }
}
