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

void inventario::encherInv(Coisas item, Coisas item2, Coisas item3)
{
	Mochila[0] = item;
	Mochila[1] = item2;
	Mochila[2] = item3;
}




void inventario::ChecarMochila()
{
    std::cout << "___Mochila___\nTamanho da mochila = " << EspacoMax << "\n";

    for (int i = 0; i < EspacoMax; i++){
        if (Mochila[i].item == NadaItem.item) {
            std::cout << (i + 1) << ": Vazio\n ";
        }
        else {
            std::cout << (i + 1) << ": " << Mochila[i].Name << " DP: " << Mochila[i].Atk << "\n";
        }
    }
}
void inventario::Usar() {
    
}
