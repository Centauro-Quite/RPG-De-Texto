#include "inventario.h"
#include <iostream>

inventario::inventario(Coisas Arma, Coisas Armadura, Coisas Acessorio) : Mochila{Arma, Armadura, Acessorio, NadaItem}
{
 
    
}


void inventario::encherInv(Coisas item, Coisas item2, Coisas item3, Coisas item4)
{
	Mochila[0] = item;
	Mochila[1] = item2;
	Mochila[2] = item3;
    Mochila[3] = item4;
}

bool inventario::temarma() {
    if (Mochila[0].Qualuso == usos::arma) {
        return true;
   }
    return false;
}

int inventario::get_tamanho() const
{
    return Espaco;
}

int inventario::get_flechas() const
{
    return flechas;
}

int inventario::Usar() {
    ChecarMochila();
    std::cout << "Gostaria de usar qual Item?\n";
    int x; std::cin >> x;
    if (Mochila[(x-1)].Qualuso == usos::usavel) {
        int retorno = Mochila[(x - 1)].Curar;
        Mochila[(x -1)] = NadaItem;
        return retorno;
    }    
}    


Coisas inventario::pegarobj(int i)
{
    return Mochila[i];
}

void inventario::ChecarMochila()
{
    std::cout << "___Mochila___\nTamanho da mochila = " << Espaco << "\n";

    for (int i = 0; i < Espaco; i++){
        if (Mochila[i].item == NadaItem.item) {
            std::cout << (i + 1) << ": Vazio\n ";
        }
        else {
            std::cout << (i + 1) << ": " << Mochila[i].Name << " DP: " << Mochila[i].Atk;  
            if (i < 3) {
                std::cout << "   >>Equipado<<\n";
                continue;
            }
            std::cout << '\n';
        }
    }
    return;
}
const std::vector<Coisas>& inventario::carregarMochila() const {
    return Mochila;

}

void inventario::setMochila(const std::vector<Coisas>& m, int espaco, int flechas) {
    Mochila = m;
    Espaco = espaco;
    this->flechas = flechas;
    // Garantir que a mochila tenha pelo menos Espaco elementos
    if (static_cast<int>(Mochila.size()) < Espaco) {
        while (static_cast<int>(Mochila.size()) < Espaco) {
            Mochila.push_back(NadaItem);
        }
    }
    // Não exceder o limite físico da mochila
    if (static_cast<int>(Mochila.size()) > espacoMax) {
        Mochila.resize(espacoMax);
    }
}
