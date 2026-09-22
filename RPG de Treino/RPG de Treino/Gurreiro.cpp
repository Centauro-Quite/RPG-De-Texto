
#include <string>
#include <iostream>
#include "Gurreiro.h"
#include "itens.h"


Gurreiro::Gurreiro(int HPS, int MPS, int ATKS, int DFS, int INTS, int LUKS, int LV) :
	Base(HPS, MPS, ATKS, DFS, INTS, LUKS, LV), 
	Mochila(Espada_Inicial, Armadura_Inicial, Anel_Iniciante) 
{
	ListadeAtaqueMap[1] = { "Ataque Basico", 5, 0 };
	
	
}

void Gurreiro::ChecarMochila()
{
	Mochila.ChecarMochila();
}
