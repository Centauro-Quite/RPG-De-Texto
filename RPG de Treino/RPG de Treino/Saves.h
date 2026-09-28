#pragma once

class Saves
{

public:
	//verificar se um save ja existe
	bool checarSave();
	//salvar
	void Salvar(const std::string& Name_file);

	
	// deletar quando morrer
	void deletar();
	// sobre escrever os saves
	void mudarSave();

	

};

