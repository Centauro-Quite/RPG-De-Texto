#include "Gurreiro.h"
#include "inventario.h"
#include <string>
#include <iostream>



Gurreiro::Gurreiro(int HPS, int MPS, int ATKS, int DFS, int INTS, int LUKS, int LV) :
	Base(HPS, MPS, ATKS, DFS, INTS, LUKS, LV),
	Mochila(Itens::Espada_Inicial, Itens::Armadura_Inicial, Itens::Anel_Iniciante)
{
	ListadeAtaqueMap[1] = { "Ataque Basico", 5, 0 };
}

void Gurreiro::ChecarMochila()
{
	Mochila.ChecarMochila();
}
