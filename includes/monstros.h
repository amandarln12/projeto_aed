#ifndef MONSTROS_H
#define MONSTROS_H

#define MAX 50

typedef struct monstros{
	char NAME[MAX];
	int HP;
	int ATTACK_DMG;
	int MAGIC_DMG;
	int DEFENSE;
}MONSTROS;

int inicializa_monstros(MONSTROS **monstros);
void imprime_monstros(MONSTROS **monstros);

#endif