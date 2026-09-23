#include "InimigosBase.h"

InimigosBase::InimigosBase(): Nome(""), HP(0), ATK(0), DF(0), LUK(0), LV(0), MaxHP(0), CurHP(0), Descricao("")
{
	//criar inigimo aletorio
}
InimigosBase::InimigosBase(std::string Nome, int HP, int ATK, int DF, int LUK, int LV) : Nome(Nome), HP(HP), ATK(ATK), DF(DF), LUK(LUK),
LV(LV), MaxHP(HP), CurHP(HP), Descricao("")
{

}
InimigosBase::~InimigosBase()
{

}
std::string InimigosBase::GetName()
{
	return Nome;
}
void InimigosBase::ReceberDano( const int Dano)
{
	CurHP = Dano - DF;
}
int InimigosBase::CausarDano() const {

	return ATK;
}

int InimigosBase::GetHP()const
{
	return HP;
}


void InimigosBase::setDescricao(std::string x)
{
	Descricao = x;
}

std::string InimigosBase::getDescricao()
{
	return Descricao;
}

StatusInimigos InimigosBase::Status()
{
	return StatusInimigos{ this->ATK,this->MaxHP,this->DF,this->LV,this->Nome,this->Descricao };
}
