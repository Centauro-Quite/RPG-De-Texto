#pragma once
#include <map>
#include <string>

class Base
{
protected:
    struct Ataques
    {
        std::string Nome;
        int dano;
        int mana;
    };
    std::map<int, Ataques> ListadeAtaqueMap;
private:
    int HPS, MPS, ATKS, DFS, INTS, LUKS, LV, XP, MAXHP, MAXMP, CurHP, CurMP, CURATK, CurDF = { 0 };

  
public:

    Base(int HPS, int MPS, int ATKS, int DFS, int INTS, int LUKS, int LV);
    virtual ~Base();

    virtual void ListaDeAtaques(bool combate) = 0;
    virtual int ReceberDano(int dano) = 0;
    virtual int SubirLV();

};

