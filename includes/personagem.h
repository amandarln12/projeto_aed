#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#define MAX 50

typedef struct{
  char nome[MAX];
  char classe[MAX];
  int vida;
  int atq;
  int def;
  int mana;
} PERSONAGEM;

void inicializa_personagem(PERSONAGEM *personagem);
void imprime_personagem(PERSONAGEM personagem);

#endif