#include "Gurreiro.h"
#include "inventario.h"
#include <string>
#include <iostream>


Gurreiro::Gurreiro(int HPS, int MPS, int ATKS, int DFS, int INTS, int LUKS, int LV) :
	Base(HPS, MPS, ATKS, DFS, INTS, LUKS, LV),
	Mochila(Itens::Espada_Inicial, Itens::Armadura_Inicial, Itens::Anel_Iniciante)
{
	
}
void Gurreiro::ChecarMochila()
{
	Mochila.ChecarMochila();
}




void Gurreiro::ListaDeAtaques(bool Combate) {
	if (Combate == true) {
		std::cout << "escolha um dos golpes";
	}

	for (const auto& [id, ataque] : ListadeAtaqueMap ) {
		std::cout << id << ": " << ataque.Nome << "\n";
		std:: 

	}
}

void Gurreiro::checarMochiila() {
	Mochila.ChecarMochila();
}

int Gurreiro::ReceberDano(int dano)
{
	// Implementação simples: retorna o dano recebido.
	// Ajuste para aplicar redução por defesa, curar vida atual, etc., conforme necessário.
	return dano;
}

int Base::SubirLV()
{
	return 0;
}
