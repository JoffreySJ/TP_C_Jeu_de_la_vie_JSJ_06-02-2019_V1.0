#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"

void ecriture_fichier(int matrice[ ][TAILLE_SUR_MATRICE ], int cycle) {
   int i,j,compteur_vie=0,compteur_mort=0;
   for(i=1; i<=TAILLE_SOUS_MATRICE; i++) {
      for(j=1; j<=TAILLE_SOUS_MATRICE; j++)
         if (matrice[i][j]==1)
            compteur_vie++;
   }
   compteur_mort = (TAILLE_SOUS_MATRICE*TAILLE_SOUS_MATRICE)-compteur_vie;

    FILE* fichier = NULL;
    if(cycle==0){
        fichier = fopen("Jeu_vie.txt", "w"); /* Creation du fichier */
    }else{
        fichier = fopen("Jeu_vie.txt", "a"); /* On place les resultats a la suite */

    }
    fprintf(fichier, "\nLa population apres %d cycles\nCellules vivantes : %d\nCellules mortes : %d\n",cycle,compteur_vie,compteur_mort);
    fclose(fichier);
}
