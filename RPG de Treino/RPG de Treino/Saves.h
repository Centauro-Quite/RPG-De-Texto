#pragma once

#include "Base.h"
class Saves
{
private:
	bool checarSave(const std::string nome);
public:
	Saves();
	//salvar
	void Salvar(const StatusPlayer basestruct, std::map<int, Ataques>& listaAtaques);

	
	// deletar quando morrer
	void deletar();
	// sobre escrever os saves
	void mudarSave();
	//
	

	

    void carregar(StatusPlayer& status, std::map<int, Ataques>& ataques);
};

