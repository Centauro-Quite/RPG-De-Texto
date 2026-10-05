#pragma once
#include "Base.h"
#include "inventario.h"



class Gurreiro : public Base
{
private:
	
	std::string Nome;
public:
	Gurreiro();
    //HP,MP,ATK,DF
	Gurreiro(int HPS, int MPS, int ATKS, int DFS, int INTS, int LUKS, int LV);
	
	
};
