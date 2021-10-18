#include <stdio.h>
#include "exercices .h"
#include "structures.h"
#include "tableaux.h"
#define NB_LIGNES 3
#define NB_COLONNES 4
#define TABLEAU_MAX 100


void exercice1(){
     NR R1,R2,mult,add;
     printf("Premier entier naturel, ");  // Demande premier entier naturel.
     R1 = demanderNR();
     printf("Deuxieme entier naturel, "); // Demande deuxieme entier naturel.
     R2 = demanderNR();
     mult = multipl(R1,R2);               // Appel des fonctions multipl et addition
     add = addition(R1,R2);
     afficherNR(mult, add, R1, R2);
    return;
}


void exercice2(){
  int tableau[TABLEAU_MAX]={0},
      n = 0,
      i =0,
      x=0;
  printf("Combien de valeurs voulez vous rentrer ?\n(Pas plus de 100 valeurs)\n");
  scanf("%d",&n);
  while(n>TABLEAU_MAX){ // Pour s'assurer que le tableau ne depasse pas 100 valeurs
        printf("ERREUR\n");
        printf("Combien de valeurs voulez vous rentrer ?\n(Pas plus de 100 valeurs)\n");
        scanf("%d",&n);
  }
  printf("Veuillez rentrer les valeurs du tableau souhaitees:\n"); // Mettre la demande avant le for pour éviter qu'elle ne soit répétée a chque saisie
  for (i=0;i<n; i++) {
      scanf("%d",&tableau[i]);
      if (tableau[i]>x){
          x=tableau[i];
      }
  }
  printf("La plus grande valeur du tableau est : %d\n",x);
  printf("%d",tableau);
  return;
}

void exercice3(){
    int tableau[NB_LIGNES][NB_COLONNES]={{0}}, //initialisation du tableau
            i=0,
            j=0;
    for (i=0;i<NB_LIGNES;i++){
        for(j=0;j<NB_COLONNES;j++){
            printf("Veuillez rentrer la valeur de la case de la ligne %d et de la colonne %d\n",i+1,j+1);
            scanf("%d", &tableau[i][j]);
        }
    }
    afficherTableau2D(tableau); // Afficher le premier tableau
    afficherTableau1D(tableau); // Afficher le deuxieme tableau
    return;
}
