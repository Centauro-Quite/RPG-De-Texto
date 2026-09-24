#pragma once
#include <string>
#include <vector>
enum class Areas {
	vila, dungeon, guerra, floresta, cemiterio

};
enum class inimigosid {
	goblins,bandidos,esqueletos,zumbis,
	gurreiro,slime,lobo,coelho,
};
//nome, area, id inimigo, hp, atk, df, luk, lv
struct Luta {
	std::string nome;
	std::vector <Areas> area;
	inimigosid idinimigo;
	int hp;
	int atk;
	int df;
	int luk;
	int lv;
};
static Luta goblin_luta{
	"Goblin",
	{Areas::dungeon,Areas::floresta },
	inimigosid::goblins,
	5,
	2,
	1,
	1,
	1
};

static Luta bandidos_luta{
	"Bandido",
	{Areas::vila, Areas::guerra},
	inimigosid::bandidos,
	10,
	5,
	3,
	6,
	4
};

static Luta esqueletos_luta{
	"Esqueleto",
	{Areas::cemiterio, Areas::dungeon},
	inimigosid::esqueletos,
	20,
	4,
	4,
	2,
	2
};

static Luta zumbis_luta{
	"Zumbi",
	{Areas::cemiterio},
	inimigosid::zumbis,
	30,
	10,
	5,
	4,
	10
};

static Luta guerreiro_luta{
	"Guerreiro",
	{Areas::vila, Areas::guerra},
	inimigosid::gurreiro,
	50,
	25,
	24,
	10,
	20
};

static Luta slime_luta{
	"Slime",
	{Areas::floresta, Areas::dungeon},
	inimigosid::slime,
	10,
	3,
	3,
	1,
	2
};

static Luta lobo_luta{
	"Lobo",
	{Areas::floresta},
	inimigosid::lobo,
	12,
	12,
	0,
	3,
	5
};

static Luta coelho_luta{
	"Coelho",
	{ Areas::floresta},
	inimigosid::coelho,
	3,
	1,
	1,
	1,
	2
};

