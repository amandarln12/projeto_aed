#include "../includes/monstros.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MONSTER_TOTAL 5

//Definição da função de criação de monstros tendo como parâmetro o ponteiro de ponteiro monstros de tipo MONSTROS
int inicializa_monstros(MONSTROS **monstros){

    //Loop para aloação de memória dos 5 monstros a serem criados
    for(int i = 0; i<MONSTER_TOTAL;i++){
        monstros[i] = (MONSTROS*) malloc(sizeof(MONSTROS));

        //If para checar se foi possivel alocar a memória
        if(monstros[i] == NULL){ printf("Erro\n");
        return 0;
        }
    }

    //Loop para criação dos monstros
    for(int i = 0; i < MONSTER_TOTAL; i++){
        if(i == 0){
            strcpy(monstros[i]->NAME, "Elementar");
            monstros[i]->HP = 20;
            monstros[i]->ATTACK_DMG = 3;
            monstros[i]->MAGIC_DMG = 10;
            monstros[i]->DEFENSE = 5;
        }
        if(i == 1){
            strcpy(monstros[i]->NAME, "Renegado");
            monstros[i]->HP = 25;
            monstros[i]->ATTACK_DMG = 15;
            monstros[i]->MAGIC_DMG = 5;
            monstros[i]->DEFENSE = 10;
        }
        if(i == 2){
            strcpy(monstros[i]->NAME, "Sacerdotisa");
            monstros[i]->HP = 15;
            monstros[i]->ATTACK_DMG = 5;
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

//Definição da função de impressão de monstros tendo como parâmetro o ponteiro de ponteiro monstros do tipo MONSTROS
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