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
	PERSONAGEM personagem;
	DECK deck;
	MONSTROS *monstros;
	inicializa_deck(&deck);
	gerar_deck(&deck);
	imprime_deck(&deck);
	system("pause");
	system("cls");
	inicializa_personagem(&personagem);
	imprime_personagem(personagem);
	system("pause");
	system("cls");
	inicializa_monstros(&monstros);
	imprime_monstros(&monstros);
}
 