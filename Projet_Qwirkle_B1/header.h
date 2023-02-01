//
//  header.h
//  Projet_Qwirkle_B1
//
//  Created by Alexandre Puiseux on 18/01/2023.
//

#ifndef header_h
#define header_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <stdbool.h>

// #include <windows.h>

#define MAX_X 12 
#define MAX_Y 26
#define MAX_NOMBRE 4

// Colours
#define RED    'R'
#define ORANGE 'O'
#define YELLOW 'Y'
#define GREEN  'G'
#define BLUE   'B'
#define PURPLE 'P'

// Shapes
#define CIRCLE    1//•
#define HEART     2//♥
#define DIAMOND   3//♦
#define SQUARE    4//■
#define SPIKE     5//♠
#define CLOVER    6//♣
//♦ ♥ ■ ♠ ♣  •

// Scructure
struct Tuile{
    char couleur;
    int forme;
};typedef struct Tuile TUL;

struct Joueur{
    char nom[10];
    int score;
    TUL tuileJR [6];
};typedef struct Joueur JR;

struct Plateau{
    int x;
    int y;
    TUL plateau [MAX_X][MAX_Y];
};typedef struct Plateau PL;


// Sous-Programme
void plateau (PL Plateau, JR* Joueur, int nb);
int demande_nombre_joueur(void);
void DessineSymbole(char symbole, int nombre);
JR* nom_joueur (JR* Joueur, int nb);
void Chargement(void);
int deroulement_partie(PL Plato, JR* Joueur, int nb);
void tirrage_piece (JR* Joueur, int nb);
void affiche_qwirkle (void);
void distribution_tuile (JR*joueur, int nb);
void initialisation_des_tuiles (TUL* tuile);
JR placer_une_case (JR joueur[],PL plateau, int nb);
void win (void);
void regle(void);
void pioche(JR*joueur, int nb, int manque);
int rotation_joueur(int nbJR, int actuelJR);
void distribution_main_depart (JR* Joueur, int i, int nb);
int conditionW (JR Joueur[], int nb);
//Sous-Programme pour les couleurs
/*
 void color(int t,int f);
 */

#endif /* header_h */
