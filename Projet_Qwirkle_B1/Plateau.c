//
//  Plateau.c
//  Projet_Qwirkle_B1
//
//  Created by Alexandre Puiseux on 18/01/2023.
//

#include "header.h"

void plateau (PL Plateau, JR Joueur[], int nb)
{
    int i = 0;
    int j = 0;
    
    printf("\t\t A\tB \tC \tD \tE \tF \tG \tH \tI \tJ \tK \tL \tM \tN \tO \tP \tQ \tR \tS \tT \tU \tV \tW \tX \tY \tZ\n\n");
    for (i = 0; i<MAX_X; i++)
    {
        printf("\t%d", i+1);
        for (j = 0; j<MAX_Y; j++)
        {
            printf("\t %c ", Plateau.plateau[MAX_X][MAX_Y]);
        }
        printf("\n\n");
    }

}


void initialisation_des_tuiles (TUL* tuile)
{
    // Tuile Rouge
    tuile[0].forme = CIRCLE ;
    tuile[0].couleur = RED ;
    
    tuile[1].forme = HEART;
    tuile[1].couleur = RED;
    
    tuile[2].forme = DIAMOND;
    tuile[2].couleur = RED;
    
    tuile[3].forme = SQUARE;
    tuile[3].couleur = RED;
    
    tuile[4].forme = SPIKE;
    tuile[4].couleur = RED;
    
    tuile[5].forme = CLOVER;
    tuile[5].couleur = RED;
    
    //Tuile Orange
    tuile[6].forme = CIRCLE;
    tuile[6].couleur = ORANGE;
    
    tuile[7].forme = HEART;
    tuile[7].couleur = ORANGE;
    
    tuile[8].forme = DIAMOND;
    tuile[8].couleur = ORANGE;
    
    tuile[9].forme = SQUARE;
    tuile[9].couleur = ORANGE;
    
    tuile[10].forme = SPIKE;
    tuile[10].couleur = ORANGE;
    
    tuile[11].forme = CLOVER;
    tuile[11].couleur = ORANGE;
    
    //YELLOW
    tuile[12].forme = CIRCLE;
    tuile[12].couleur = YELLOW;
    
    tuile[13].forme = HEART;
    tuile[13].couleur = YELLOW;
    
    tuile[14].forme = DIAMOND;
    tuile[14].couleur = YELLOW;
    
    tuile[15].forme = SQUARE;
    tuile[15].couleur = YELLOW;
    
    tuile[16].forme = SPIKE;
    tuile[16].couleur = YELLOW;
    
    tuile[17].forme = CLOVER;
    tuile[17].couleur = YELLOW;
    
    //GREEN
    tuile[18].forme = CIRCLE;
    tuile[18].couleur = GREEN;
    
    tuile[19].forme = HEART;
    tuile[19].couleur = GREEN;
    
    tuile[20].forme = DIAMOND;
    tuile[20].couleur = GREEN;
    
    tuile[21].forme = SQUARE;
    tuile[21].couleur = GREEN;
    
    tuile[22].forme = SPIKE;
    tuile[22].couleur = GREEN;
    
    tuile[23].forme = CLOVER;
    tuile[23].couleur = GREEN;
    
    //BLUE
    tuile[24].forme = CIRCLE;
    tuile[24].couleur = BLUE;
    
    tuile[25].forme = HEART;
    tuile[25].couleur = BLUE;
    
    tuile[26].forme = DIAMOND;
    tuile[26].couleur = BLUE;
    
    tuile[27].forme = SQUARE;
    tuile[27].couleur = BLUE;
    
    tuile[28].forme = SPIKE;
    tuile[28].couleur = BLUE;
    
    tuile[29].forme = CLOVER;
    tuile[29].couleur = BLUE;
    
    //PURPLE
    tuile[30].forme = CIRCLE;
    tuile[30].couleur = PURPLE ;
    
    tuile[31].forme = HEART;
    tuile[31].couleur = PURPLE ;
    
    tuile[32].forme = DIAMOND;
    tuile[32].couleur = PURPLE ;
    
    tuile[33].forme = SQUARE;
    tuile[33].couleur = PURPLE ;
    
    tuile[34].forme = SPIKE;
    tuile[34].couleur = PURPLE ;
    
    tuile[35].forme = CLOVER;
    tuile[35].couleur = PURPLE ;
}

void melange (TUL* tuile)
{
    srand(time(NULL));
    TUL tmp [36];
    int alea =  rand() % (36) + 1;
    
    for(int i = 0; i<36; i++)
    {
        tmp[i] = tuile[i];
        tuile[i] = tuile[alea];
        tuile[alea] = tmp[i];
    }
}

void distribution_tuile (JR*joueur, int nb)
{
    TUL tuile[36];
    int alea =  rand() % (35) + 1 ;
    
    initialisation_des_tuiles (tuile);
    
    for(int j = 0; j<nb; j++ )
    {
        for(int i = 0; i<6; i++)
        {
            melange (tuile);
            joueur[j].tuileJR[i] = tuile[alea];
            
        }
    }
}

void pioche(JR*joueur, int nb, int manque)
{
    TUL tuile[36];
    int alea =  rand() % (36) + 1 ;
    
    melange (tuile);
    joueur[nb].tuileJR[manque] = tuile[alea];
    tuile[alea].forme = -1;
}
