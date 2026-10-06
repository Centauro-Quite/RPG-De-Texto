#include "Gurreiro.h"

Gurreiro::Gurreiro() {
    carregar();
}
Gurreiro::Gurreiro(int HPS, int MPS, int ATKS, int DFS, int INTS, int LUKS, int LV) :
	Base(HPS, MPS, ATKS, DFS, INTS, LUKS, LV), Nome("Gurreio")
{
	ListadeAtaqueMap[1] = { "Ataque Basico", 5, 0 };
	trocarnome(Nome);
	setMochila(Espada_Inicial, Armadura_Inicial, Anel_Iniciante,Pocao );
	
}


