#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int main()
{
    int i = 1;
    while(i == 1)
    {
        int choix = 0;
        choix = menu();
// Pour resoudre  une grille
        if(choix == 1)
        {
            int choix2 = 0;
            choix2 = sous_menu_taille_grille();
// Catégorie 4x4
            if (choix2 == 1)
            {
                int choix3 = 0;
                choix3 = sous_menu();
                // Saisir un masque
                if(choix3 == 1)
                {
                    saisir_masque_4x4();
                    continue;
                }
                if(choix3 == 2)
                    // Generer automatiquement un masque + grille de jeu
                {
                    int alea = 0;
                    srand(time(NULL));
                    alea = rand()%4;
                    if(alea == 0)
                    {
                        masque_grille_0_alea4x4();
                    }
                    if(alea == 1)
                    {
                        masque_grille_1_alea4x4();
                    }
                    if(alea == 2)
                    {
                        masque_grille_2_alea4x4();
                    }
                    if(alea == 3)
                    {
                        masque_grille_3_alea4x4();
                    }
                    continue;
                }
                if(choix3 == 3)
                {
                    int alea = 0;
                    srand(time(NULL));
                    alea = rand() % 4;
                    if (alea == 0) {
                        jouer_0_4x4(3);
                    }
                    if (alea == 1) {
                        jouer_1_4x4(3);
                    }
                    if (alea == 2) {
                        jouer_2_4x4(3);
                    }
                }
            }
            // Catégorie 8x8
            if (choix2 == 2)
            {
                int choix3 = 0;
                choix3 = sous_menu();
// Saisir un masque manuellement en 8x8
                if(choix3 == 1)
                {
                    saisir_masque_8x8();
                    continue;
                }
                // Saisie d'un maqque + grille de jeu automatiquement 8x8
                if(choix3 == 2)
                {
                    int alea = 0;
                    srand(time(NULL));
                    alea = rand()%4;
                    if(alea == 0)
                    {
                        masque_grille_0_8x8();
                    }
                    if(alea == 1)
                    {
                        masque_grille_1_8x8();
                    }
                    if(alea == 2)
                    {
                        masque_grille_2_8x8();
                    }
                    if(alea == 3)
                    {
                        masque_grille_3_8x8();
                    }
                    continue;
                }
                if(choix3 == 3)
                {
                    int alea = 0;
                    srand(time(NULL));
                    alea = rand()%4;
                    if(alea == 0)
                    {
                        jouer_0_8x8();
                    }
                    if(alea == 1)
                    {
                        jouer_1_8x8();
                    }
                    if(alea == 2)
                    {
                        jouer_2_8x8();
                    }
                }

            }

        }



        // Quitter le programme
        if(choix == 2)
        {
            lirelagrille4x4();
        }
        if(choix == 3)
        {
            printf("En cours");
        }
        if(choix == 4)
        {
            regles();
        }
        if(choix == 0)
        {
            printf("Vous avez quitter le programme");
            i = 2;
        }

    }
}
