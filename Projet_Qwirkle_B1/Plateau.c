//
//  Plateau.c
//  Projet_Qwirkle_B1
//
//  Created by Alexandre Puiseux on 18/01/2023.
//

#include "header.h"

void plateau (PL* Plateau, JR* Joueur, int nb)
{
    printf("\t A\tB\tC\tD\tE\tF\tG\tH\tI\tJ\tK\tL\tM\tN\tO\tP\tQ\tR\tS\tT\tU\tV\tW\tX\tY\tZ\n");
    for (int i = 0; i<12; i++)
    {
        printf("\t%d\n\n", i+1);
    }
}

void placement_pion (PL Plato, JR* Joueur, int nb, int alea, int tour)
{
    alea = rand()%(36)+1;
    
    printf("Entrez les coordonnees de la piece souhaiter: \n");
    printf("x = ");
    scanf("%d", &Plato.x );
    printf("y = ");
    scanf("%d", &Plato.y);
    /*
     Vérifie que le joueur a la case
     */
    /*  Cas 1 : Case pas prise et liens avec la suivante
        Cas 2 : Case pas prise/ ou non, et de lien avec la suivante
        Cas 3 : Case pas bonne et pas de liens
     */
}

int deroulement_partie(PL* Plato, JR* Joueur, int nb)
{
    int i = 0;
    printf("\n\n\n");
    plateau(Plato, Joueur, nb);
    /* affichage menu */
    printf("\t- Joueur : %s -\n",Joueur[i].nom);
    printf("Voici les pieces que vous avez : \n");
    printf("Quelle piece vous voulez placer : \n\n");
    
    
    
    return 0;
}
