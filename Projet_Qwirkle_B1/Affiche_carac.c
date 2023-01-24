//
//  Affiche_carac.c
//  Projet_Qwirkle_B1
//
//  Created by Alexandre Puiseux on 18/01/2023.
//

#include "header.h"

void DessineSymbole(char symbole, int nombre)
{
    for( int i=0 ; i<nombre ; ++i )
    {
        printf("%c",symbole);
    }
}

void tirrage_piece (JR* Joueur, int nb)
{
    /*
    srand(time(NULL));
    
    int alea = rand()%(36)+1;
    
    for(int i = 0; i<nb; i++)
    {
        
    }
     */
}

