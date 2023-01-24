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
#define CIRCLE    1
#define STAR_4    2
#define DIAMOND   3
#define SQUARE    4
#define STAR_6    5
#define CLOVER    6
//♦ ♥ ■ ♠ ♣  •

// Scructure

struct Joueur{
    char nom[10];
    int score;
    char Case [6][6];
};typedef struct Joueur JR;

struct Plateau{
    int x;
    int y;
    char plateau [MAX_X][MAX_Y];
};typedef struct Plateau PL;


// Sous-Programme
void plateau (PL* Plateau, JR* Joueur, int nb);
int demande_nombre_joueur(void);
void DessineSymbole(char symbole, int nombre);
JR* nom_joueur (JR* Joueur, int nb);
void Chargement(void);
int deroulement_partie(PL* Plato, JR* Joueur, int nb);
void tirrage_piece (JR* Joueur, int nb);
void affiche_qwirkle (void);
//Sous-Programme pour les couleurs
/*
 void color(int t,int f);
 */

#endif /* header_h */
