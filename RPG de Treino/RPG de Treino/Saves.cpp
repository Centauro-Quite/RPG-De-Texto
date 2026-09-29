#include "Saves.h"
#include <fstream>
#include <filesystem>
#include <string>
#include< iomanip >

bool Saves::checarSave(const std::string nome)
{
	if (std::filesystem::exists(( nome + "_save.dat"))) {
		return true;
	}
	else {
		return false;
	}
	return false;
}


 
Saves::Saves()
{
}

const std::string path = "C:\\Users\\centauroq\\Documents\\Eu Proprio fiz\\RPG de Treino\\RPG de Treino\\Saves\\";
void Saves::Salvar(const StatusPlayer basestruct, std::map <int,Ataques>& listaAtaques)
{
	std::ofstream Save((path + basestruct.Nome + "_save.txt"), std::ios::out);
    Save << (basestruct.Nome) << '\n';
	Save << (basestruct.HPS) << '\n';
    Save << (basestruct.MPS) << '\n';
	Save << (basestruct.ATK) << '\n';
	Save << (basestruct.DFS) << '\n';
	Save << (basestruct.INTS) << "\n";
	Save << (basestruct.LUKS) << "\n";
	Save << (basestruct.LV) << "\n";
	Save << (basestruct.XP) << "\n";
	Save << (basestruct.MaxHP) << "\n";
	Save << (basestruct.MaxMP) << "\n";
	Save << (basestruct.CurMP) << "\n";
	Save << (basestruct.CurATK) << "\n";
	Save << (basestruct.CurDF) << "\n";
	Save << (basestruct.MaxXP) << "\n";
	Save << (basestruct.Nome) << "\n";
	Save << (basestruct.CurHP) << "\n";
	Save << listaAtaques.size() << '\n';

	for (const auto& [id, ataque] : listaAtaques) {
		Save << std::quoted(ataque.Nome) << '\n';
		Save << ataque.dano << '\n';
		Save << id << '\n';
		Save << ataque.mana << '\n';
	}
}

void Saves::carregar(StatusPlayer& status, std::map <int, Ataques>& ataques )
{
    std::ifstream Save((path + status.Nome + "_save.txt"), std::ios::in);
    for ( )
}



