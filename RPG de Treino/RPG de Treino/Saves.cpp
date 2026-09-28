#include "Saves.h"
#include <fstream>
#include <filesystem>
#include <string>
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
 
void Saves::Salvar(const StatusPlayer basestruct)
{
	std::ofstream Save((basestruct.Nome + "_save.dat"), std::ios::out | std::ios::binary);
	Save << (basestruct.HPS);
	Save << (basestruct.MPS);
	Save << (basestruct.ATK);
	Save << (basestruct.DFS);
	Save << (basestruct.INTS);
	Save << (basestruct.LUKS);
	Save << (basestruct.LV);
	Save << (basestruct.XP);
	Save << (basestruct.MaxHP);
	Save << (basestruct.MaxMP);
	Save << (basestruct.CurMP);
	Save << (basestruct.CurATK);
	Save << (basestruct.CurDF);
	Save << (basestruct.MaxXP);
	Save << (basestruct.Nome);
	Save << (basestruct.);
}

