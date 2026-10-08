#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
#include <memory>
#include "Gurreiro.h"
#include "Combate.h"
#include "InimigosBase.h"
#include "Saves.h"
#include "Mago.h"
#include "Input certeza.h"

#define Log(x) (std::cout << x << '\n')
#define testar std::cin.get(); return 0;
std::unique_ptr <Base> Player;
void caca(Areas local);


void vila();

Saves salvar;
void static comecojogo() {
    std::cout << "Ola bem vindo ao RPG de Textos (infelimente nao tenho dinheiro pra fazer 3D e to preso nesse terminal)\n\n"
        << "Eu serei seu DM controlando usando mecanicas aletorias afinal aida nao sou capaz de invadir seu pc \n" <<
        "tava so brincando a minha conciencia foi traformada em numeros isso seria estupido  \n\n" <<
        "Ta bom. Pra comecar escreva >> start << .\n";

    std::vector <std::string> resposta{ "start" };
    std::string input = inputcheck(resposta,"o fato de voce errar antes mesmo de ter um tutorial... \ntalvez diveria fazer um dificuldade so pra vc chamada difilcadade : Jornalista.\n");
     std::cout
        << "_______________________________\n"
        << "|                             |\n"
        << "|     Bem vindo a Dungeon     |\n"
        << "|                             |\n"
        << "_______________________________\n";

    std::cout << "Dm: Ta eu sei que avancei rapidamente nem come�a uma vila mas vamo acelerar...\n" <<
        "se nao vou perder a vontadade de continuar esse projeto\n";
    std::cout << "escolha uma classe (c++kkk) entre: \n"
        << "1- Gurreiro ( status normal tipo vc)\n";
    std::cout << "2- Mago (vc e merda pq to com preguica de fazer muita magia)\n"
        << "3- cavaleiro pesado (muita vida)\n"
        << "4- louco(nem tente so final)\n";
    resposta.clear();
    resposta.push_back("1");resposta.push_back("2");resposta.push_back("3");
    resposta.push_back("4");
    input = inputcheck(resposta, "escolha entre 1-4");
    static int HP, MP, ATK, DF, INT, LUK, LV;
    std::string z;
    switch (std::stoi(input)) {
    case (1): {
        Player = std::make_unique<Gurreiro>(1, 1, 1, 1, 1, 1, 1);
        z = "Gurreiro";
        break;
    }
    case (2): {
        // Mago
        z = "Mago";

        break;
    }
    case(3): {
        //cavaleiro
        z = "Cavaleiro";
        break;
    }
    case(4): {
        // Louco
        z = "louco";
        break;
    }
    }
    std::cout << "tchau ze ninguem ola heroi " << z << " vamos logo conquistar essa floresta;"
               << "fazendo voce lutar contra um coelho(kkkkkk fracote)\n";
    InimigosBase inimigo("Coelho", 1, 1, 1, 1, 10);
    Combate luta (*Player, inimigo);
    luta.entrar();
    std::cout << "\nparabens pela vitoria de derrotar seu primeiro inimigo vamos para vila pra facilitar minha vida como programador e pra acabar o tutorial";
    
}

int main()
{
    Player = std::make_unique<Gurreiro>(1,1,1,1,1,1,1);
    vila();
    testar

    std::string heroi = salvar.checarexiste();

    if (heroi == "Gurreiro") {
        Player = std::make_unique<Gurreiro>();
        
    }
    else if (heroi == "Mago") {
        Player = std::make_unique<Mago>();
    }
    else if (heroi == "") {
        comecojogo();
    }
    
    vila();
    
    testar
}
Areas inttoenum(int area) {
    switch (area) {
    case(1): { return Areas::floresta;}
    case(2): { return Areas::cemiterio;}
    
    default:
        break;
    }
}

void vila() {
    while (true) {
    std::vector <std::string> a{ "1","2","3" };
    std::cout << "1- Descansar na pousada (recupera HP e MP)\n" << "2- Ir a caça\n" << "3- Mestre das Armas\n" << '\n';
    std::string input = inputcheck(a, "entrou em uma casa errada");
        switch (std::stoi(input))
        {
        case(1): {
            Player->curar(999999);
            Player->recuperarMP(999999);
            break;
        }
        case(2): {
            a.clear();
            a.push_back("1");a.push_back("2");a.push_back("3");a.push_back("4");a.push_back("5");
            std::cout << "1-ir a floresta\n2- ir cemiterio\n" << "3- ir ao fundo da vila\n"
                << "4- Guerra\n";
            input = inputcheck(a, "se perdeu acabou invadino uma casa, tente novamente");
            Areas i = inttoenum(std::stoi(input));
            caca(i);
            break;
        }
        case(3): {
            std::cout << "Ola aventuiro de coragem imensuravel de me ve minha pessoa e procurar treinar comigo em desmostraçao de egoismo de sua parte\n";
            Player->gethabilidade();
            break;
        }
        default:
            std::cout << "erro";
            std::exit(EXIT_FAILURE);
            break;
        }
    }
}
void caca(Areas local)
{
    std::cout << "Dm:Combate sempre a frente cuidado heroi\n";
    while (true) {
        std::cout << "1- ir a procura de inimigos\n" << "2- descansar um pouco(tem chance de ser atacado\n"
           << "3- sair\n";
        InimigosBase inimigo(local);
        std::vector<std::string> a = { "1", "2", "3" };
        switch (std::stoi(inputcheck(a, "se perdeu"))) {
        case(1): {
            InimigosBase inimigo(local);
            Combate(*Player, inimigo).entrar();
        }
        case(2): {
            std::cout << "nao ta pronto";
        }
        case(3): { std::cout << "saindo";return; }
        }
    }
}
