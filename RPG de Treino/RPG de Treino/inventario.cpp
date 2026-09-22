#include "inventario.h"
#include <iostream>
#include <array>

inventario::inventario(Coisas Arma, Coisas Armadura, Coisas Acessorio) : Arma(Arma), Armadura(Armadura), Acessorio(Acessorio)
{

    Mochila.push_back(Arma);
    Mochila.push_back(Armadura);
    Mochila.push_back(Acessorio);
    Mochila.push_back(NadaItem);
    
}



void inventario::ChecarMochila()
{
    std::cout << "___Mochila___\nTamanho da mochila = " << EspacoMax << "\n";

    for (int i = 0; i < (EspacoMax--) ; i++) {
        if (Mochila[i].item ==  Itens::Nada) {
            std::cout << (i + 1) << ": Vazio\n ";
        }
        else {
            std::cout << (i + 1) << ": " << Mochila[i].Name << " DP: " << Mochila[i].Atk << "\n";
        }
    }
}
void inventario::Usar() {

}

