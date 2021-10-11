#include <stdio.h>
#include "exercices .h"


int main() {

    int choixExercice = 0;
    printf("Quel exercice voulez-vous lancer ?\n");
    printf("(1,2 ou 3):\n");
    do{
        scanf("%d", &choixExercice);
        switch (choixExercice) {
            case 1 :
                exercice1();
                break;
            case 2 :
                exercice2();
                break;
            case 3 :
                exercice3();
                break;
            case 0 :
                break;
            default : {
                printf("Choix Invalide ! Veuillez selectionner un exercice :\n");

                break;
            }
        }
    }while (choixExercice != 0);
    return 0;
}
