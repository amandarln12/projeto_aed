#include "../includes/cartas.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializa_deck(DECK *deck){
    deck->topo = -1;
    deck->tam = 0;
}

int deck_vazio(DECK *deck){
    if(deck->topo == -1){
        return 1;
    } else {
        return 0;
    }
}

int deck_cheio(DECK *deck){
    if(deck->topo == 29){
        return 1;
    } else {
        return 0;
    }
}

int empilha(DECK *deck, CARTAS carta){
    if(deck_cheio(deck)){
        return 0;
    } else {
        deck->carta[++deck->topo] = carta;
        deck->tam++;
        return 1;
    }
}

CARTAS desempilha(DECK *deck){
    CARTAS carta = deck->carta[deck->topo--];
    deck->tam--;
    return carta;
}

void imprime_deck(DECK *deck){
    int i;
    for(i = 0; i <= deck->topo; i++){
        printf("%s\n", deck->carta[i].nome);
    }
}

void gerar_deck(DECK *deck){
    for (int i = 0; i < 5; i++) {
        CARTAS atq_comum;
        atq_comum.tipo.ataque.furia = 0;
        atq_comum.tipo.ataque.qtd_ataque = 1;
        atq_comum.tipo.ataque.energia_devolvida = 0;
        atq_comum.tipo.ataque.exilar = 0;
        atq_comum.custo = 1;
        snprintf(atq_comum.nome, sizeof(atq_comum.nome), "Ataque Comum %d", i + 1);
        empilha(deck, atq_comum);
    }
    for (int i = 0; i < 3; i++) {
        CARTAS atq_furia;
        atq_furia.tipo.ataque.furia = 1;
        atq_furia.tipo.ataque.qtd_ataque = 1;
        atq_furia.tipo.ataque.energia_devolvida = 0;
        atq_furia.tipo.ataque.exilar = 0;
        atq_furia.custo = 2;
        snprintf(atq_furia.nome, sizeof(atq_furia.nome), "Ataque Furia %d", i + 1);
        empilha(deck, atq_furia);
    }
    CARTAS atq_energia;
    atq_energia.tipo.ataque.furia = 0;
    atq_energia.tipo.ataque.qtd_ataque = 1;
    atq_energia.tipo.ataque.energia_devolvida = 1;
    atq_energia.tipo.ataque.exilar = 0;
    atq_energia.custo = 1;
    snprintf(atq_energia.nome, sizeof(atq_energia.nome), "Ataque Energia 1");
    empilha(deck, atq_energia);

    CARTAS atq_2vezes;
    atq_2vezes.tipo.ataque.furia = 0;
    atq_2vezes.tipo.ataque.qtd_ataque = 2;
    atq_2vezes.tipo.ataque.energia_devolvida = 0;
    atq_2vezes.tipo.ataque.exilar = 0;
    atq_2vezes.custo = 1;
    snprintf(atq_2vezes.nome, sizeof(atq_2vezes.nome), "Ataque X2 1");
    empilha(deck, atq_2vezes);

    //DEFESA

    for (int i = 0; i < 5; i++) {
        CARTAS def_comum;
        def_comum.tipo.defesa.revestimento = 0;
        def_comum.tipo.defesa.qtd_defesa = 1;
        def_comum.tipo.defesa.energia_devolvida = 0;
        def_comum.tipo.defesa.exilar = 0;
        snprintf(def_comum.nome, sizeof(def_comum.nome), "Defesa Comum %d", i + 1);
        def_comum.custo = 1;
        empilha(deck, def_comum);
    }

// Criação de 3 cartas de defesa com revestimento
    for (int i = 0; i < 3; i++) {
        CARTAS def_revestir;
        def_revestir.tipo.defesa.revestimento = 2; // Exemplo: revestimento dura por 2 turnos
        def_revestir.tipo.defesa.qtd_defesa = 1;
        def_revestir.tipo.defesa.energia_devolvida = 0;
        def_revestir.tipo.defesa.exilar = 0;
        snprintf(def_revestir.nome, sizeof(def_revestir.nome), "Defesa com Revestimento %d", i + 1);
        def_revestir.custo = 2;
        empilha(deck, def_revestir);
    }

// Criação de 1 carta de defesa com energia
    CARTAS def_energia;
    def_energia.tipo.defesa.revestimento = 0;
    def_energia.tipo.defesa.qtd_defesa = 1;
    def_energia.tipo.defesa.energia_devolvida = 1;
    def_energia.tipo.defesa.exilar = 0;
    snprintf(def_energia.nome, sizeof(def_energia.nome), "Defesa com Energia");
    def_energia.custo = 1;
    empilha(deck, def_energia);

    // Criação de 1 carta de defesa vezes 2
    CARTAS def_2vezes;
    def_2vezes.tipo.defesa.revestimento = 0;
    def_2vezes.tipo.defesa.qtd_defesa = 2; // Defesa dobrada
    def_2vezes.tipo.defesa.energia_devolvida = 0;
    def_2vezes.tipo.defesa.exilar = 0;
    snprintf(def_2vezes.nome, sizeof(def_2vezes.nome), "Defesa Vezes 2");
    def_2vezes.custo = 1;
    empilha(deck, def_2vezes);

    for (int i = 0; i < 4; i++) {
    CARTAS esp_cura;
    esp_cura.tipo.especial.curar = 10; // Valor de cura (ajuste conforme necessário)
    esp_cura.tipo.especial.cavar = 0;
    esp_cura.tipo.especial.energia = 0;
    snprintf(esp_cura.nome, sizeof(esp_cura.nome), "Cura Especial %d", i + 1);
    esp_cura.custo = 5; // Custo de energia (ajuste conforme necessário)
    empilha(deck, esp_cura);
}

    // Criação de 3 cartas especiais de cavar
    for (int i = 0; i < 2; i++) {
        CARTAS esp_cavar;
        esp_cavar.tipo.especial.curar = 0;
        esp_cavar.tipo.especial.cavar = 0; // Retire apenas mais uma carta do topo
        esp_cavar.tipo.especial.energia = 0;
        snprintf(esp_cavar.nome, sizeof(esp_cavar.nome), "Cavar %d", i + 1);
        esp_cavar.custo = 2; // Custo de energia (ajuste conforme necessário)
        empilha(deck, esp_cavar);
    }

    CARTAS esp_cavar;
    esp_cavar.tipo.especial.curar = 0;
    esp_cavar.tipo.especial.cavar = 1; // Reinicia a pilha toda, embaralha
    esp_cavar.tipo.especial.energia = 0;
    snprintf(esp_cavar.nome, sizeof(esp_cavar.nome), "Embaralhar");
    esp_cavar.custo = 3; // Custo de energia (ajuste conforme necessário)
    empilha(deck, esp_cavar);

    // Criação de 3 cartas especiais que dão energia ao jogador
    for (int i = 0; i < 3; i++) {
        CARTAS esp_energia;
        esp_energia.tipo.especial.curar = 0;
        esp_energia.tipo.especial.cavar = 0;
        esp_energia.tipo.especial.energia = 1; // Valor de energia que a carta fornece (ajuste conforme necessário)
        snprintf(esp_energia.nome, sizeof(esp_energia.nome), "Energia Especial %d", i + 1);
        esp_energia.custo = 0; // Custo de energia (ajuste conforme necessário)
        empilha(deck, esp_energia);
    }

    embaralhar_deck(deck);
}

void embaralhar_deck(DECK *deck) {
    srand(time(NULL));
    for (int i = 29; i > 0; i--) {
        int j = rand() % (i + 1);
        CARTAS temp = deck->carta[i];
        deck->carta[i] = deck->carta[j];
        deck->carta[j] = temp;
    }
}