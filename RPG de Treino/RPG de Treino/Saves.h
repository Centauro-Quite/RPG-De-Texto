#pragma once
#include "Base.h"
#include "inventario.h"
class Saves
{
private:
	bool checarSave(const std::string nome);
public:
	Saves();
	//salvar
	void Salvar(const StatusPlayer& basestruct, const std::map<int, Ataques>& listaAtaques, const inventario& mochila );

	std::string checarexiste();
	
	void carregar(StatusPlayer& status, std::map<int, Ataques>& ataques, inventario& mochila);


	// deletar quando morrer
	void deletar();
	// sobre escrever os saves
	void mudarSave();
	//


};

