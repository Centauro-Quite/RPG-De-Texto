#include "Combate.h"
#include "Aleatorio.h"
#include <algorithm>
#include <iostream>

static bool is_number(const std::string& s)
{
    return !s.empty() && std::find_if(s.begin(),
        s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();
}

void Combate::turnoInimigo()
{
    
    turnoJogador();
}

Combate::Combate(Base& Player, InimigosBase& Inimigo) : Player(Player), Inimigo(Inimigo),statusI(Inimigo.Status()),
statusP(Player.Status()){

}
void Combate::turnoJogador() {
    std::cout << "1- Atacar\n" << "2- Usar equipamento\n" << "3- Checar Mochila\n" << "4- Checar Inimigo\n" <<
        "5- Checar Status\n" << " Enquanto estiver em combate voce nao e capaz de sair do jogo mas se escrever 'sair' fara uma tentativa de fuga\n";
    bool out = true;
    while (out) {
        std::string input; std::cin >> input;
        int x;
        if (is_number(input)) {
            switch (std::stoi(input)) {
            case(1): {
                x = Player.ListaDeAtaques(true);
                if (x == 0) {
                    return turnoJogador();
                }
                Inimigo.ReceberDano(x);
                if (Inimigo.GetHP() < 0) {
                    return sair();
                }
                turnoInimigo();
                out = false;
                break;
            }
            case(2): {
                //ainda nao ta pronto
            }
            case(3): {
                Player.checarMochila();
                break;
            }
            case(4): {
                std::cout << "O inimigo se chama:" << statusI.Nome << "\nHP:" << Inimigo.GetHP() << "/" <<
                    statusI.MaxHP << "\nATK:" << statusI.ATK << "\n DF:" << statusI.DF << "\nLV:" << statusI.LV << "\ndecricao:" << statusI.Descricao;
                break;
            }
            case(5): {
				Player.StatusTela();
				break;
            }
            default:
                std::cout << "tente novamente";
                break;
            }
        }
        if (input == "sair") {
            //fugir
            return;
        }
    }
}


void Combate::entrar() {
    std::cout << "Entrou em combate com:" << '\n' << statusI.Nome << '\n' << "Vamos decidir quem vai comecar " << statusP.Nome
    << " ou " << (statusI.Nome + ".") << "\n";
    Aleatorio rado;
    if (rado.Entre(
        0, 1) == 0) {
        std::cout << "Voce perdeu 50% igual perdi minha Nangong Yu :(\n" << "Turno do inimigo:\n";
        turnoInimigo();
    }
    else {
        std::cout << "Voce ganhoou o 50% parabens comece primeiro\n";
        turnoJogador();
    }
}

void Combate::sair()
{
    int XP = Inimigo.XPFarme();
    std::cout << "Parabens voce ganhou do inimigo  conseguiu " << XP << " de XP \n";
    Player.checarLV(XP);
}
