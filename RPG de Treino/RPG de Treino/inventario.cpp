#include "inventario.h"
#include <iostream>
#include <array>

inventario::inventario(Coisas Arma , Coisas Armadura, Coisas Acessorio) : Arma(Arma), Armadura(Armadura), Acessorio(Acessorio)
{
    Mochila[0] = Arma;
    Mochila[1] = Armadura;
    Mochila[2] = Acessorio;
    
}



void inventario::ChecarMochila()
{
    std::cout << "___Mochila___\nTamanho da mochila = " << (EspacoMax + 1) << "\n";

    for (size_t i = 0; i <= EspacoMax; i++) {
        if (Mochila[i].item ==  Itens::Nada) {
            std::cout << (i + 1) << ": Vazio\n ";
        }
        else {
            std::cout << (i + 1) << ": " << Mochila[i].Name << "DP:" << Mochila[i].Atk << "\n";
        }
    }
}
void inventario::Usar(Itens) {

}

