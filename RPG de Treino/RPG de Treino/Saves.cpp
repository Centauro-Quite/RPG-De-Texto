#include "Saves.h"
#include <fstream>
#include <filesystem>
#include <string>
#include <iomanip>

const std::string path = "Saves\\save.txt";
bool Saves::checarSave(const std::string nome)
{
	if (std::filesystem::exists(path)) {
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

void Saves::Salvar(const StatusPlayer& basestruct, const std::map<int, Ataques>& listaAtaques, const inventario& mochila)
{
    std::ofstream Save (path, std::ios::out);
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
    Save << (basestruct.CurHP) << "\n";
    Save << listaAtaques.size() << '\n';

    for (const auto& [id, ataque] : listaAtaques) {
        Save << std::quoted(ataque.Nome) << '\n';
        Save << ataque.dano << '\n';
        Save << id << '\n';
        Save << ataque.mana << '\n';
    }
    Save << mochila.get_tamanho() << '\n';
    Save << mochila.get_flechas() << '\n';
    auto vec = mochila.carregarMochila();
    for (const auto& item : vec) {
        Save << std::quoted(item.Name) << '\n';
        Save << static_cast<int>(item.item) << '\n';
        Save << static_cast<int>(item.raridade) << '\n';
        Save << static_cast<int>(item.Qualuso) << '\n';
        Save << item.Atk << '\n';
        Save << item.DF << '\n';
        Save << item.Curar << '\n';
        Save << item.MP << '\n';
    }
}
std::string Saves::checarexiste() {
    std::ifstream Save(path);
    if (Save.is_open()) {
        std::string a;Save >> a;
        return a;
    }
    return std::string{};
}

void Saves::carregar(StatusPlayer& status, std::map <int, Ataques>& ataques, inventario& mochila)
{
    std::ifstream Save(path);

    if (!Save) {
        return;
    }

    // Nome está na primeira linha e pode conter espaços.
    std::getline(Save, status.Nome);

    Save >> status.HPS
        >> status.MPS
        >> status.ATK
        >> status.DFS
        >> status.INTS
        >> status.LUKS
        >> status.LV
        >> status.XP
        >> status.MaxHP
        >> status.MaxMP
        >> status.CurMP
        >> status.CurATK
        >> status.CurDF
        >> status.MaxXP
        >> status.CurHP;

    std::size_t quantidadeAtaques;
    Save >> quantidadeAtaques;

    ataques.clear();

    for (std::size_t i = 0; i < quantidadeAtaques; ++i) {
        Ataques ataque;
        int id;

        Save >> std::quoted(ataque.Nome)
            >> ataque.dano
            >> id
            >> ataque.mana;

        ataques[id] = ataque;
    }
    std::size_t quantidadem;
    Save >> quantidadem;
    int flechas;
    Save >> flechas;

    std::vector<Coisas> newVec;
    newVec.reserve(quantidadem);

    for (std::size_t i = 0; i < quantidadem; ++i) {
        Coisas item;
        Save >> std::quoted(item.Name);
        int tmp;
        Save >> tmp; item.item = static_cast<Itens>(tmp);
        Save >> tmp; item.raridade = static_cast<Raridade>(tmp);
        Save >> tmp; item.Qualuso = static_cast<usos>(tmp);
        Save >> item.Atk >> item.DF >> item.Curar >> item.MP;
        newVec.push_back(item);
    }

    mochila.setMochila(newVec, static_cast<int>(quantidadem), flechas);

}
 

