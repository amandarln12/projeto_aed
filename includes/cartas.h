#ifndef CARTAS_H
#define CARTAS_H

typedef struct ataque {
  int furia;      // valor somado ao acumulador de critico
  int qtd_ataque; // quantas vezes o jogador ataca ao usar esta carta NAQUELE
                  // TURNO
  int energia_devolvida; // quanto de energia é devolvida ao jogador
  int exilar;            // 0 para empilhar, 1 para não empilhar
} ATAQUE;

typedef struct defesa {
  int revestimento; // quantos turnos o jogador ganha um escudo ao usar esta
                    // carta
  int qtd_defesa; // quantas vezes o jogador se defende ao usar esta carta
                  // NAQUELE TURNO
  int energia_devolvida; // quanto de energia é devolvida ao jogador
  int exilar;            // 0 para empilhar, 1 para não empilhar
} DEFESA;

typedef struct especial {
  int curar;
  int cavar;
  /*
      0 tira uma carta do topo da pilha
      1 reinicializa a pilha e dá uma nova mão
  */
  int energia;
  /*O valor de energia define o quanto o player ganha de energia extra pra
   * gastar naquele turno e o custo é 0*/
} ESPECIAL;

typedef struct tipo_carta {
  ATAQUE ataque;
  DEFESA defesa;
  ESPECIAL especial;
} TIPO_CARTA;

typedef struct cartas {
  char nome[50];
  TIPO_CARTA tipo;
  int custo;
} CARTAS;

typedef struct deck {
  CARTAS carta[30];
  int topo;
  int tam;
} DECK;

// Protótipos de funções
void inicializa_deck(DECK *deck);
int deck_vazio(DECK *deck);
int deck_cheio(DECK *deck);
int empilha(DECK *deck, CARTAS carta);
CARTAS desempilha(DECK *deck);
void imprime_deck(DECK *deck);
void gerar_deck(DECK *deck);
void embaralhar_deck(DECK *deck);

#endif
