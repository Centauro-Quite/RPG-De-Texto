#include "Base.h"

Base::Base(int HPS, int MPS, int ATKS, int DFS, int INTS, int LUKS, int LV) : HPS(HPS), MPS(MPS), ATKS(ATKS), DFS(DFS), INTS(INTS), LUKS(LUKS), LV(LV), XP(0), CurHP(0), CurMP(0), CURATK (0), CurDF(0) MaxXP(10){
	MAXHP = 5 * HPS;
	MAXMP = 5 * MPS;
	CURATK = 5 * ATKS;
	CurDF = 5 * DFS;
	CurHP = MAXHP;
	CurMP = MAXMP;
 //MaxXP = LV * 2;
	ListadeAtaqueMap [0] = Ataques{ "Ataque Basico", 3, 0 };
	
}
Base::~Base()
{
}


void Base::ListaDeAtaques(bool combate) {

}


void Base::ChecarLV(int xp){
//XP =+ xp;
//if (XP >= MaxXP){
//LV++
//XP =0;
//XPMax = LV * 2;
//SubirLV();
//}

//void SubirLV(){




  
}