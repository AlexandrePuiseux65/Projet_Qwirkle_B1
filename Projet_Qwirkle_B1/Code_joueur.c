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

JR* distribution_case (JR*joueur, int nb)
{
    int aleaF = rand()%(6)+1;
    int aleaC = rand()%(6)+1;
    int i, j;
    
    for(i = 0; i<6; i++)
    {
        for(j =0; j<6; j++)
        {
            
        }
    }
    
    return joueur;
}
