#include "../includes/personagem.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#define MAX 50

void inicializa_personagem(PERSONAGEM *personagem) {
  printf("----------Criando personagem----------\n");
  printf("Insira seu nome: ");
  scanf("%[^\n]s", &personagem->nome);
  printf("Escolha sua classe [L para Lutador / G para Guerreiro / M para Mago]: ");
  scanf("%s", &personagem->classe);
  personagem->classe[0] = toupper(personagem->classe[0]);
  while(personagem->classe[0] != 'L'  && personagem->classe[0] != 'G' && personagem->classe[0] != 'M'){
      printf("Dado invalido inserido, selecione novamente.\n");
      system("pause");
      system("cls");
      printf("Escolha sua classe [L para Lutador / G para Guerreiro / M para Mago]: ");
      scanf("%s", &personagem->classe);
  }
  switch(personagem->classe[0]){
    case 'L':
      strcpy(personagem->classe, "Lutador");
      personagem->vida = 100;
      personagem->atq = 16;
      personagem->def = 10;
      personagem->mana = 8;
    break;
    case 'G':
      strcpy(personagem->classe, "Guerreiro");
      personagem->vida = 120;
      personagem->atq = 12;
      personagem->def = 12;
      personagem->mana = 6; 
    break;
    case 'M':
      strcpy(personagem->classe, "Mago");
      personagem->vida = 80;
      personagem->atq = 8;
      personagem->def = 8;
      personagem->mana = 14;
    break;
  }
}

void imprime_personagem(PERSONAGEM personagem){
  system("cls");
  printf("----------Ficha do personagem----------\n");
  printf("Nome: %s\n", personagem.nome);
  printf("Classe: %s\n", personagem.classe);
  printf("HP: %d\n", personagem.vida);
  printf("Ataque: %d\n", personagem.atq);
  printf("Defesa: %d\n", personagem.def);
  printf("Energia: %d\n", personagem.mana);
}
