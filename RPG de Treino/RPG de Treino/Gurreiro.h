#pragma once
#include "Base.h"
#include "inventario.h"


class Gurreiro : public Base , public inventario
{
private:

public:
	Gurreiro(int HP, int MP, int ATK, int DF, int INT, int LUK, int LV);
	void ListaDeAtaques();
	void ReceberDano();

};

