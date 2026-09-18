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
    case Itens::Anel_Iniciante:     return "Anel de Iniciante DF: 1 ";
    case Itens::Arco:               return "Arco ATK: 3";
    case Itens::Armadura_Inicial:   return "Armadura Inicial: DF: 2";
    case Itens::Espada_Inicial:     return "Espada Inicial: ATK: 2";
    case Itens::Nada:               return "Nada";
    case Itens::Pocao:              return "Poção: Heal: 5";
    case Itens::Maca:               return "Maca: ATK: 2 DF:1";
    case Itens::Armadura_La:        return "Armadura LA: DF: 4";
    case Itens::Espada_Cobre:       return "Espada de Cobre: ATK: 5 ";
    case Itens::Arco_Madeira:       return "Arco de Madeira: ATK 6";
    case Itens::Espada_Duas_Maos:   return "Espada de Duas Mãos: ATK: 6 DF: -1";
    case Itens::Espada_Ferro:       return "Espada de Ferro ATK: 12";
    case Itens::Armadura_Ferro:     return "Armadura de Ferro DF:12";
    case Itens::Maca_Coragem:       return "Maçã da Coragem ATK: 10 DF:3" ;
    case Itens::Pocao_Pureza:       return "Poção da Pureza: Heal: 10 e Limpa debuffs";
    default:
        return "idota esqueçeu de arrumar a fucao Enum";
    }
    return "erro";
}


void inventario::ChecarMochila()
{
    std::cout << "___Mochila___\nTamanho da mochila = " << (EspacoMax + 1) << "\n";

    for (size_t i = 0; i <= EspacoMax; i++) {
        if (Mochila[i] == Itens::Nada) {
            std::cout << (i + 1) << ": Vazio\n ";
        }
        else {
            std::cout << (i + 1) << ": " << EnumparaString(Mochila[i]) << "\n";
        }
    }
}

