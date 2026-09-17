#include "Base.h"

Base::Base(int HP, int MP, int ATK, int DF, int INT, int LUK, int LV) : HPS(HP), MPS(MP), ATKS(ATK), DFS(DF), INTS(INT), LUKS(LUK), LV(LV), XP(0){

	MAXHP = 5 * HP;
	MAXMP = 5 * MP;
}
Base::~Base()
{
}


void Base::ListaDeAtaques()  {

 }