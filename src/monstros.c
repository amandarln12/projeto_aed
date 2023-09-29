#include "../includes/monstros.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#define MONSTER_TOTAL 5

int inicializa_monstros(MONSTROS **monstros){
    for(int i = 0; i<MONSTER_TOTAL;i++){
        monstros[i] = (MONSTROS*) malloc(sizeof(MONSTROS) * MONSTER_TOTAL);
        if(monstros[i] == NULL){ printf("Erro\n");
        return 0;
        }
    }
    for(int i = 0; i < MONSTER_TOTAL; i++){
        if(i == 0){
            strcpy(monstros[i]->NAME, "Elementar");
            monstros[i]->HP = 20;
            monstros[i]->ATTACK_DMG = 0;
            monstros[i]->MAGIC_DMG = 15;
            monstros[i]->DEFENSE = 7;
        }
        if(i == 1){
            strcpy(monstros[i]->NAME, "Renegado");
            monstros[i]->HP = 25;
            monstros[i]->ATTACK_DMG = 20;
            monstros[i]->MAGIC_DMG = 0;
            monstros[i]->DEFENSE = 10;
        }
        if(i == 2){
            strcpy(monstros[i]->NAME, "Sacerdotisa");
            monstros[i]->HP = 15;
            monstros[i]->ATTACK_DMG = 0;
            monstros[i]->MAGIC_DMG = 20;
            monstros[i]->DEFENSE = 5;
        }        
        if(i == 3){
            strcpy(monstros[i]->NAME, "Samurai");
            monstros[i]->HP = 35;
            monstros[i]->ATTACK_DMG = 25;
            monstros[i]->MAGIC_DMG = 15;
            monstros[i]->DEFENSE = 15;
        }
        if(i == 4){
            strcpy(monstros[i]->NAME, "Shogun");
            monstros[i]->HP = 60;
            monstros[i]->ATTACK_DMG = 35;
            monstros[i]->MAGIC_DMG = 25;
            monstros[i]->DEFENSE = 20;
        }
    }
    return 1;
}

void imprime_monstros(MONSTROS **monstros){
    printf("----------Monstros----------");
    for(int i = 0; i < MONSTER_TOTAL; i++){
        printf("\nMonstro %d\n", i+1);
        printf("Nome do monstro: %s\n", monstros[i]->NAME);
        printf("HP: %d\n", monstros[i]->HP);
        printf("Dano Fisico: %d\n", monstros[i]->ATTACK_DMG);
        printf("Dano Magico: %d\n", monstros[i]->MAGIC_DMG);
        printf("Defesa: %d\n", monstros[i]->DEFENSE);
    }
}