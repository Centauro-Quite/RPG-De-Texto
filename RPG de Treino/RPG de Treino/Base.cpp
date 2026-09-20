#include "Base.h"

Base::Base(int HPS, int MPS, int ATKS, int DFS, int INTS, int LUKS, int LV) : HPS(HPS), MPS(MPS), ATKS(ATKS), DFS(DFS), INTS(INTS), LUKS(LUKS), LV(LV), XP(0), CurHP(0), CurMP(0), CURATK (0), CurDF(0){
	MAXHP = 5 * HPS;
	MAXMP = 5 * MPS;
	CURATK = 5 * ATKS;
	CurDF = 5 * DFS;
	CurHP = MAXHP;
	CurMP = MAXMP;
	ListadeAtaqueMap [0] = Ataques{ "Ataque Basico", 3, 0 };
	
}
Base::~Base()
{
}


void Base::ListaDeAtaques(bool combate) {

}

void Base::SubirLV(int xp){
 XP = xp;
 
}