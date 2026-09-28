#pragma once

#include "Base.h"
class Saves : public Base 
{
private:
	bool checarSave(const std::string nome);
public:
	//verificar se um save ja existe
	void Salvar(const StatusPlayer basestruct);
	// deletar quando morrer
	void deletar();
	// sobre escrever os saves
	void mudarSave();

	

};

