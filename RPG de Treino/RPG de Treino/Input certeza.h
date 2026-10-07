#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

inline std::string inputcheck(const std::vector<std::string>& aceitavel, const std::string& erro) {
    std::string input;
    while (true) {
        std::cin >> input;
        if (input == "sair")
        {
            std::cout << "\nTchau!\n";
            std::exit(EXIT_SUCCESS);
        }
        auto encontrar = std::find(aceitavel.begin(), aceitavel.end(), input);
        if (encontrar != aceitavel.end()) {
            return input;
        }
        std::cout << erro << '\n';
    }
    std::exit(EXIT_FAILURE);
}