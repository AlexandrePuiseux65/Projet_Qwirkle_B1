//
//  Code_joueur.c
//  Projet_Qwirkle_B1
//
//  Created by Alexandre Puiseux on 18/01/2023.
//

#include "header.h"

int demande_nombre_joueur()
{
    int nb;
    
    do{
        printf("\t Nombre de Joueur (2 ; 3 ; 4) = ");
        scanf ("%d",&nb);
        fflush(stdin);
        
    }while( nb <= 1 || nb >= 5 );
    
    return nb;
}

JR* nom_joueur (JR* Joueur, int nb)
{
    for(int i = 0; i<nb ; i++)
    {
        printf("Quelle est le nom du Joueur %d => ", i+1);
        scanf("%s", Joueur[i].nom);
        fflush(stdin);
    }
    
    return Joueur;
}

int rotation_joueur(int nbJR, int actuelJR)
{
    if(actuelJR < nbJR-1)
        return actuelJR + 1;
    else
        return 0;
}

void distribution_main_depart (JR Joueur[], int i, int nb)
{
    printf("\t\n- Joueur : %s -\n",Joueur[i].nom);
    printf("Voici les pieces que vous avez %s : \n", Joueur[i].nom);
    distribution_tuile (Joueur, nb);
    for(int j= 0; j<6; j++)
    {
        printf("| %d %c |",Joueur[i].tuileJR[j].forme, Joueur[i].tuileJR[j].couleur);
    }
}
