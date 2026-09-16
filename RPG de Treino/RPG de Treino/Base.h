#pragma once
class Base
{
private:
	int HP, MP, ATK, DF, INT, LUK, LV, XP, MAXHP, MAXMP = { 0 };
	int LVstatusBonus = 5;
public:
	Base(int HP, int MP, int ATK, int DF, int INT, int LUK, int LV);
	virtual ~Base();
	virtual void ListaDeAtaques() = 0;
	virtual int ReceberDano(int dano) = 0;


};

