#pragma once
#include <string>
enum class Itens
{
	// itens iniante
	
	Nada = 0,
	Flecha ,
	Anel_Iniciante,
	Arco_Iniciante,
	Armadura_Inicial,
	Espada_Inicial,
	// Itens comums
	Pocao ,
	Maca,
	Armadura_La,
	Espada_Cobre,
	Arco_Madeira,
	// Itens Raro
	Espada_Duas_Maos,
	Espada_Ferro,
	Armadura_Ferro,
	Maca_Coragem,
	Pocao_Pureza,
};
enum class Raridade {
	iniciante, comum, raro, lendario,
};
enum class usos {
	arma,armadura,acessorio,usavel,nada

};
struct Coisas {
	std::string Name;
	Itens item;
	Raridade raridade;
	usos Qualuso;
	int Atk;
	int DF;
	int Curar;
	int MP;
};

static Coisas Flecha{
	"Flecha",
	Itens::Flecha,
	Raridade::iniciante,
	usos::usavel,
	0,
	0,
	0,
	0,
};
static Coisas Anel_Iniciante{
	"Anel Iniciante",
	Itens::Anel_Iniciante,
	Raridade::iniciante,
	usos::acessorio,
	1,
	1,
	0,
	0,
};

static Coisas Arco_Iniciante{
	"Arco Iniciante",
	Itens::Arco_Iniciante,
	Raridade::iniciante,
	usos::arma,
	2,
	0,
	0,
	0,
};

static Coisas Armadura_Inicial{
	"Armadura Inicial",
	Itens::Armadura_Inicial,
	Raridade::iniciante,
	usos::armadura,
	0,
	2,
	0,
	0,
};

static Coisas Espada_Inicial{
	"Espada Inicial",
	Itens::Espada_Inicial,
	Raridade::iniciante,
	usos::arma,
	1,
	1,
	0,
	0,
};

static Coisas NadaItem{
	"Vazio",
	Itens::Nada,
	Raridade::iniciante,
	usos::nada,
	0,
	0,
	-99999,
	0,
};

// Itens comuns
static Coisas Pocao{
	"Pocao",
	Itens::Pocao,
	Raridade::comum,
	usos::usavel,
	0,
	0,
	5,
	0,
};

static Coisas Maca{
	"Maca",
	Itens::Maca,
	Raridade::comum,
	usos::arma,
	2,
	3,
	0,
	0,
};

static Coisas Armadura_La_Item{
	"Armadura de La",
	Itens::Armadura_La,
	Raridade::comum,
	usos::armadura,
	0,
	3,
	0,
	0,
};

static Coisas Espada_Cobre_Item{
	"Espada de Cobre",
	Itens::Espada_Cobre,
	Raridade::comum,
	usos::arma,
	5,
	3,
	0,
	0,
};

static Coisas Arco_Madeira_Item{
	"Arco de Madeira",
	Itens::Arco_Madeira,
	Raridade::comum,
	usos::arma,
	8,
	0,
	0,
	0,
};

// Itens raros
static Coisas Espada_Duas_Maos_Item{
	"Espada de Duas Maos",
	Itens::Espada_Duas_Maos,
	Raridade::raro,
	usos::arma,
	28,
	0,
	0,
	0,
};

static Coisas Espada_Ferro_Item{
	"Espada de Ferro",
	Itens::Espada_Ferro,
	Raridade::raro,
	usos::arma,
	20,
	10,
	0,
	0,
};

static Coisas Armadura_Ferro_Item{
	"Armadura de Ferro",
	Itens::Armadura_Ferro,
	Raridade::raro,
	usos::armadura,
	5,
	25,
	0,
	0,
};

static Coisas Maca_Coragem_Item{
	"Maca da Coragem",
	Itens::Maca_Coragem,
	Raridade::raro,
	usos::arma,
	20,
	20,
	0,
	0,
};

static Coisas Pocao_Pureza_Item{
	"Pocao da Pureza",
	Itens::Pocao_Pureza,
	Raridade::raro,
	usos::usavel,
	0,
	0,
	30,
	0,
};

