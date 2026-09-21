#pragma once
#include <string>
class InimigosBase
{
protected:

private:
	int HP, ATK, DF, LV, LUK, MaxHP, CurHP;
public:
	InimigosBase(int HP, int ATK, int DF, int LUK, int LV );
	~InimigosBase();
	void ReceberDano(const int Dano);
	int CausarDano() const;
	int GetHP();
	int GetAtk();
	std::string Descricao();



};

