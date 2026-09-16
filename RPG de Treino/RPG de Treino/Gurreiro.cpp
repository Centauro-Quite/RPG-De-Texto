#include "Gurreiro.h"
#include "inventario.h"

Gurreiro::Gurreiro(int HP, int MP, int ATK, int DF, int INT, int LUK, int LV) :
 Base(HP, MP, ATK, DF, INT, LUK, LV) , 
 inventario(Itens::Espada_Inicial, Itens::Armadura_Inicial, Itens::Anel_Iniciante)
{


}
