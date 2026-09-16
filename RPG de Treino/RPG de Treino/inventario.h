#pragma once
#include "Itens.h"
#include <vector>
class inventario
{
private:
	int EspacoMax = { 3 };
	std::vector <Itens> Mochila = { Itens::Nada, Itens::Nada, Itens::Nada};
	int flechas = 10;
	Itens Arma;
	Itens Armadura;
	Itens acessorio = Itens::Nada;
public:
	inventario(Itens Arma ,Itens Armadura, Itens acessorio );
	void Usar(Itens);
	void Equipar();
	void ChecarMochila();

protected:
	Itens Adionar_Itens();

};

