//
//  main.c
//  Projet_Qwirkle_B1
//
//  Created by Alexandre Puiseux on 18/01/2023.
//

#include "header.h"

int main(int argc, const char * argv[])
{
    int fin;
    int nb;
    int i = 1;
    JR Joueur [MAX_NOMBRE];
    PL Plato;
    TUL* tuile;
    
    affiche_qwirkle();
    printf("\n\n\n");

   fin = 0;
   while(!fin)
   {
      int c;

      /* affichage menu */
       printf("\n1.Choix 1 : Lancer une partie Degrader\n");
       printf("2.Choix 2 : Test Placement d une tuile  \n");
       printf("3.Choix 3 : Regle du jeux \n");
       printf("4.Quitter \n");

      c = getchar();

      /* Suppression des caracteres dans stdin */
      if(c != '\n' && c != EOF)
      {
         int d;
         while((d = getchar()) != '\n' && d != EOF);
      }

      switch(c)
      {
         case '1':
              nb = demande_nombre_joueur();
              nom_joueur(Joueur, nb);
              Chargement();
              deroulement_partie(Plato, Joueur, nb);
            break;
         case '2':
              plateau(Plato, Joueur, nb);
            break;
         case '3':
              Chargement();
              regle();
            break;
         case '4':
            fin = 1;
            break;
         default:
            printf("Choix errone\n");
      }
   }

   return 0;
}
