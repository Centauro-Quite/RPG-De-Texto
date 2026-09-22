#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include "Gurreiro.h"

#define Log(x) (std::cout << x << '\n')

std::string inputcheck() {
	std::string input;
	std::cin >> input;
	if (input == "sair") {
		std::cout << "\ntchau\n";
		std::exit(EXIT_SUCCESS);
	}
	
	return input;
}

int main()
{
	Gurreiro Player(1,1,1,1,1,1,1);
	Player.ChecarMochila();
	Player.StatusTela();

	


	std::cin.get();
	return 0;

	std::cout << "Ola bem vindo ao RPG de Textos (infelimente n�o tenho dinheiro pra fazer 3D e to preso nesse terminal)\n\n"
		<< "Eu serei seu DM controlando usando mecanicas aletorias afinal aida nao sou capaz de invadir seu pc \n" <<
		"tava so brincando a minha conciencia foi traformada em numeros isso seria estupido  \n\n" <<
		"Ta bom. Pra come�ar escreva >> start << .\n";
	std::string input = inputcheck();
	while (input != "start") {
		std::cout << "o fato de voce errar antes mesmo de ter um tutorial... \ntalvez diveria fazer um dificuldade so pra vc chamada difilcadade: Jornalista.\n";
		input = inputcheck();
	}
	std::cout
		<< "_______________________________\n"
		<< "|                             |\n"
		<< "|     Bem vindo a Dungeon     |\n"
		<< "|                             |\n"
		<< "_______________________________\n";

	std::cout << "Dm: Ta eu sei que avancei rapidamente nem come�a uma vila mas vamo acelerar...\n" <<
		"se nao vou perder a vontadade de continuar esse projeto\n";
	std::cout << "escolha uma classe (c++kkk) entre: \n"
		<< "1- Gurreiro ( status normal tipo vc)\n"
		<< "2- Mago (vc � merda pq to com pregui�a de fazer muita magia)\n"
		<< "3- cavaleiro pesado (muita vida)\n"
		<< "4- louco(nem tente so final)\n";
	input = inputcheck();
	int x = std::atoi(input.c_str());

	while (x < 0 || x > 4) {
		std::cout << "error tente novamente";
		input = inputcheck();
		int x = std::atoi(input.c_str());
	}
	static int HP,MP,ATK,DF,INT,LUK,LV;
	if (x == 1) {
		Gurreiro Player(HP = 10, MP = 10, ATK = 10, DF = 5, INT = 10, LUK = 1, LV = 1);
	}
	input = inputcheck();



}


