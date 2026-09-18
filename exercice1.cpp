#include <iostream>
#include <random>
#include <stdio.h>

int empile(int tab[], int* nbval, int value, int capacity) {

	if (tab == NULL || nbval == NULL || *nbval < capacity) {

		return 0;
	}
}

void depile() {


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

		printf("donnez valeurs a incere dans le tableau");
		scanf_s("%d", &value);

		nbval++;

		int empile(tab[i], &nbval, capacity, value);
	}

	
	affiche(tab, nbval);


	return 0;
}