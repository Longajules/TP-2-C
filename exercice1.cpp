#include <iostream>
#include <random>
#include <stdio.h>

int empile(int *tab, int* nbval, int value, int capacity) {

	if (tab == NULL || nbval == NULL || *nbval > capacity) {

		return 0;
	}
	else(tab[(*nbval)++] = value);
}

void depile(int *tab, int* nbval, int capacity) {
	

	if (tab == NULL || nbval == NULL || nbval == 0) {

		return 0;
	}
	else(nbval = nbval - 1);
}

void affiche(int tab[], int nbval) {

	printf("il y a %d valeur\n", nbval);

	for (int i = 0;i < nbval; i++) {

		printf("valeur numero %d du tableau est : %d \n", i, tab[i]);
	}
}

int main() {

	int tab[20]; 
	int nbval = 0;
	int capacity = 0;
	int value = 0;

	for (int i = 0;i < 20;i++) {

		printf("donnez valeurs a incere dans le tableau ");
		scanf_s("%d", &value);
		
		printf("nbval faut %d\n",nbval);

		int var = empile(&tab[i], &nbval, capacity, value);

		if (var == 0) {
			printf("erreur\n");
		}
		else(printf("aucune erreur detecte\n"));
	}

	affiche(tab, nbval);

	int verif = 0;

	printf("voulez vous depile ? 1 pour oui 0 pour non");
	scanf("%d", verif);

	if (verif == 1) 
	{
		depile(tab, &nbval,capacity);
	}
	else(printf("tant pis");

	return 0;
}