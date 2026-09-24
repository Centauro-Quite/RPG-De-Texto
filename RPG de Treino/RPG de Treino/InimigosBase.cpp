#include "InimigosBase.h"
#include "Aletorio.h"

InimigosBase::InimigosBase(Areas area): Nome(""), HP(0), ATK(0), DF(0), LUK(0), LV(0), MaxHP(0), CurHP(0), Descricao("")
{
	/*Dungeon: Goblin, Esqueleto e Slime
	Floresta : Goblin, Slime, Lobo e Coelho
	Vila : Bandido e Guerreiro
	Guerra : Bandido e Guerreiro
	Cemitério : apenas Zumbi
	*/
	std::vector <Luta> podemexistir;
	podemexistir.reserve(3);

	if (area == Areas::vila) {
		podemexistir.emplace_back(bandidos_luta);
	}
	else if (area == Areas::floresta) {
		podemexistir.insert(podemexistir.end(), { goblin_luta, slime_luta, lobo_luta, coelho_luta });
	}
	else if (area == Areas::dungeon) {
		podemexistir.insert(podemexistir.end(), { goblin_luta, esqueletos_luta, slime_luta });
	}
	else if (area == Areas::cemiterio) {
		podemexistir.emplace_back(zumbis_luta);
	}
	else {
		podemexistir.insert(podemexistir.end(), { bandidos_luta, guerreiro_luta });
	}
	criarinimigo(podemexistir);
}
InimigosBase::InimigosBase(std::string Nome, int HP, int ATK, int DF, int LUK, int LV) : Nome(Nome), HP(HP), ATK(ATK), DF(DF), LUK(LUK),
LV(LV), MaxHP(HP), CurHP(HP), Descricao("")
{

}
InimigosBase::~InimigosBase()
{

}
void InimigosBase::criarinimigo(const std::vector<Luta>& a) {
	Aleatorio aleatorio;
	int i = aleatorio.Entre(0, a.size());
	HP = a[i].hp;
	ATK = a[i].atk;
	DF = a[i].df;
	LV = a[i].lv;
	LUK = a[i].luk;
	Nome = a[i].nome;
	MaxHP = HP;
	CurHP = HP;
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
