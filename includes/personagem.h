#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#define MAX 50

//Definição do tipo PERSONAGEM como uma struct
typedef struct PERSONAGEM{
  char nome[MAX];
  char classe[MAX];
  int vida;
  int atq;
  int def;
  int mana;
} PERSONAGEM;

//Protótipos de função
void inicializa_personagem(PERSONAGEM *personagem);
void imprime_personagem(PERSONAGEM personagem);

#endif