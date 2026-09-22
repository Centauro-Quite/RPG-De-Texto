#pragma once
#include <map>
#include <string>
#include "inventario.h"
class Base
{
protected:
    struct Ataques
    {
        std::string Nome = "erro";

        int dano = 0;
        int mana = 0;
    };
    std::map <int, Ataques> ListadeAtaqueMap;
private:
    int HPS, MPS, ATKS, DFS, INTS, LUKS, LV, XP, MaxHP =10 , MaxMP, CurHP, CurMP, CurATK, CurDF, MaxXP;
    void Morte();
    std::string name;
public:

    Base(int HPS, int MPS, int ATKS, int DFS, int INTS, int LUKS, int LV);
    virtual ~Base();
    void const StatusTela() const;
    int GetATK()const;
    int causardano (const int ataque)const;
    virtual int ListaDeAtaques(const bool combate);
    void ReceberDano(int dano);
    void checarLV(const int xp);
    void SubirLV();
    
};

