//
//  ASCII_dessin.c
//  Projet_Qwirkle_B1
//
//  Created by Alexandre Puiseux on 18/01/2023.
//

#include "header.h"
  
void Chargement(void)
{
    printf("\n\n\t\t\t\t\t - ");
    for (int i = 0; i <2; i++)
    {
        sleep(1);
        printf("######################################################");
    }
    printf(" - \n\n");
}

void affiche_qwirkle (void)
{
    printf(" .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------. \n");
    printf("| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n");
    printf("| |    ___       | || | _____  _____ | || |     _____    | || |  _______     | || |  ___  ____   | || |   _____      | || |  _________   | |\n");
    printf("| |  .'   '.     | || ||_   _||_   _|| || |    |_   _|   | || | |_   __ \\    | || | |_  ||_  _|  | || |  |_   _|     | || | |_   ___  |  | |\n");
    printf("| | /  .-.  \\    | || |  | | /\\ | |  | || |      | |     | || |   | |__) |   | || |   | |_/ /    | || |    | |       | || |   | |_  \\_|  | |\n");
    printf("| | | |   | |    | || |  | |/  \\| |  | || |      | |     | || |   |  __ /    | || |   |  __'.    | || |    | |   _   | || |   |  _|  _   | |\n");
    printf("| | \\  `-'  \\_   | || |  |   /\\   |  | || |     _| |_    | || |  _| |  \\ \\_  | || |  _| |  \\ \\_  | || |   _| |__/ |  | || |  _| |___/ |  | |\n");
    printf("| |  `.___.\\__|  | || |  |__/  \\__|  | || |    |_____|   | || | |____| |___| | || | |____||____| | || |  |________|  | || | |_________|  | |\n");
    printf("| |              | || |              | || |              | || |              | || |              | || |              | || |              | |\n");
    printf("| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n");
    printf(" '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------' \n");
    
}

void win ()
{
    printf(" .----------------.  .----------------.  .-----------------.\n");
    printf("| .--------------. || .--------------. || .--------------. |\n");
    printf("| | _____  _____ | || |     _____    | || | ____  _____  | |\n");
    printf("| ||_   _||_   _|| || |    |_   _|   | || ||_   \\|_   _| | |\n");
    printf("| |  | | /\\ | |  | || |      | |     | || |  |   \\ | |   | |\n");
    printf("| |  | |/  \\| |  | || |      | |     | || |  | |\\ \\| |   | |\n");
    printf("| |  |   /\\   |  | || |     _| |_    | || | _| |_\\   |_  | |\n");
    printf("| |  |__/  \\__|  | || |    |_____|   | || ||_____|\\____| | |\n");
    printf("| |              | || |              | || |              | |\n");
    printf("| '--------------' || '--------------' || '--------------' |\n");
    printf(" '----------------'  '----------------'  '----------------' \n");
    
    
    
}



