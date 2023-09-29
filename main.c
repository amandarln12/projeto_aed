#include "./includes/personagem.h"
#include "./includes/cartas.h"
#include "./includes/monstros.h"
#include "./src/personagem.c"
#include "./src/cartas.c"
#include "./src/monstros.c"
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	//Definição da variável "personagem" como tipo PERSONAGEM
	PERSONAGEM personagem;
	//Definição da variável "deck" como DECK
	DECK deck;
	//Definição da variável "monstros" como ponteiro do tipo MONSTROS
	MONSTROS *monstros;

	//Função de criação de cartas
	inicializa_deck(&deck);
	//Função de inserção de cartas em um deck
	gerar_deck(&deck);
	//Função de impressão de deck
	imprime_deck(&deck);

	//Funções utilizadas para pausar e limpar a tela do terminal
	system("pause");
	system("cls");

	//Função de criação do personagem
	inicializa_personagem(&personagem);
	//Função de impressão dos status do personagem
	imprime_personagem(personagem);

	//Funções utilizadas para pausar e limpar a tela do terminal
	system("pause");
	system("cls");

	//Função de criação de monstros
	inicializa_monstros(&monstros);
	//Função de impressão dos monstros
	imprime_monstros(&monstros);
}
 