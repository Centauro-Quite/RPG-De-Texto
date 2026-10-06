#pragma once
#include <string>
#include "Inimigos.h"
struct StatusInimigos
{
	int ATK; int MaxHP;
	int DF; int LV;
	std::string Nome;
	std::string Descricao;
	int xp;
};
class InimigosBase
{
protected:

private:
	static int Quantidade;
	std::string Nome;
	int HP, ATK, DF, LV, LUK, MaxHP, CurHP;
	std::string Descricao;
public:
	InimigosBase(Areas area);
    //nome,HP,ATK,DF,LUK,LV
	InimigosBase(std::string Nome, int HP, int ATK, int DF, int LUK, int LV );
	~InimigosBase();
	std::string GetName();
	void ReceberDano(const int Dano);
	int CausarDano() const;
	int GetHP()const;
	void setDescricao(std::string x);
	std::string getDescricao();
	int XPFarme() const;

	StatusInimigos Status();
	
};