void regle()
{
    char pseudo1[]= "martin";
    char pseudo2[]= "pierre";
    char pseudo3[]= "alexandre";

    printf("\t\t\t\t REGLES DU JEU \n\n\n");

//but du jeu

    printf("\t\t\t\t But du jeu\n\n");
    printf("Aligner des tuiles ayant des symboles de formes ou de couleurs identiques (mais  \n");
    printf("pas les deux) de fa%con %c r%caliser des combinaisons rapportant un maximum de points.\n",135,133,130);

//DÈbut de la partie

    printf("%s commence la partie et place autant de tuile qu\'il souhaite avec les m%cmes \n",pseudo1,135);
    printf("caract%cristiques (couleur ou forme).\n",130);
    printf("La rotation des joueurs se fait dans l\'ordre dans lequel les pseudos ont %ct%c rentr%cs\n",130,130,130);
    printf("donc %s, %s et %s\n\n",pseudo1,pseudo2,pseudo3);

    printf("Lorsque c\'est son tour, un joueur peut effectuer l\'une de ces trois actions :\n\n");
    printf("1 - Ajouter un pion %c la grille, puis tirer un pion %c partir de la pile de pions (la pioche)\n",133,133);
    printf("pour avoir %c nouveau une donne de six pions.\n\n",133);

    printf("2 - Ajouter deux pions ou plus %c la grille. Tous les pions jou%cs %c partir de la donne\n",133,130,133);
    printf("du joueur doivent partager une caract%cristique, %c savoir la couleur ou la forme. \n",130,133);
    printf("Les pions du joueur doivent %ctre toujours align%cs bien  qu\'ils n\'aient pas %c se toucher\n",136,130,133);
    printf("Ensuite, le joueur tire des pions de la pioche pour avoir de nouveau une donne de six pions.\n\n");

    printf("3 - %cchanger tous ou certains de ses pions contre diff%crents pions en provenance de la pioche,\n",144,130);
    printf("au lieu de les ajouter %c la grille.\n\n",133);

/**Concernant l'ajout de tuile :
**/

    printf("\t\t\t\tAjout %c la grille \n\n",133);

    printf("Chacun %c leur tour, les joueurs ajoutent des pions %c la grille cr%c%ce au premier tour. Tous les coups\n",133,133,130,130);
    printf("jou%cs doivent %ctre li%cs %c la grille existante.\n",130,136,130,133);
    printf("Il existe six formes et six couleurs. Les joueurs cr%cent des lignes de formes et de couleurs.\n",130);
    printf("Deux ou plusieurs pions qui se touchent cr%cent une ligne de formes ou une ligne de couleur.\n",130);
    printf("Les pions qui sont ajout%cs %c cette ligne doivent avoir la m%cme caract%cristique que les pions\n",130,133,136,130);
    printf("qui se trouvent d%cj%c sur la ligne. Il peut arriver qu\'il y ait des places sur la grille o%c aucun\n",130,133,151);
    printf("pion ne peut %ctre ajout%c.\n",136,130);
    printf("Une ligne de formes ne peut avoir qu\'un pion de chacune des six couleurs. Par exemple, une ligne\n");
    printf("de carr%cs ne peut avoir qu\'un carr%c orange.\n",130,130);
    printf("Une ligne de couleur ne peut avoir qu\'un pion de chacune des six formes. Par exemple, une ligne \n");
    printf("de jaune ne peut avoir qu\'un cercle jaune.\n\n");

/**Concernant l'Èchange de pion
**/

    printf("\t\t\t\t%cchange de pion \n\n",144);

    printf("Lorsque c\'est votre tour, vous pouvez choisir d\'%cchanger tous ou certains de vos pions au lieu de\n",130);
    printf("les ajouter %c la grille. Dans ce cas, vous devez mettre de c%ct%c les pions %c %cchanger, puis tirer les \n",133,147,130,133,130);
    printf("pions de remplacement. Enfin, vous devez m%clanger les pions que vous avez %cchang%cs dans la pioche. Si\n",130,130,130);
    printf("vous ne pouvez pas ajouter %c la grille, vous devez obligatoirement %cchanger certains ou tous vos pions.\n\n",133,130);

/**Concernant les points
**/

    printf("\t\t\t\tLes points \n\n");

    printf("Quand vous cr%cez une ligne, vous marquez un point pour chaque pion de la ligne. De plus, quand vous\n",130);
    printf("ajoutez un pion %c une ligne existante, vous marquez un point pour chaque pion de cette ligne, y compris\n",133);
    printf("les pions qui se trouvaient au pr%calable sur cette ligne. Un pion peut marquer deux points s\'il\n",130);
    printf("appartient %c deux lignes diff%crentes.\n",133,130);
    printf("Vous marquez six points suppl%cmentaires chaque fois que vous terminez une ligne de six pions. Les six\n",130);
    printf("pions doivent %ctre six pions de m%cme couleur, chacun ayant une forme diffÈrente OU six pions de \n",136,136,130);
    printf("m%cmes forme, chacun ayant une couleur diff%crente. Une ligne de six pions est appel%ce Qwirkle. Les\n",136,130,130);
    printf("lignes de plus de six pions sont interdites.\n");
    printf("Le joueur qui termine la partie obtient six points suppl%cmentaires.\n\n",130);

/**Concernant la fin de partie
**/
    printf("\t\t\t\tFin de la partie\n\n");

    printf("Quand la pioche ne contient plus de pions, poursuivez le jeu comme indiqu%c pr%cc%cdemment\n",130,130,130);
    printf("mais les joueurs ne tirent plus de pions %c la fin de leur tour. Le premier joueur qui utilise tous ses pions\n",133);
    printf("termine la partie et obtient six points suppl%cmentaires. Le joueur ayant le nombre de\n",130);
    printf("points le plus %c lev%c est le gagnant.\n\n",130,130);

/**Concernant les astuces stratÈgiques
**/

    printf("\t\t\t\tAstuces strat%cgiques\n\n",130);

    printf("Comptez les pions. Par exemple, si vous attendez un cercle jaune, v%crifiez qu\'il y a au moins un cercle\n",130);
    printf("jaune qui n\'a pas %ct%c jou%c. Essayez d\'ajouter %c plusieurs lignes %c la fois. Essayez de ne pas cr%cer\n",130,130,130,133,133,130,130);
    printf("des rang%ces ou des colonnes ayant au moins cinq pions car vous donnez %c votre adversaire l\'occasion\n",130,133);
    printf("de marquer un nombre %clev%c de points.\n\n\n",130,130);

    printf("\t\t\t\t BON JEU !\n\n\n");

}
