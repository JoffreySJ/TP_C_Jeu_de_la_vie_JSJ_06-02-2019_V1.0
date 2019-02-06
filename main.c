#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main( ) { /*Initialisation */
   int i;
   int nbr_cycles;
   int matrice[TAILLE_SUR_MATRICE][TAILLE_SUR_MATRICE];
   char s[2];
   printf("Nombre de cycles : ");
   scanf("%i",&nbr_cycles);
   system("cls");
   init(matrice);
   printf("La population au depart : \n");
   affiche_matrice(matrice);
   ecriture_fichier(matrice, 0);
   printf("Pressez sur ENTER pour continuer...\n");
   fflush(stdin);
   gets(s);
   for(i=0; i<nbr_cycles; i++) {
      system("cls");
      mise_a_jour (matrice);
      printf("La population apres %d cycles: \n", i+1);
      affiche_matrice (matrice);
      ecriture_fichier(matrice, i+1);
      printf("Pressez sur ENTER pour continuer...\n");
      gets(s);
   }
   return 0;
}
