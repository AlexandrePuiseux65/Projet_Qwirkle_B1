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
    JR Joueur [MAX_NOMBRE];
    PL* Plato;
    
    srand(time(NULL));
    
    affiche_qwirkle();
    printf("\n\n\n");

   fin = 0;
   while(!fin)
   {
      int c;

      /* affichage menu */
       printf("1.Choix 1 : Lancer une partie Degrader\n");
       printf("2.Choix 2 : Test du Chargement\n");
       printf("3.Choix 3 : Regle du Jeux\n");
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
              Chargement();
            break;
         case '3':
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
