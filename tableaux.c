#include "tableaux.h"
#include <stdio.h>
#define NB_LIGNES 3
#define NB_COLONNES 4

/* Procédure qui permet d'aaficher un tableau en 2D.
* Paramètres :
* - IN : le tableau contenant les valeurs à afficher
* - OUT : rien
*/

void afficherTableau2D(int tableau[NB_LIGNES][NB_COLONNES]){
    printf("\nVoici le tableau en 2D:\n");
    int i=0,
            j=0;
    for (i=0;i<NB_LIGNES;i++){
        for(j=0;j<NB_COLONNES;j++){
            printf("%d\t",tableau[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return;
}
/* Procédure qui permet d'aaficher un tableau en 1D.
* Paramètres :
* - IN : le tableau contenant les valeurs à afficher
* - OUT : rien
*/
void afficherTableau1D(int tableau[NB_LIGNES][NB_COLONNES]){
    printf("\nVoici le tableau en 1D:\n");
    int i=0,
            j=0;
    for (i=0;i<NB_LIGNES;i++) {
        for (j = 0; j < NB_COLONNES; j++)
        {
            printf("%d\t", tableau[i][j]);
        }
    }
    return;
}
