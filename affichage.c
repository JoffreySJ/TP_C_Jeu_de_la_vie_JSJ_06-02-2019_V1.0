#include <stdio.h>
#include <stdlib.h>
#include "affichage.h"

void affiche_matrice(int matrice[ ][TAILLE_SUR_MATRICE ]) {
   int i,j;
   for(i=1; i<=TAILLE_SOUS_MATRICE; i++) {
      ligne(TAILLE_SOUS_MATRICE);
      for(j=1; j<=TAILLE_SOUS_MATRICE; j++)
         if (matrice[i][j]==1)
            printf("|%c",'0');
         else
            printf("|%c",' ');
      printf("|\n");
   }
   ligne(TAILLE_SOUS_MATRICE);
}



void ligne(int largeur) {
   int i;
   for(i=0; i<largeur; i++)
      printf("+-");
   printf("+\n");
}
