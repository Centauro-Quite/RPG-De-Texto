#include "inventario.h"
#include <iostream>
#include <array>

inventario::inventario(Itens Arma, Itens Armadura, Itens Acessorio) : Arma(Arma), Armadura(Armadura), Acessorio(Acessorio)
{
    Mochila[0] = Arma;
    Mochila[1] = Armadura;
    Mochila[2] = Acessorio;
    Mochila[3] = Itens::Nada;
}

std::string EnumparaString(Itens x) {
    switch (x) {
    case Itens::Flecha:             return "Flecha";
    case Itens::Anel_Iniciante:     return "Anel de Iniciante";
    case Itens::Arco:               return "Arco";
    case Itens::Armadura_Inicial:   return "Armadura Inicial";
    case Itens::Espada_Inicial:     return "Espada Inicial";
    case Itens::Nada:               return "Nada";
    case Itens::Pocao:              return "Poção";
    case Itens::Maca:               return "Maçã";
    case Itens::Armadura_LA:        return "Armadura LA";
    case Itens::Espada_Cobre:       return "Espada de Cobre";
    case Itens::Arco_Madeira:       return "Arco de Madeira";
    case Itens::Espada_Duas_Maos:   return "Espada de Duas Mãos";
    case Itens::Espada_Ferro:       return "Espada de Ferro";
    case Itens::Armadura_Ferro:     return "Armadura de Ferro";
    case Itens::Maca_Coragem:       return "Maçã da Coragem";
    case Itens::Pocao_Pureza:       return "Poção da Pureza";
    default:
        return "idota esqueçeu de arrumar a fucao Enum";
    }
    return "erro";
}





void inventario::ChecarMochila()
{
    std::cout << "___Mochila___\nTamanho da mochila = " << EspacoMax << "\n";

    for (size_t i = 0; i < EspacoMax; i++) {
        if (Mochila[i] == Itens::Nada) {
            std::cout << (i + 1) << "Vazio\n ";
        }
        else {
            std::cout << (i + 1) << ": " << EnumparaString(Mochila[i]) << "\n";
        }
    }
}
