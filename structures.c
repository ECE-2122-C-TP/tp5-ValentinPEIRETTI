#include <stdio.h>
#include "structures.h"
#define NB_LIGNES 3
#define NB_COLONNES 4

/* Fonction qui demande à l'utilisateur de saisir un entier naturel.
* Paramètres :
* - IN : rien
* - OUT : retourne l'entier naturel selectione par l'utilisateur.
*/

NR demanderNR(void){
    NR R;
    printf("veuillez rentrer le numerateur et le denominateur :\n");
    scanf("%d %d",&R.numerateur,&R.denominateur);
    return R;
}
/* Procédure qui permet d'aficher les nombres rationneles rentrées par l'utilisateur,
 * ainsi que la multiplication et l'addition de ses deux nombres.
* Paramètres :
* - IN : les nombres rationnels séléctionnés, le produit de ses deux nombres,
 * et la somme.
* - OUT : rien
*/
void afficherNR(NR R1,NR R2, NR R3, NR R4){
    printf("Les entiers rationnels selectionnes sont %d/%d et %d/%d.\n",R3.numerateur,R3.denominateur,R4.numerateur,R4.denominateur);
    printf("La multiplication vaut : %d/%d\n",R1.numerateur,R1.denominateur);
    printf("L'addition vaut : %d/%d\n",R2.numerateur,R2.denominateur);
    return;
}
/* Fonction qui permet de multiplier deux nombres rationnels
* Paramètres :
* - IN : les deux nombres rationnels rentrés par l'utilisateur
* - OUT : le produit de ses deux nombres
*/

NR multipl(NR R1, NR R2){
    NR NRmultiplie;
    NRmultiplie.numerateur = R1.numerateur * R2.numerateur;
    NRmultiplie.denominateur = R1.denominateur * R2.denominateur;
    return NRmultiplie;
}

/* Fonction qui permet d'additionner deux nombres rationnels
* Paramètres :
* - IN : les deux nombres rationnels rentrés par l'utilisateur
* - OUT : la somme de ses deux nombres
*/

NR addition(NR R1, NR R2){
    NR NRaddition;
    NRaddition.numerateur = R1.numerateur *R2.denominateur + R2.numerateur* R1.denominateur;
    NRaddition.denominateur = R1.denominateur*R2.denominateur;
    return NRaddition;
}
