#include "InimigosBase.h"
#include <algorithm>
#include "Aleatorio.h"

InimigosBase::InimigosBase(Areas area): Nome(""), HP(0), ATK(0), DF(0), LUK(0), LV(0), MaxHP(0), CurHP(0), Descricao("")
{
	std::vector <Luta> todosInimigos = { goblin_luta,bandidos_luta,esqueletos_luta, zumbis_luta, guerreiro_luta, slime_luta,
		lobo_luta, coelho_luta };

	std::vector<const Luta*> podemNascer;
	podemNascer.reserve(todosInimigos.size());

	for (const Luta& inimigo : todosInimigos) {
		auto encontrado = std::find(
			inimigo.area.begin(),
			inimigo.area.end(),

			area);
		if (encontrado != inimigo.area.end()) {
			podemNascer.push_back(&inimigo);
		}
	}
	Aleatorio rando;
	int x = rando.Entre(0, (podemNascer.size()- 1));
	HP = podemNascer[x]->hp;
	ATK = podemNascer[x]->atk ;
	DF = podemNascer[x]-> df;
	LV = podemNascer[x]->lv;
	Nome = podemNascer[x]->nome;
	MaxHP = HP;
	CurHP = HP;
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

int InimigosBase::XPFarme()
{
	return LV * 10 / 3;
}

StatusInimigos InimigosBase::Status()
{
	return StatusInimigos{ this->ATK,this->MaxHP,this->DF,this->LV,this->Nome,this->Descricao };
}
