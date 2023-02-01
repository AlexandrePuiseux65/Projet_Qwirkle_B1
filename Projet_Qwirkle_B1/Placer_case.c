//
//  Placer_case.c
//  Projet_Qwirkle_B1
//
//  Created by Alexandre Puiseux on 25/01/2023.
//

#include "header.h"

JR placer_une_case (JR joueur[],PL plateau, int nb)
{
    int x, y, i, j;
    int nb_tuile;
    
    printf("\nQuelle est la case ou vous placer votre tuile : \n");
    printf("X = ");
    scanf("%d", &x);
    
    printf("\nY = ");
    scanf("%d", &y);

    
    
    do{
        printf("Quelle est la tuile que vous voulez posez ?\n");
        for(i= 0; i<6; i++)
        {
            printf("| %d %c |",joueur[nb].tuileJR[i].forme, joueur[nb].tuileJR[i].couleur);
        }
        printf("\n => ");
        scanf("%d", &nb_tuile);
    }while(nb_tuile <= 0 && nb_tuile>=7);
    
    return joueur[nb];
}
