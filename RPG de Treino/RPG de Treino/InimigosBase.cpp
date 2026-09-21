#include "InimigosBase.h"

InimigosBase::InimigosBase(int HP, int ATK, int DF, int LUK, int LV) : HP(HP), ATK(ATK), DF(DF), LUK(LUK), LV(LV), MaxHP(HP), CurHP(MaxHP)
{

}

InimigosBase::~InimigosBase()
{

}
void InimigosBase::ReceberDano( const int Dano)
{
	HP = Dano - DF;
}
int InimigosBase::CausarDano() const {

	return 0;
}