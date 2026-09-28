#include "Saves.h"
#include <fstream>
#include <filesystem>



void Saves::Salvar(const std::string& Name_file)
{

	if (std::filesystem::exists((Name_file + "_save.dat"))) {
		std::ifstream Save(((Name_file + "_save.dat")), std::fstream::out);
		
	}
	else {

	}
}

