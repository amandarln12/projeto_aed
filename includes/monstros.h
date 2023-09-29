#ifndef MONSTROS_H
#define MONSTROS_H
#define MAX 50

//Definição do tipo MONSTROS como uma struct
typedef struct MONSTROS{
	char NAME[MAX];
	int HP;
	int ATTACK_DMG;
	int MAGIC_DMG;
	int DEFENSE;
}MONSTROS;

//Protótipos de função
int inicializa_monstros(MONSTROS **monstros);
void imprime_monstros(MONSTROS **monstros);

#endif