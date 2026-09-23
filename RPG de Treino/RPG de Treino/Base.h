#pragma once
#include <map>
#include <string>
#include "inventario.h"
struct StatusPlayer
{
    int ATK; int MaxHP;
    int DF; int LV;
    std::string Nome;
};
class Base
{
protected:
    void setMochila();
    struct Ataques
    {
        std::string Nome = "erro";

        int dano = 0;
        int mana = 0;
    };
    std::map <int, Ataques> ListadeAtaqueMap;
private:
    inventario Mochila;
    int HPS, MPS, ATKS, DFS, INTS, LUKS, LV, XP, MaxHP =10 , MaxMP, CurHP, CurMP, CurATK, CurDF, MaxXP;
    void Morte();
    std::string Nome;
public:

    Base(int HPS, int MPS, int ATKS, int DFS, int INTS, int LUKS, int LV);
    ~Base();
    void const StatusTela() const;
    int GetATK()const;
    int causardano (const int ataque)const;
    int ListaDeAtaques(const bool combate);
    void ReceberDano(int dano);
    void checarLV(const int xp);
    void SubirLV();
    StatusPlayer Status();
    void trocarnome(std::string x);
    void checarMochila();
    
};  

