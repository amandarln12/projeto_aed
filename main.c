#include <stdio.h>
#include <stdlib.h>
#include "./includes/cartas.h"

int main(){
    
   DECK deck;
   inicializa_deck(&deck);
   gerar_deck(&deck);
   imprime_deck(&deck);
}