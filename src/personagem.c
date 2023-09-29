#include "../includes/personagem.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>

//Defini��o da fun��o de cria��o de personagem tendo como par�metro o ponteiro personagem de tipo PERSONAGEM
void inicializa_personagem(PERSONAGEM *personagem) {
  printf("----------Cria��o personagem----------\n");
  printf("Insira seu nome: ");
  scanf("%[^\n]s", &personagem->nome);
  printf("Escolha sua classe [L para Lutador / G para Guerreiro / M para Mago]: ");
  scanf("%s", &personagem->classe);
  personagem->classe[0] = toupper(personagem->classe[0]);

  //Loop para casos onde o dado inserido n�o corresponda a uma das op��es pr�-definidas
  while(strcmp(personagem->classe, "L") != 0 && strcmp(personagem->classe, "G") != 0 && strcmp(personagem->classe, "M") != 0){
      printf("Dado inv�lido inserido, selecione a classe novamente.\n");
      system("pause");
      system("cls");
      printf("Escolha sua classe [L para Lutador / G para Guerreiro / M para Mago]: ");
      scanf("%s", &personagem->classe);
      personagem->classe[0] = toupper(personagem->classe[0]);
  }

  //Switch para defini��o de status com base na classe escolhida
  switch(personagem->classe[0]){
    //Defini��o de status da classe Lutador
    case 'L':
      strcpy(personagem->classe, "Lutador");
      personagem->vida = 100;
      personagem->atq = 16;
      personagem->def = 10;
      personagem->mana = 8;
    break;
    //Defini��o de status da classe Guerreiro
    case 'G':
      strcpy(personagem->classe, "Guerreiro");
      personagem->vida = 120;
      personagem->atq = 12;
      personagem->def = 12;
      personagem->mana = 6; 
    break;
    //Defini��o de status da classe Mago
    case 'M':
      strcpy(personagem->classe, "Mago");
      personagem->vida = 80;
      personagem->atq = 8;
      personagem->def = 8;
      personagem->mana = 14;
    break;
  }
}

//Defini��o da fun��o de impress�o de personagem tento como par�metro a vari�vel personagem do tipo PERSONAGEM
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
