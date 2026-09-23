
#include <string>
#include <iostream>
#include "Gurreiro.h"
#include "itens.h"


Gurreiro::Gurreiro(int HPS, int MPS, int ATKS, int DFS, int INTS, int LUKS, int LV) :
	Base(HPS, MPS, ATKS, DFS, INTS, LUKS, LV), Nome("Gurreio"), 
{
	ListadeAtaqueMap[1] = { "Ataque Basico", 5, 0 };
	trocarnome(Nome);
	
}


