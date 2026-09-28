#pragma once
#include <map>
#include <string>
#include "inventario.h"
//HPS,MPS,ATK,DFS,INTS,LUKS,LV,XP,MaxHP,MaxMP,CurMP,CurATK,CurDF,MaxXP;string Nome;
struct StatusPlayer
{
    int HPS, MPS, ATK, DFS, INTS,LUKS,LV,
    XP,MaxHP, MaxMP,CurMP, CurATK,CurDF, MaxXP;
    std::string Nome;
};
class Base
{
protected:
    void setMochila(Coisas item, Coisas item2, Coisas item3);
    struct Ataques
    {
        std::string Nome = "erro";

        int dano = 0;
        int mana = 0;
    };
    // [ID], Nome,Dano,MP
    std::map <int, Ataques> ListadeAtaqueMap;
private:
    inventario Mochila;
    int HPS, MPS, ATKS, DFS, INTS, LUKS, LV, XP, MaxHP =10 , MaxMP, CurHP, CurMP, CurATK, CurDF, MaxXP;
    void Morte();
    std::string Nome;
    void atualizarstatus();
public:

    Base(int HPS, int MPS, int ATKS, int DFS, int INTS, int LUKS, int LV);
    ~Base();
    void const StatusTela() const;
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
    
};  

