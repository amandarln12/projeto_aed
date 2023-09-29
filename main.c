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
	//Defini��o da vari�vel "personagem" como tipo PERSONAGEM
	PERSONAGEM personagem;
	//Defini��o da vari�vel "deck" como DECK
	DECK deck;
	//Defini��o da vari�vel "monstros" como ponteiro do tipo MONSTROS
	MONSTROS *monstros;

	//Fun��o de cria��o de cartas
	inicializa_deck(&deck);
	//Fun��o de inser��o de cartas em um deck
	gerar_deck(&deck);
	//Fun��o de impress�o de deck
	imprime_deck(&deck);

	//Fun��es utilizadas para pausar e limpar a tela do terminal
	system("pause");
	system("cls");

	//Fun��o de cria��o do personagem
	inicializa_personagem(&personagem);
	//Fun��o de impress�o dos status do personagem
	imprime_personagem(personagem);

	//Fun��es utilizadas para pausar e limpar a tela do terminal
	system("pause");
	system("cls");

	//Fun��o de cria��o de monstros
	inicializa_monstros(&monstros);
	//Fun��o de impress�o dos monstros
	imprime_monstros(&monstros);
}
 