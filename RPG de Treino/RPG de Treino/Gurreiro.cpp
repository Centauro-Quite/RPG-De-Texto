#include "Gurreiro.h"
#include "inventario.h"

Gurreiro::Gurreiro(int HP, int MP, int ATK, int DF, int INT, int LUK, int LV) : Base(HP, MP, ATK, DF, INT, LUK, LV),
Mochila(Itens::Espada_Inicial, Itens::Armadura_Inicial, Itens::Anel_Iniciante)
{
}

void Gurreiro::ListaDeAtaques() {
	// Implementar lista de ataques do guerreiro
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


