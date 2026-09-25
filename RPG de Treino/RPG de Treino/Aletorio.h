#pragma once
#include <random>
#include <stdexcept>

// Gera inteiros aleatorios. Os dois limites tambem podem ser sorteados.
class Aleatorio
{
public:
    int Entre(int minimo, int maximo)
    {
        if (minimo > maximo) {
            throw std::invalid_argument("O minimo nao pode ser maior que o maximo.");
        }

        std::uniform_int_distribution<int> distribuicao(minimo, maximo);
        return distribuicao(Gerador());
    }
private:
    static std::mt19937& Gerador()
    {
        static std::random_device dispositivo;
        static std::mt19937 gerador(dispositivo());
        return gerador;
    }
};

