#include "Base.h"

Base::Base(int HP, int MP, int ATK, int DF, int INT, int LUK, int LV) : HP(HP), MP(MP), ATK(ATK), DF(DF), INT(INT), LUK(LUK), LV(LV), XP(0){
	this->HP = this->LV * LVstatusBonus;
	this->MP = this->LV * LVstatusBonus;
	this->ATK = this->LV * LVstatusBonus;
	this->DF = this->LV * LVstatusBonus;
	this->INT = this->LV * LVstatusBonus;
	this->LUK = this->LV * LVstatusBonus;
	MAXHP = 5 * HP;
	MAXMP = 5 * MP;
}
Base::~Base()
{
}


void Base::ListaDeAtaques()  {
	int basicatack = ATK / 2;

 }