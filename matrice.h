#ifndef MATRICE_H_INCLUDED
#define MATRICE_H_INCLUDED

#include "main.h"

void init(int matrice [][TAILLE_SUR_MATRICE ]);
int nombre_voisins (int matrice [][TAILLE_SUR_MATRICE ],int ligne, int colonne);
void mise_a_jour(int matrice[][TAILLE_SUR_MATRICE ]);

#endif // MATRICE_H_INCLUDED
