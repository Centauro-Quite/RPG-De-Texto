#pragma once
#include "Base.h"
#include "inventario.h"


class Gurreiro : public Base 
{
private:
	inventario Mochila{ Itens::Espada_Inicial, Itens::Armadura_Inicial, Itens::Anel_Iniciante };
public:
	Gurreiro(int HP, int MP, int ATK, int DF, int INT, int LUK, int LV);
	void checarMochiila();
	void ListaDeAtaques() override;
	int ReceberDano(int dano) override;

};


