#ifndef TP5_STRUCTURES_H
#define TP5_STRUCTURES_H*
#define NB_LIGNES 3
#define NB_COLONNES 4

//Exercice 1:

typedef struct NR{
    int denominateur,
        numerateur;
}NR;

NR demanderNR(void);
void afficherNR(NR R1, NR R2, NR R3, NR R4);
NR multipl(NR R1,NR R2);
NR addition(NR R1,NR R2);

//Exercice 3:

void afficherTableau2D(int tableau[NB_LIGNES][NB_COLONNES]);
void afficherTableau1D(int tableau[NB_LIGNES][NB_COLONNES]);
#endif //TP5_STRUCTURES_H
