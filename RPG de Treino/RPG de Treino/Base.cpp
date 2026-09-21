#include "Base.h"
#include <iostream>

Base::Base(int HPS, int MPS, int ATKS, int DFS, int INTS, int LUKS, int LV) : HPS(HPS), MPS(MPS), ATKS(ATKS), DFS(DFS), INTS(INTS),
LUKS(LUKS), LV(LV), XP(0), CurHP(0), CurMP(0), CurATK(0), CurDF(0), MaxXP(10)  {
		MaxHP = 5 * HPS;
		MaxMP = 5 * MPS;
		CurATK = 5 * ATKS;
		CurDF = 5 * DFS;
		CurHP = MaxHP;
		CurMP = MaxMP;
		MaxXP = LV * 2;
		ListadeAtaqueMap[1] = Ataques{ "Ataque Basico", 3, 0 };

	}
Base::~Base()
{
}
int Base::GetATK () const {
	return CurATK;
}
int Base::causardano (const int ataque) const {
	return (CurATK + ataque);
}

int Base::ListaDeAtaques(const bool Combate) {
	if (Combate == true) {
		std::cout << "escolha um dos golpes:\n";
	}

	for (const auto& [id, ataque] : ListadeAtaqueMap) {
		std::cout << id << ": " << ataque.Nome << ": DPS:" << (ATKS + ataque.dano);
		if (ataque.mana > 0) {
			std::cout << "MP: " << ataque.mana;
		}
		std::cout << '\n';
		if (Combate == true) {
			std::cout << "Se quiser sair digite 0 ou atacar o numero do ataque:\n";
			int input; std::cin >> input;
			if (input == 0) {
				std::cout << "saido da lista de acoes\n";
				return 0;
			}
			else if(input == id){
				return causardano(ataque.dano);
			} else{
				std::cout << "erro escolha errado";
				return 0;
			}
		}
		else {
			std::cout << "essas sao opcoes de ataque";
		}
	}
}

void Base::ReceberDano(int dano) {
	CurHP = CurDF - dano;	
	if (CurHP < 1) {
		Morte();
	}
}

void Base::Morte() {
	std::cout << "infelimente a historia do seu heroi chega ao fim";
	//limpar o arquivo de save
	std::exit(EXIT_SUCCESS);
	
}

void Base::checarLV(const int xp) {
	XP = +xp;
	if (XP >= MaxXP) {
		XP = 0;
		MaxXP = LV * 2;
		SubirLV();
	}
}
void Base::SubirLV() {
	LV++;
	std::cout << "Nivel: " << (LV - 1) << " -> " << "Nivel: " << LV << " Parabens vc subiu de nivel\n";
	std::string input; std::cin >> input;
	//printar Status
	
}
void Base::Status() {

}
  
