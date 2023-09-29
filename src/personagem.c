#include "../includes/personagem.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>

//Definição da função de criação de personagem tendo como parâmetro o ponteiro personagem de tipo PERSONAGEM
void inicializa_personagem(PERSONAGEM *personagem) {
  printf("----------Criação personagem----------\n");
  printf("Insira seu nome: ");
  scanf("%[^\n]s", &personagem->nome);
  printf("Escolha sua classe [L para Lutador / G para Guerreiro / M para Mago]: ");
  scanf("%s", &personagem->classe);
  personagem->classe[0] = toupper(personagem->classe[0]);

  //Loop para casos onde o dado inserido não corresponda a uma das opções pré-definidas
  while(strcmp(personagem->classe, "L") != 0 && strcmp(personagem->classe, "G") != 0 && strcmp(personagem->classe, "M") != 0){
      printf("Dado inválido inserido, selecione a classe novamente.\n");
      system("pause");
      system("cls");
      printf("Escolha sua classe [L para Lutador / G para Guerreiro / M para Mago]: ");
      scanf("%s", &personagem->classe);
      personagem->classe[0] = toupper(personagem->classe[0]);
  }

  //Switch para definição de status com base na classe escolhida
  switch(personagem->classe[0]){
    //Definição de status da classe Lutador
    case 'L':
      strcpy(personagem->classe, "Lutador");
      personagem->vida = 100;
      personagem->atq = 16;
      personagem->def = 10;
      personagem->mana = 8;
    break;
    //Definição de status da classe Guerreiro
    case 'G':
      strcpy(personagem->classe, "Guerreiro");
      personagem->vida = 120;
      personagem->atq = 12;
      personagem->def = 12;
      personagem->mana = 6; 
    break;
    //Definição de status da classe Mago
    case 'M':
      strcpy(personagem->classe, "Mago");
      personagem->vida = 80;
      personagem->atq = 8;
      personagem->def = 8;
      personagem->mana = 14;
    break;
  }
}

//Definição da função de impressão de personagem tento como parâmetro a variável personagem do tipo PERSONAGEM
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
