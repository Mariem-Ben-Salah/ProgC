/* Fichier: sizeof..c
* teste un code donné dans l enoncé et affiche et interprete le resultat
* auteur: Silia TAIDER - Mariem Ben Salah - Omar Gasri
*/

/* Bibliothèques */

#include <stdio.h>

/*---------------------------------------------------------*/

int main(){


    printf("%li\n",sizeof (int));  //affiche 4 octets car c'est la taille d'une variable de type int 
    printf("%li\n",sizeof (int *)); //affiche 8 octets car c'est un pointeur vers une variable et c'est donc une adresse 
    printf("%li\n",sizeof (int **)); //affiche 8 octets car c'est un pointeur vers un pointeur vers une variable, c'est donc quand meme une adresse et c'est sur 8 octets 
    printf("%ld\n",sizeof (char *));
    printf("%ld\n",sizeof (char **));
    printf("%ld\n",sizeof (char ***));
    printf("%ld\n",sizeof (float ));
    printf("%ld\n",sizeof (float *));
    printf("%ld\n",sizeof (float **));
    printf("%ld\n",sizeof (float ***));
    
    return 0;

}
