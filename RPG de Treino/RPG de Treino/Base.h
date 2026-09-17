#pragma once
class Base
{
private:
	int HPS, MPS, ATKS, DFS, INTS, LUKS, LV, XP, MAXHP, MAXMP, CurHP, CurMP = { 0 };
public:
	Base(int HPS, int MPS, int ATKS, int DFS, int INTS, int LUKS, int LV);
	virtual ~Base();
	virtual void ListaDeAtaques() = 0;
	virtual int ReceberDano(int dano) = 0;


};

