#include "InimigosBase.h"

InimigosBase::InimigosBase(int HP, int ATK, int DF, int LUK, int LV) : HP(HP), ATK(ATK), DF(DF), LUK(LUK), LV(LV), MaxHP(HP), CurHP(HP
)
{

}

InimigosBase::~InimigosBase()
{

}
void InimigosBase::ReceberDano( const int Dano)
{
	CurHP -= Dano - DF;
	if (CurHP < 0)
		CurHP = 0;
}
int InimigosBase::CausarDano() const {

	return ATK;
}