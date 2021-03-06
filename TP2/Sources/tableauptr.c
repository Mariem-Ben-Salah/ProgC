/* Fichier: tableauptr.c
* Le programme crée et remplit avec des valeurs aléatoires deux tableaux différents : int et float. 
Pour les deux tableaux, si l'indice est divisible par 2, on multiplie la valeur à cette position par 3.
* auteur: Silia TAIDER - Mariem Ben Salah - Omar Gasri
*/

/* Bibliothèques */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*---------------------------------------------------------*/

int main () {

	int n = 10; //indice du tableau int
	int f = 11; //indice du tableau float
	int c = 0; //variable qui s'incrementera avec les indices du tableau

	int int_tab [n]; //on cree un tableau de int
	float tab [f]; //on cree un tableau de float

	float *p = NULL; //on initialise un pointeur qui pointe vers NULL pour ne pas prendre le risque de pointer vers un espace aléatoire de la mémoire

	printf("Initialisation du tableau de int : \n");

	/* METHODE: initialisaiton avec rand  */
	  

	for (p=int_tab; p<int_tab + n; p++){

		*p = rand(); //on parcourt le tableau et remplit ses elements avec des entiers aleatoires entre 0 et RAND_MAX

		if (c%2==0){ //si l'indice de la case est paire on multiplie son contenu par 3

			*p = *p * 3;

		}

		c++; //on incremente de 1 la variable d'indice

	}
	  
	  
	c = 0; //on remet c a 0 

	for (p=int_tab; p<int_tab + n; p++){ //on affiche les valeurs du tableau 

		if (c%2==0){ //si l'indice de la case est paire on affiche la phrase qui suit

		printf("Case %i (valeur x3): %f\n", c, *p);
		}

		else{
		printf("Case %d: %f\n", c, *p);
		}

		c++; //on incremente c de 1
	}

	//////////////////////////////////////

	printf("\nInitialisation du tableau de float : \n"); //on refait de meme pour le tableau des float
	c = 0; //on remet c a 0 

	for (p=tab; p<tab + f; p++){

		*p = (float)rand()/RAND_MAX; 

		if (c%2==0){

			*p = *p * 3;
		}

		c++;

	}

	c = 0; //on remet c a 0

	for (p=tab; p<tab + f; p++){ //on affiche les valeurs du tableau 

		if (c%2==0){ //si l'indice de la case est paire on affiche la phrase qui suit

			printf("Case %i (valeur x3): %f\n", c, *p);
		}

		else{
			printf("Case %d: %f\n", c, *p);
		}

		c++; //on incremente c de 1
	}


	return 0;
}
