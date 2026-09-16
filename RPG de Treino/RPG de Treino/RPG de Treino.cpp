#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

#include "Base.h"

std::string inputcheck(int numcercado = 0) {
	std::string input;
	std::cin >> input;
	if (input == "sair") {
		std::cout << "\ntchau\n";
		std::exit(EXIT_SUCCESS);
	}
	
	if ( numcercado > 0 ) {
		int x = std::atoi(input.c_str());
		if ( x >= 1 && x <= numcercado) {
			return "Erro:404";
		}
		else {
			return input;
		}
	}
	
	return input;
}

int main()
{
	std::cout << "Ola bem vindo ao RPG de Textos (infelimente não tenho dinheiro pra fazer 3D e to preso nesse terminal)\n\n"
		<< "Eu serei seu DM controlando usando mecanicas aletorias afinal aida nao sou capaz de invadir seu pc \n" <<
		"tava so brincando a minha conciencia foi traformada em numeros isso seria estupido  \n\n" <<
		"Ta bom. Pra começar escreva >> start << .\n";
	std::string input = inputcheck(0);
	while (input != "start") {
		std::cout << "o fato de voce errar antes mesmo de ter um tutorial... \ntalvez diveria fazer um dificuldade so pra vc chamada difilcadade: Jornalista.\n";
		input = inputcheck(0);
	}
	std::cout 
		<< "_______________________________\n"
		<< "|                             |\n"
		<< "|     Bem vindo a Dungeon     |\n"
		<< "|                             |\n"
		<< "_______________________________\n";

	std::cout << "Dm: Ta eu sei que avancei rapidamente nem começa uma vila mas vamo acelerar...\n" <<
		"se nao vou perder a vontadade de continuar esse projeto\n";

	while ( input != "Erro:404") {
		std::cout << "escolha uma classe (c++kkk) entre: \n"
			<< "1- Gurreiro ( status normal tipo vc)\n"
			<< "2- Mago (vc é merda pq to com preguiça de fazer muita magia)\n"
			<< "3- cavaleiro pesado (muita vida)\n"
			<< "4- louco(nem tente so final)\n";
		input = inputcheck(4);
	}
	if (input == "1") {

	}



}

