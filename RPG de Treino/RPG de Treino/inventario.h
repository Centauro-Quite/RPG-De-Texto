#pragma once
#include "Itens.h"
#include <vector>
#include <string>
class inventario
{
private:
	int EspacoMax = {4};
	int quantidade = 0;
	Coisas Arma;
	Coisas Armadura;
	Coisas Acessorio;
	std::vector < Coisas > Mochila = { Arma , Armadura, Acessorio };
	int flechas = 10;

public:
	inventario(Coisas Arma, Coisas Armadura, Coisas Acessorio);
	void encherInv(Coisas item, Coisas item2, Coisas item3);
	void Usar();
	void Equipar();
	
	void ChecarMochila();
	

protected:
	Itens Adionar_Itens();

};

