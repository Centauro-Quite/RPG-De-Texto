#pragma once
#include <map>
#include <string>
#include "inventario.h"
//HPS,MPS,ATK,DFS,INTS,LUKS,LV,XP,MaxHP,MaxMP,CurMP,CurATK,CurDF,MaxXP;string Nome;
struct StatusPlayer
{
    int HPS, MPS, ATK, DFS, INTS, LUKS, LV,
        XP, MaxHP, MaxMP, CurMP, CurATK, CurDF, MaxXP, CurHP;
    std::string Nome;
};
struct Ataques
{
    std::string Nome = "erro";

    int dano = 0;
    int mana = 0;
};
enum class Classes {
    Gurreiro, Mago
};

class Base
{
protected:
    void setMochila(Coisas item, Coisas item2, Coisas item3, Coisas item4);

    // [ID], Nome,Dano,MP
    std::map <int, Ataques> ListadeAtaqueMap;
    std::map <int, Ataques> disponivelataque;
private:
    inventario Mochila;
    int HPS, MPS, ATKS, DFS, INTS, LUKS, LV, XP, MaxHP =10 , MaxMP, CurHP, CurMP, CurATK, CurDF, MaxXP;
    
    void Morte();
    std::string Nome;
    void atualizarstatus();
public:
	Base();
	Base(int HPS, int MPS, int ATKS, int DFS, int INTS, int LUKS, int LV);
	virtual ~Base();
	void StatusTela() const;
	// Destrutor virtual para garantir comportamento polimórfico em dynamic_casts e limpeza correta de recursos em classes derivadas
	int  GetHP()const;
    int GetATK()const;
    int causardano (const int ataque)const;
    int ListaDeAtaques(const bool combate);
    void ReceberDano(int dano);
    void checarLV(const int xp);
    void SubirLV();
    StatusPlayer Status()const;
    void trocarnome(std::string x);
    void checarMochila();
	void UsarItem();
	void recuperarMP(int MP);
    void curar(int cura); 
    void salvar();
    void carregar();
    void gethabilidade();
};  
