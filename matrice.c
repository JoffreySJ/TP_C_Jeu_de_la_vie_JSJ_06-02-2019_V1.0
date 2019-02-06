#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrice.h"


void init(int matrice [][TAILLE_SUR_MATRICE ]) {
   int i,j;
   srand(time(NULL));
   for(i=0; i<TAILLE_SUR_MATRICE; i++) {
      for(j=0; j<TAILLE_SUR_MATRICE; j++) {
         if (i==0 || i==TAILLE_SUR_MATRICE-1 || j==0 || j==TAILLE_SUR_MATRICE-1)
            matrice[i][j]=0;
         else
            matrice[i][j]=rand()%2;
      }
   }
}



int nombre_voisins (int matrice[][TAILLE_SUR_MATRICE ],int ligne, int colonne) {
   int compte=0; /* compteur de cellules */
   int i,j;
/* On additionne les 9 cellules */
   for (i=ligne-1;i<=ligne+1;i++)
      for(j=colonne-1;j<=colonne+1;j++)
         compte=compte+matrice[i][j];

         /* On retire la cellule centrale */
         compte -= matrice[ligne][colonne];
         return compte;
}



void mise_a_jour(int matrice[ ][TAILLE_SUR_MATRICE ]) { //Mise a jour
   int i,j;
   int nbr_voisins;
   int matrice_densite[TAILLE_SOUS_MATRICE][TAILLE_SOUS_MATRICE];
   /* La matrice comptabilise les cellules voisines */
   for(i=0; i< TAILLE_SOUS_MATRICE; i++)
         for(j=0; j< TAILLE_SOUS_MATRICE; j++)
            matrice_densite[i][j]=nombre_voisins(matrice,i+1,j+1);

   for(i=0; i< TAILLE_SOUS_MATRICE; i++)
      for(j=0; j< TAILLE_SOUS_MATRICE; j++) {
            nbr_voisins=matrice_densite[i][j];
            if(nbr_voisins==3)
                  matrice[i+1][j+1]=1;
            else if (nbr_voisins<2 || nbr_voisins>3)
                  matrice[i+1][j+1]=0;
   }
}
