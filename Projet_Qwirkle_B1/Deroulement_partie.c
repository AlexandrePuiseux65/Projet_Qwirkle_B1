//
//  Deroulement_partie.c
//  Projet_Qwirkle_B1
//
//  Created by Alexandre Puiseux on 25/01/2023.
//

#include "header.h"

int deroulement_partie(PL Plato, JR* Joueur, int nb)
{
    int i = 0;
    //int end = 0;
    int aquiletour = 0;
    
    printf("\n\n\n");
    plateau(Plato, Joueur, nb);
    
    for(i= 0; i<nb; i++)
    {
        distribution_main_depart (Joueur, i, nb);
    }
        if(nb == 2 )
        {
            //do{
                printf("\n\n\t - Tour %d : %s -\n", aquiletour+1, Joueur[aquiletour].nom);
                conditionW(Joueur, aquiletour);
                placer_une_case (Joueur,Plato, aquiletour);
                plateau(Plato, Joueur, nb);
                aquiletour = rotation_joueur(nb, aquiletour);
            //}while(conditionW(Joueur, aquiletour) == true);
        }else if (nb == 3)
        {
            
        }else if (nb == 4)
        {
            
        }
    return 0;
}
