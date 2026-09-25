#include "inventario.h"
#include <iostream>
#include <algorithm>

inventario::inventario(Coisas Arma, Coisas Armadura, Coisas Acessorio) : Arma(Arma), Armadura(Armadura), Acessorio(Acessorio)
{
    Mochila.reserve(10);
    Mochila.push_back(Arma);
    Mochila.push_back(Armadura);
    Mochila.push_back(Acessorio);
    Mochila.push_back(NadaItem);
    
}

void inventario::encherInv(Coisas item, Coisas item2, Coisas item3)
{
	Mochila[0] = item;
	Mochila[1] = item2;
	Mochila[2] = item3;
}

bool inventario::temespada() {
    auto lista = { Itens::Espada_Cobre, Itens::Espada_Inicial, Itens::Espada_Duas_Maos };
    if (std::find(lista.begin(), lista.end(), Mochila[0].item) != lista.end()) {
        return true;
    }
    return false;
}
void inventario::Usar() {
    ChecarMochila();
    std::cout << "Gostaria de usar qual poncao?";
}

void inventario::ChecarMochila()
{
    std::cout << "___Mochila___\nTamanho da mochila = " << EspacoMax << "\n";

    for (int i = 0; i < EspacoMax; i++){
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
}

