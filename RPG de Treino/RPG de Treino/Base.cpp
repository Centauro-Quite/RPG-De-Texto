#include "Base.h"
#include <iostream>

Base::Base( int HPS, int MPS, int ATKS, int DFS, int INTS, int LUKS, int LV) : HPS(HPS),MPS(MPS),ATKS(ATKS),DFS(DFS),
INTS(INTS),LUKS(LUKS),LV(LV), XP(0), CurHP(0), CurMP(0), CurATK(0), CurDF(0), MaxXP(10), Nome("erro base foi escolhida"),
Mochila(NadaItem,NadaItem,NadaItem) {
	atualizarstatus();
	ListadeAtaqueMap[1] = Ataques{ "Ataque Basico", 3, 0 };
	CurHP = MaxHP;
	CurMP = MaxMP;
}
Base::~Base()
{
}
void const Base::StatusTela() const {
	std::cout << "Status de " << Nome << ":\n" << "HP:" << CurHP << "/" <<
		MaxHP << '\n' << "MP:" << CurMP << "/" << MaxMP << '\n' << "Dps:" << CurATK
		<< '\n' << "XP:" << XP << "/" << MaxXP << '\n'<< "DFatual:" << CurDF 
		<< "\n\n" ;
	std::cout << "HP:" << HPS << "  MP:" << MPS << "   DF:" << DFS << "  INT:" <<
		INTS << "   LUK:" << LUKS << "\n\n";
}

int Base::GetHP() const
{
	return CurHP;
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
		if (Mochila.temespada()) {
			ListadeAtaqueMap[1] = Ataques{ "Usar a espada", 10, 0 };
		}
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
	return 0;
}

void Base::ReceberDano(int dano) {
	CurHP = CurDF - dano;	
	if (CurHP < 1) {
		Morte();
	}
}

void Base::setMochila(Coisas item, Coisas item2, Coisas item3)
{
	Mochila.encherInv(item, item2, item3);
}


void Base::Morte() {
	std::cout << "infelimente a historia do seu heroi chega ao fim";
	//limpar o arquivo de save
	std::exit(EXIT_SUCCESS);
	
}

void Base::checarLV(const int xp) {
	XP += xp;
	if (XP >= MaxXP) {
		XP = 0;
		MaxXP = LV * 2;
		SubirLV();
	}
}
void Base::SubirLV() {
	LV++;
	std::cout << "subir de Nivel: " << (LV - 1) << " -> " << " para Nivel: " << LV << " Parabens vc subiu de nivel\n";
	StatusTela();
	std::cout << "Por causa voce upou um nivel cosegiu dois pontos pra gastar no seus status escolha entre eles:\n";
	std::map<std::string, int*> atributos = {
	{ "hp",  &HPS },
	{ "mp",  &MPS },
	{ "atk", &ATKS },
	{ "df",  &DFS },
	{ "int", &INTS },
	{ "luk", &LUKS }
	};

	std::cout << "Escolha um status: hp, mp, atk, df, int ou luk\n";
	int o = 0;
	while (o < 2) {
		std::string escolha;
		std::cin >> escolha;

		auto atributo = atributos.find(escolha);

		if (atributo == atributos.end()) {
			std::cout << "Esse status nao existe.\n";
			continue;
		}

		++(*atributo->second);
		atualizarstatus();
		o++;
		std::cout << "ponto colocado em " << (atributo->first) << '\n';
	}
}
void Base::atualizarstatus() {
	MaxHP = 5 * HPS;
	MaxMP = 5 * MPS;
	CurATK = 5 * ATKS;
	CurDF = 5 * DFS;

}

StatusPlayer Base::Status()
{
	return StatusPlayer{ this->ATKS,this->MaxHP,this->DFS,this->LV,this->Nome};
}

void Base::trocarnome(std::string x)
{
	Nome = x;
}

void Base::checarMochila()
{
	Mochila.ChecarMochila();
}
