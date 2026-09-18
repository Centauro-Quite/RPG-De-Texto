#pragma once
#include "Base.h"
#include "inventario.h"



class Gurreiro : public Base
{
private:
	inventario Mochila;
public:
	Gurreiro(int HPS, int MPS, int ATKS, int DFS, int INTS, int LUKS, int LV);
	void ChecarMochila();
	void ListaDeAtaques(bool combate) override;
	int ReceberDano(int dano) override;
	void checarMochiila();
};
