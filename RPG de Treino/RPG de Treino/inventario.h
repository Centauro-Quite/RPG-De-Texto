#pragma once
#include "Itens.h"
#include <vector>
#include <string>
class inventario
{
private:
	int EspacoMax = { 3 };
	std::vector <Itens> Mochila = { Itens::Nada, Itens::Nada, Itens::Nada, Itens::Nada};
	int flechas = 10;
	Itens Arma;
	Itens Armadura;
	Itens Acessorio;
	
public:
	inventario(Itens Arma ,Itens Armadura, Itens Acessorio );
	void Usar(Itens);
	void Equipar();
	
	void ChecarMochila();
	std::string ConverterEnuminString(Itens);

protected:
	Itens Adionar_Itens();

};

