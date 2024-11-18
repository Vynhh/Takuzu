//
// Created by truon on 06/04/2022.
//
#include "menu.h"

int menu()
{
    //Menu principale
    printf("\t\tLe jeu du Takuzu\n\n");
    printf("1. Resoudre une grille.\n");
    printf("2. Resoudre automatiquement une grille.\n");
    printf("3. Generer une grille.\n");
    printf("4. Regles.\n");
    printf("0. Quitter le programme.\n");

    // Saisie du choix de l'utilisateur
    printf("Saisir un numero correspondant a l'action : \n");
    int choix = 5;
    // Saisie sécurisée
    while(choix < 0 || choix > 4)
    {
        scanf("%d",&choix);
    }
    return choix;

}
int sous_menu()
{
    // Menu après avoir saisie Resoudre une grille
    printf("1. Saisir manuellement un masque.\n");
    printf("2. Generer automatiquement un masque.\n");
    printf("3. Jouer.\n");
    printf("Saisir un numero correspondant a l'action : \n");

    int choix3 = 0;
    // Saisie sécuritée
    while(choix3 < 1 || choix3 > 3)
    {
        scanf("%d",&choix3);
    }
    return choix3;

}
int sous_menu_taille_grille()
{
    // Menu pour  choisir la taille
    printf("1. 4x4\n");
    printf("2. 8x8\n");
    printf("Saisir un numero correspondant a l'action : \n");
    int choix2 = 0;
    // Saisie sécurisée
    while(choix2 < 1 || choix2 > 2)
    {
        scanf("%d",&choix2);
    }
    return choix2;
}
int regles()
{
    // Affichage des regles
    printf("1. Dans une ligne, il doit y avoir autant de 0 que de 1.\n");
    printf("2. Dans une colonne, il doit y avoir autant de 0 que de 1.\n");
    printf("3. Il ne peut pas y avoir deux lignes identiques dans une grille.\n");
    printf("4. Il ne peut pas y avoir deux colonnes identiques dans une grille.\n");
    printf("5. Dans une ligne ou une colonne, il ne peut y avoir plus de deux 0 ou deux 1 a la suite (on ne peut pas avoir"
           "trois 0 de suite ou trois 1 de suite).\n\n");
}
// Masque rentrer manuellement
int saisir_masque_4x4()
{
    //Saisie d'un masque manuellement dans une grille 4x4
        int masque[10][10]={{0,0,0,0},
                            {0,0,0,0},
                            {0,0,0,0},
                            {0,0,0,0}};
    printf("Pour saisir une masque 4x4,vous pouvez saisir 6 valeurs :\n");
    int ligne = 5,colonne = 5, i,j,k, templigne = 0, tempcolonne = 0;
    for(k = 0;k < 6;k++)
    {
        //Saisie sécurisée
            while (ligne < 1 || ligne > 4) {
                // Saisie des coordonnees ( LIGNE)
                printf("Saisir un ligne : \n");
                scanf("%d", &ligne);
            }
        //Saisie sécurisée
            while (colonne < 1 || colonne > 4) {
                // Saisie des coordonnees (COLONNE)
                printf("Saisir une colonne : \n");
                scanf("%d", &colonne);
            }

            if(templigne == ligne && tempcolonne == colonne)
            {
                printf("Saisir des valeurs différentes :\n");
                //Saisie sécurisée
                while (ligne < 1 || ligne > 4) {
                    // Saisie des coordonnees (LIGNE)
                    printf("Saisir un ligne : \n");
                    scanf("%d", &ligne);
                }
                //Saisie sécurisée
                while (colonne < 1 || colonne > 4) {
                    // Saisie des coordonnees (COLONNE)
                    printf("Saisir une colonne : \n");
                    scanf("%d", &colonne);
                }
                k -= 1;
            }
            masque[ligne - 1][colonne - 1] = 1;
        tempcolonne = colonne;
        templigne = ligne;
            ligne = 0;
            colonne = 0;

    }
    //AFFICHAGE DU MASQUE
    printf("    a   b   c   d\n");
    printf("  - - - - - - - - - \n");
    for(i = 0; i < 4; i++)
    {

        printf("%d ",i+1);
        for(j = 0; j < 4; j++)
        {
            printf("| ");
            printf("%d ",masque[i][j]);
        }
        printf("|\n");
        printf("  - - - - - - - - -\n");
    }
    int numero = 14;
    int grille[10][10];
    for (i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(masque[i][j] == 1) {
                //Saisie d'une valeur, sois 1 ou 0
                printf("Valeur a la Ligne %d et a la Colonne %d :\n", i + 1, j + 1);
                printf("1. Entrer la valeur 1\n");
                printf("2. Entrer la valeur 0\n");
                // Saisie securisée
                while (numero > 2 || numero < 1) {
                    printf("Saisir un numero correspondant a l'action\n");
                    scanf("%d", &numero);
                }
            }
                if(numero == 1)
                {
                    grille[i][j]=1;
                    numero = 10;
                }
                else
                {
                    grille[i][j]=0;
                    numero = 10;
                }

        }
    }

    printf("    a   b   c   d\n");
    printf("  - - - - - - - - - \n");
    for(i = 0; i < 4; i++)
    {
        printf("%d ",i+1);
        for(j = 0; j < 4;j++)
        {
            printf("| ");
            if(masque[i][j] == 1)
            {
                printf("%d ",grille[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("|\n");
        printf("  - - - - - - - - -\n");
    }
}
// Masque rentrer manuellement
void saisir_masque_8x8()//Fonction qui permet de saisir un masque manuellement en 8x8
{
        int masque[10][10]={{0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0}};
        printf("Pour saisir une masque 8x8,vous pouvez saisir 16 valeurs :\n");
        int ligne = 17,colonne = 17, i,j,k, templigne = 0, tempcolonne = 0;
        for(k = 0;k < 16;k++)
        {
            // Saisie des coordonnees (LIGNE)
            // Saisie securisée
            while (ligne < 1 || ligne > 16) {
                printf("Saisir un ligne : \n");
                scanf("%d", &ligne);
            }
            while (colonne < 1 || colonne > 16) {
                // Saisie des coordonnees (COLONNE)
                // Saisie sécurisée
                printf("Saisir une colonne : \n");
                scanf("%d", &colonne);
            }
            if(templigne == ligne && tempcolonne == colonne)
            {
                printf("Saisir des valeurs différentes :\n");
                while (ligne < 1 || ligne > 16) {
                    // Saisie des coordonnees (ligne)
                    // Saisie sécurisée
                    printf("Saisir un ligne : \n");
                    scanf("%d", &ligne);
                }
                // Saisie sécurisée

                while (colonne < 1 || colonne > 16) {
                    // Saisie des coordonnees (COLONNE)
                    printf("Saisir une colonne : \n");
                    scanf("%d", &colonne);
                }
                k -= 1;
            }
            masque[ligne - 1][colonne - 1] = 1;
            tempcolonne = colonne;
            templigne = ligne;
            ligne = 0;
            colonne = 0;

        }

    int numero = 14;
    int grille[10][10];
    for (i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            if(masque[i][j] == 1) {
                // Saisie de la valeur, sois 1 ou 0
                printf("Valeur a la Ligne %d et a la Colonne %d :\n", i + 1, j + 1);
                printf("1. Entrer la valeur 1\n");
                printf("2. Entrer la valeur 0\n");
                // Saisie sécurisée
                while (numero > 2 || numero < 1) {
                    printf("Saisir un numero correspondant a l'action\n");
                    scanf("%d", &numero);
                }
            }
            if(numero == 1)
            {
                grille[i][j]=1;
                numero = 10;
            }
            else
            {
                grille[i][j]=0;
                numero = 10;
            }
        }
    }
    //Affichage du masque 8x8
    printf("    a   b   c   d   e   f   g   h\n");
    printf("  - - - - - - - - - - - - - - - - -\n");
        for(i = 0; i < 8; i++)
        {
            printf("%d ",i+1);
            for(j = 0; j < 8; j++)
            {
                printf("| ");
                if(masque[i][j] == 1)
                {
                    printf("%d ",grille[i][j]);
                }
                else
                {
                    printf("  ");
                }
            }
            printf("|\n");
            printf("  - - - - - - - - - - - - - - - - -\n");
        }
}

void masque_grille_0_alea4x4()//Fonction qui permet d'afficher un masque et une grille de jeu 4x4
{
    int i,j;
    int grillejeuresultat0[10][10]={{1,1,0,0},
                                    {0,1,1,0},
                                    {0,0,1,1},
                                    {1,0,0,1}};
    int grillejeu[10][10];
    int alea;
    printf("Grille de Jeu :\n\n");
    printf("    a   b   c   d\n");
    printf("  - - - - - - - - - \n");
    for(i = 0; i < 4; i++)
    {
        printf("%d ",i+1);
        for(j = 0; j < 4; j++)
        {
            printf("| ");
            //Aléatoire, le programme garde les valeurs 1 et 0, le numéro est entre 0 et 4
            alea = rand()%5;
            if(alea == 1 || alea == 0)
            {
                printf("%d ",grillejeuresultat0[i][j]);
                grillejeu[i][j] = grillejeuresultat0[i][j];
            }
            else
            {
                printf("  ");
                grillejeu[i][j] = 2;
            }
        }
        printf("|\n");
        printf("  - - - - - - - - -\n");
    }
    printf("\n");
    //Affichage du masque
    printf("Le masque : \n\n");
    int masque[10][10];
    printf("    a   b   c   d\n");
    printf("  - - - - - - - - - \n");
    for(i = 0; i < 4; i++)
    {
        printf("%d ",i+1);
        for(j = 0; j < 4; j++)
        {
            printf("| ");
            if(grillejeu[i][j] == 1 || grillejeu[i][j] == 0)
            {
                masque[i][j] = 1;
                printf("%d ",masque[i][j]);
            }
            else
            {
                masque[i][j] = 0;
                printf("%d ",masque[i][j]);
            }
        }
        printf("|\n");
        printf("  - - - - - - - - -\n");
    }
}
void masque_grille_1_alea4x4()//Fonction qui permet d'afficher un masque et une grille de jeu 4x4
{
    int i,j;
    int grillejeuresultat1[10][10]={{1,0,0,1},
                                {0,1,0,1},
                                {1,0,1,0},
                                {0,1,1,0}};
    int grillejeu[10][10];
    int alea;
    printf("Grille de Jeu :\n\n");

    printf("    a   b   c   d\n");
    printf("  - - - - - - - - - \n");
    for(i = 0; i < 4; i++)
    {
        printf("%d ",i+1);
        for(j = 0; j < 4; j++)
        {
            printf("| ");
            //Aléatoire, le programme garde les valeurs 1 et 0, le numéro est entre 0 et 4
            alea = rand()%5;
            if(alea == 1 || alea == 0)
            {
                printf("%d ",grillejeuresultat1[i][j]);
                grillejeu[i][j] = grillejeuresultat1[i][j];
            }
            else
            {
                printf("  ");
                grillejeu[i][j] = 2;
            }
        }
        printf("|\n");
        printf("  - - - - - - - - -\n");
    }
    printf("\n");
    //Affichage du masque
    printf("Le masque : \n\n");
    int masque[10][10];
    printf("    a   b   c   d\n");
    printf("  - - - - - - - - - \n");
    for(i = 0; i < 4; i++)
    {
        printf("%d ",i+1);
        for(j = 0; j < 4; j++)
        {
            printf("| ");
            if(grillejeu[i][j] == 1 || grillejeu[i][j] == 0)
            {
                masque[i][j] = 1;
                printf("%d ",masque[i][j]);
            }
            else
            {
                masque[i][j] = 0;
                printf("%d ",masque[i][j]);
            }
        }
        printf("|\n");
        printf("  - - - - - - - - -\n");
    }
}
void masque_grille_2_alea4x4() //Fonction qui permet d'afficher un masque et une grille de jeu 4x4

{
    int i,j;
    int grillejeuresultat2[10][10]={{1,0,0,1},
                                {1,1,0,0},
                                {0,1,1,0},
                                {0,0,1,1}};
    int grillejeu[10][10];
    int alea;
    //Affichage de la grille de jeu
    printf("Grille de Jeu :\n\n");

    printf("    a   b   c   d\n");
    printf("  - - - - - - - - - \n");
    for(i = 0; i < 4; i++)
    {
        printf("%d ",i+1);
        for(j = 0; j < 4; j++)
        {
            printf("| ");
            alea = rand()%5;
            //Aléatoire, le programme garde les valeurs 1 et 0, le numéro est entre 0 et 4
            if(alea == 1 || alea == 0)
            {
                printf("%d ",grillejeuresultat2[i][j]);
                grillejeu[i][j] = grillejeuresultat2[i][j];
            }
            else
            {
                printf("  ");
                grillejeu[i][j] = 2;
            }
        }
        printf("|\n");
        printf("  - - - - - - - - -\n");
    }
    printf("\n");
    //Affichage du masque
    printf("Le masque : \n\n");
    int masque[10][10];
    printf("    a   b   c   d\n");
    printf("  - - - - - - - - - \n");
    for(i = 0; i < 4; i++)
    {
        printf("%d ",i+1);
        for(j = 0; j < 4; j++)
        {
            printf("| ");
            if(grillejeu[i][j] == 1 || grillejeu[i][j] == 0)
            {
                masque[i][j] = 1;
                printf("%d ",masque[i][j]);
            }
            else
            {
                masque[i][j] = 0;
                printf("%d ",masque[i][j]);
            }
        }
        printf("|\n");
        printf("  - - - - - - - - -\n");
    }
}
void masque_grille_3_alea4x4() //Fonction qui permet d'afficher un masque et une grille de jeu 4x4

{
    int i,j;
    int grillejeuresultat3[10][10]={{0,0,1,1},
                                {1,1,0,0},
                                {1,0,0,1},
                                {0,1,1,0}};
    int grillejeu[10][10];
    int alea;
    printf("Grille de Jeu :\n\n");

    printf("    a   b   c   d\n");
    printf("  - - - - - - - - - \n");
    for(i = 0; i < 4; i++)
    {
        printf("%d ",i+1);
        for(j = 0; j < 4; j++)
        {
            printf("| ");
            //Aléatoire, le programme garde les valeurs 1 et 0, le numéro est entre 0 et 4
            alea = rand()%5;
            if(alea == 1 || alea == 0)
            {
                printf("%d ",grillejeuresultat3[i][j]);
                grillejeu[i][j] = grillejeuresultat3[i][j];
            }
            else
            {
                printf("  ");
                grillejeu[i][j] = 2;
            }
        }
        printf("|\n");
        printf("  - - - - - - - - -\n");
    }
    printf("\n");
    //Affichage du masque
    printf("Le masque : \n\n");
    int masque[10][10];
    printf("    a   b   c   d\n");
    printf("  - - - - - - - - - \n");
    for(i = 0; i < 4; i++)
    {
        printf("%d ",i+1);
        for(j = 0; j < 4; j++)
        {
            printf("| ");
            if(grillejeu[i][j] == 1 || grillejeu[i][j] == 0)
            {
                masque[i][j] = 1;
                printf("%d ",masque[i][j]);
            }
            else
            {
                masque[i][j] = 0;
                printf("%d ",masque[i][j]);
            }
        }
        printf("|\n");
        printf("  - - - - - - - - -\n");
    }
}

void masque_grille_0_8x8() // Fonction qui permet d'afficher un masque et une grille de jeu 8x8

{
    int i,j;
    int grillejeuresultat3[10][10]={{0,1,0,1,1,0,0,1},
                                    {1,0,0,1,0,0,1,1},
                                    {0,1,1,0,0,1,1,0},
                                    {1,1,0,0,1,1,0,0},
                                    {0,0,1,1,0,0,1,1},
                                    {0,1,0,1,1,0,1,0},
                                    {1,0,1,0,1,1,0,0},
                                    {1,0,1,0,0,1,0,1}};
    int grillejeu[10][10];
    int alea;
    printf("Grille de Jeu :\n\n");

    printf("    a   b   c   d   e   f   g   h\n");
    printf("  - - - - - - - - - - - - - - - - -\n");
    for(i = 0; i < 8; i++)
    {
        printf("%d ",i+1);
        for(j = 0; j < 8; j++)
        {
            printf("| ");
            //Aléatoire, le programme garde les valeurs 1 ,0,2,3, le numéro est entre 0 et 9
            alea = rand()%10;
            if(alea == 1 || alea == 0 || alea == 2 || alea == 3)
            {
                printf("%d ",grillejeuresultat3[i][j]);
                grillejeu[i][j] = grillejeuresultat3[i][j];
            }
            else
            {
                printf("  ");
                grillejeu[i][j] = 2;
            }
        }
        printf("|\n");
        printf("  - - - - - - - - - - - - - - - - -\n");
    }
    printf("\n");
    //Affichage du masque
    printf("Le masque : \n\n");
    int masque[10][10];
    printf("    a   b   c   d   e   f   g   h\n");
    printf("  - - - - - - - - - - - - - - - - -\n");
    for(i = 0; i < 8; i++)
    {
        printf("%d ",i+1);
        for(j = 0; j < 8; j++)
        {
            printf("| ");
            if(grillejeu[i][j] == 1 || grillejeu[i][j] == 0)
            {
                masque[i][j] = 1;
                printf("%d ",masque[i][j]);
            }
            else
            {
                masque[i][j] = 0;
                printf("%d ",masque[i][j]);
            }
        }
        printf("|\n");
        printf("  - - - - - - - - - - - - - - - - -\n");
    }
}

void masque_grille_1_8x8() //Fonction qui permet d'afficher un masque et une grille de jeu 8x8

{
    int i,j;
    int grillejeuresultat3[10][10]={{1,0,1,1,0,0,1,0},
                                    {0,0,1,1,0,1,0,1},
                                    {0,1,0,0,1,0,1,1},
                                    {1,0,0,1,0,1,1,0},
                                    {0,1,1,0,1,1,0,0},
                                    {0,1,0,1,0,0,1,1},
                                    {1,0,1,0,1,0,0,1},
                                    {1,1,0,0,1,1,0,0}};
    int grillejeu[10][10];
    int alea;
    printf("Grille de Jeu :\n\n");

    printf("    a   b   c   d   e   f   g   h\n");
    printf("  - - - - - - - - - - - - - - - - -\n");
    for(i = 0; i < 8; i++)
    {
        printf("%d ",i+1);
        for(j = 0; j < 8; j++)
        {
            printf("| ");
            //Aléatoire, le programme garde les valeurs 1 ,0,2,3, le numéro est entre 0 et 9
            alea = rand()%10;
            if(alea == 1 || alea == 0 || alea == 2 || alea == 3)
            {
                printf("%d ",grillejeuresultat3[i][j]);
                grillejeu[i][j] = grillejeuresultat3[i][j];
            }
            else
            {
                printf("  ");
                grillejeu[i][j] = 2;
            }
        }
        printf("|\n");
        printf("  - - - - - - - - - - - - - - - - -\n");
    }
    printf("\n");
    //Affichage du masque
    printf("Le masque : \n\n");
    int masque[10][10];
    printf("    a   b   c   d   e   f   g   h\n");
    printf("  - - - - - - - - - - - - - - - - -\n");
    for(i = 0; i < 8; i++)
    {
        printf("%d ",i+1);
        for(j = 0; j < 8; j++)
        {
            printf("| ");
            if(grillejeu[i][j] == 1 || grillejeu[i][j] == 0)
            {
                masque[i][j] = 1;
                printf("%d ",masque[i][j]);
            }
            else
            {
                masque[i][j] = 0;
                printf("%d ",masque[i][j]);
            }
        }
        printf("|\n");
        printf("  - - - - - - - - - - - - - - - - -\n");
    }
}

void masque_grille_2_8x8() // Fonction qui permet d'afficher un masque et une grille de jeu 8x8

{
    int i,j;
    int grillejeuresultat3[10][10]={{1,0,0,1,0,0,1,1},
                                    {1,0,1,1,0,1,0,0},
                                    {0,1,0,0,1,0,1,1},
                                    {1,0,1,0,1,1,0,0},
                                    {0,1,0,1,0,0,1,1},
                                    {0,1,1,0,1,0,0,1},
                                    {1,0,0,1,0,1,1,0},
                                    {0,1,1,0,1,1,0,0}};
    int grillejeu[10][10];
    int alea;
    printf("Grille de Jeu :\n\n");

    printf("    a   b   c   d   e   f   g   h\n");
    printf("  - - - - - - - - - - - - - - - - -\n");
    for(i = 0; i < 8; i++)
    {
        printf("%d ",i+1);
        for(j = 0; j < 8; j++)
        {
            printf("| ");
            //Aléatoire, le programme garde les valeurs 1 ,0,2,3, le numéro est entre 0 et 9
            alea = rand()%10;
            if(alea == 1 || alea == 0 || alea == 2 || alea == 3)
            {
                printf("%d ",grillejeuresultat3[i][j]);
                grillejeu[i][j] = grillejeuresultat3[i][j];
            }
            else
            {
                printf("  ");
                grillejeu[i][j] = 2;
            }
        }
        printf("|\n");
        printf("  - - - - - - - - - - - - - - - - -\n");
    }
    printf("\n");
    printf("Le masque : \n\n");
    int masque[10][10];
    printf("    a   b   c   d   e   f   g   h\n");
    printf("  - - - - - - - - - - - - - - - - -\n");
    for(i = 0; i < 8; i++)
    {
        printf("%d ",i+1);
        for(j = 0; j < 8; j++)
        {
            printf("| ");
            if(grillejeu[i][j] == 1 || grillejeu[i][j] == 0)
            {
                masque[i][j] = 1;
                printf("%d ",masque[i][j]);
            }
            else
            {
                masque[i][j] = 0;
                printf("%d ",masque[i][j]);
            }
        }
        printf("|\n");
        printf("  - - - - - - - - - - - - - - - - -\n");
    }
}

void masque_grille_3_8x8() // Fonction qui permet d'afficher un masque et une grille de jeu 8x8
{
    int i,j;
    int grillejeuresultat3[10][10]={{1,0,0,1,1,0,0,1},
                                    {0,0,1,1,0,1,1,0},
                                    {1,1,0,0,1,0,1,0},
                                    {0,1,0,0,1,1,0,1},
                                    {1,0,1,1,0,0,1,0},
                                    {0,1,1,0,1,1,0,0},
                                    {1,0,0,1,0,0,1,1},
                                    {0,1,1,0,0,1,0,1}};
    int grillejeu[10][10];
    int alea;
    printf("Grille de Jeu :\n\n");

    printf("    a   b   c   d   e   f   g   h\n");
    printf("  - - - - - - - - - - - - - - - - -\n");
    for(i = 0; i < 8; i++)
    {
        printf("%d ",i+1);
        for(j = 0; j < 8; j++)
        {
            printf("| ");
            //Aléatoire, le programme garde les valeurs 1 ,0,2,3, le numéro est entre 0 et 9
            alea = rand()%10;
            if(alea == 1 || alea == 0 || alea == 2 || alea == 3)
            {
                printf("%d ",grillejeuresultat3[i][j]);
                grillejeu[i][j] = grillejeuresultat3[i][j];
            }
            else
            {
                printf("  ");
                grillejeu[i][j] = 2;
            }
        }
        printf("|\n");
        printf("  - - - - - - - - - - - - - - - - -\n");
    }
    printf("\n");
    printf("Le masque : \n\n");
    int masque[10][10];
    printf("    a   b   c   d   e   f   g   h\n");
    printf("  - - - - - - - - - - - - - - - - -\n");
    for(i = 0; i < 8; i++)
    {
        printf("%d ",i+1);
        for(j = 0; j < 8; j++)
        {
            printf("| ");
            if(grillejeu[i][j] == 1 || grillejeu[i][j] == 0)
            {
                masque[i][j] = 1;
                printf("%d ",masque[i][j]);
            }
            else
            {
                masque[i][j] = 0;
                printf("%d ",masque[i][j]);
            }
        }
        printf("|\n");
        printf("  - - - - - - - - - - - - - - - - -\n");
    }
}

int vie()
{
    //Le nombre de vie que le joueur dispose
    int nombredevie;
    nombredevie = 3;
    return nombredevie;
}

void jouer_0_4x4() // Fonction qui permet de jouer au takuzu en 4x4
{
    {
        int i, j;
        int grillejeuresultat0[4][4] = {{1, 1, 0, 0},
                                          {0, 1, 1, 0},
                                          {0, 0, 1, 1},
                                          {1, 0, 0, 1}};
        int masque11[4][4]={{1,1,1,1},
                              {1,1,1,1},
                              {1,1,1,1},
                              {1,1,1,1}};

        int grillejeu[4][4];
        int alea;
        printf("Grille de Jeu :\n\n");
        printf("    a   b   c   d\n");
        printf("  - - - - - - - - - \n");
        for (i = 0; i < 4; i++) {
            printf("%d ", i + 1);
            for (j = 0; j < 4; j++) {
                printf("| ");
                alea = rand() % 4;
                if(alea == 1 || alea == 0)
                {
                    printf("%d ", grillejeuresultat0[i][j]);
                    grillejeu[i][j] = grillejeuresultat0[i][j];
                } else {
                    printf("  ");
                    grillejeu[i][j] = 2;
                }
            }
            printf("|\n");
            printf("  - - - - - - - - - \n");
        }
        printf("\n");
        int masque[4][4];
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                if (grillejeu[i][j] == 1 || grillejeu[i][j] == 0) {
                    masque[i][j] = 1;
                } else {
                    masque[i][j] = 0;
                }
            }
        }


        int colonne, ligne, valeur;
        colonne = 0;
        ligne = 0;
        valeur = 0;
        int n = 1;
        int coup;
        int changer =0;
        int temp;
        int nombrevie = vie();
        for(int k = 0; k < 4; k++){
            for(int l = 0; l < 4; l++)
            {
                while((masque[k][l] != masque11[k][l]))
                {
                    if (changer == 1) {
                        grillejeu[ligne - 1][colonne - 1] = temp;
                        changer = 0;
                    }
                    // REMPLIR UNE CASE
                    printf("Quel case voulez vous remplir ?\n");

                    printf("Saisir la ligne :\n");
                    scanf("%d", &ligne);
                    printf("Saisir la colonne\n");
                    scanf("%d", &colonne);


                    if (masque[ligne - 1][colonne - 1] == 0) {

                        printf("Quel valeur voulez vous saisir\n");
                        printf("Vous avez actuellement %d vie\n", nombrevie);
                        printf("1. Entrer la valeur 1\n");
                        printf("0. Entrer la valeur 0\n");
                        scanf("%d", &valeur);

                        i = ligne - 1;
                        j = colonne - 1;
                        grillejeu[i][j] = valeur;
                        int variable;

                        if (valeur == grillejeuresultat0[i][j]) {
                            variable = 10;
                        } else {
                            variable = 11;
                        }

                        printf("    a   b   c   d\n");
                        printf("  - - - - - - - - - \n");
                        for (i = 0; i < 4; i++) {
                            printf("%d ", i + 1);
                            for (j = 0; j < 4; j++) {
                                printf("| ");
                                if (grillejeu[i][j] == 1 || grillejeu[i][j] == 0) {
                                    if (variable == 10) {
                                        coup = 1;
                                    } else {
                                        coup = 2;
                                    }
                                    printf("%d ", grillejeu[i][j]);
                                    masque[i][j] = 1;
                                } else {
                                    printf("  ");
                                }
                            }
                            printf("|\n");
                            printf("  - - - - - - - - - \n");
                        }
                        if (coup == 1) {
                            printf("Le coup est correct\n");
                            changer = 0;
                        } else {
                            printf("Le coup est incorrect\n");
                            nombrevie -= 1;
                            changer = 1;
                            printf("Vous perdez une vie\n");
                            printf("Le coup a donc ete modifier\n");
                            if (valeur == 1) {
                                temp = 0;
                            } else {
                                temp = 1;
                            }
                            printf("Vous avez actuellement %d vie\n", nombrevie);
                            if (nombrevie == 0) {
                                printf("Vous avez perdu.\n Retour au menu principal\n\n");
                                for(i=0;i<4; i++)
                                {
                                    for(j=0;j < 4 ; j++)
                                    {
                                        (masque[i][j] = masque11[i][j]);
                                    }
                                    n = 0;
                                }
                            }
                        }
                    } else {
                        printf("La valeur a deja ete remplie\n\n");
                    }
                }
            }
        }
        if(n == 1){
        printf("----- Bravo tu as gagné ! -----\n");}
    }
}

void jouer_1_4x4() //Fonction qui permet de jouer au takuzu
{
    {
        int i, j;
        int grillejeuresultat0[4][4] = {{1, 0, 0, 1},
                                          {0, 1, 0, 1},
                                          {1, 0, 1, 0},
                                          {0, 1, 1, 0}};
        int masque11[4][4]={{1,1,1,1},
                              {1,1,1,1},
                              {1,1,1,1},
                              {1,1,1,1}};

        int grillejeu[4][4];
        int alea;
        printf("Grille de Jeu :\n\n");
        printf("    a   b   c   d\n");
        printf("  - - - - - - - - - \n");
        for (i = 0; i < 4; i++) {
            printf("%d ", i + 1);
            for (j = 0; j < 4; j++) {
                printf("| ");
                alea = rand() % 4;
                if(alea == 1 || alea == 0)
                {
                    printf("%d ", grillejeuresultat0[i][j]);
                    grillejeu[i][j] = grillejeuresultat0[i][j];
                } else {
                    printf("  ");
                    grillejeu[i][j] = 2;
                }
            }
            printf("|\n");
            printf("  - - - - - - - - - \n");
        }
        printf("\n");
        int masque[4][4];
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                if (grillejeu[i][j] == 1 || grillejeu[i][j] == 0) {
                    masque[i][j] = 1;
                } else {
                    masque[i][j] = 0;
                }
            }
        }


        int colonne, ligne, valeur;
        colonne = 0;
        ligne = 0;
        valeur = 0;
        int n = 1;
        int coup;
        int changer =0;
        int temp;
        int nombrevie = vie();
        for(int k = 0; k < 4; k++){
            for(int l = 0; l < 4; l++)
            {
                while(masque[k][l] != masque11[k][l])
                {
                    if (changer == 1) {
                        grillejeu[ligne - 1][colonne - 1] = temp;
                        changer = 0;
                    }
                    // REMPLIR UNE CASE
                    printf("Quel case voulez vous remplir ?\n");

                    printf("Saisir la ligne :\n");
                    scanf("%d", &ligne);
                    printf("Saisir la colonne\n");
                    scanf("%d", &colonne);


                    if (masque[ligne - 1][colonne - 1] == 0) {

                        printf("Quel valeur voulez vous saisir\n");
                        printf("Vous avez actuellement %d vie\n", nombrevie);
                        printf("1. Entrer la valeur 1\n");
                        printf("0. Entrer la valeur 0\n");
                        scanf("%d", &valeur);

                        i = ligne - 1;
                        j = colonne - 1;
                        grillejeu[i][j] = valeur;
                        int variable;

                        if (valeur == grillejeuresultat0[i][j]) {
                            variable = 10;
                        } else {
                            variable = 11;
                        }

                        printf("    a   b   c   d\n");
                        printf("  - - - - - - - - - \n");
                        for (i = 0; i < 4; i++) {
                            printf("%d ", i + 1);
                            for (j = 0; j < 4; j++) {
                                printf("| ");
                                if (grillejeu[i][j] == 1 || grillejeu[i][j] == 0) {
                                    if (variable == 10) {
                                        coup = 1;
                                    } else {
                                        coup = 2;
                                    }
                                    printf("%d ", grillejeu[i][j]);
                                    masque[i][j] = 1;
                                } else {
                                    printf("  ");
                                }
                            }
                            printf("|\n");
                            printf("  - - - - - - - - - \n");
                        }
                        if (coup == 1) {
                            printf("Le coup est correct\n");
                            changer = 0;
                        } else {
                            printf("Le coup est incorrect\n");
                            nombrevie -= 1;
                            changer = 1;
                            printf("Vous perdez une vie\n");
                            printf("Le coup a donc ete modifier\n");
                            if (valeur == 1) {
                                temp = 0;
                            } else {
                                temp = 1;
                            }
                            printf("Vous avez actuellement %d vie\n", nombrevie);
                            if (nombrevie == 0) {
                                printf("Vous avez perdu. Retour au menu principal\n\n");
                                for(i=0;i<4; i++)
                                {
                                    for(j=0;j < 4 ; j++)
                                    {
                                        (masque[i][j] = masque11[i][j]);
                                    }
                                    n = 0;
                                }
                            }
                        }
                    } else {
                        printf("La valeur a deja ete remplie\n\n");
                    }
                }
            }
        }
        if(n ==1){
        printf("----- Bravo tu as gagne ! -----\n");}
    }
}

void jouer_2_4x4() //Fonction qui permet de jouer au takuzu
{
    {
        int i, j;
        int grillejeuresultat0[4][4] = {{1, 0, 0, 1},
                                          {1, 1, 0, 0},
                                          {0, 1, 1, 0},
                                          {0, 0, 1, 1}};
        int masque11[4][4]={{1,1,1,1},
                              {1,1,1,1},
                              {1,1,1,1},
                              {1,1,1,1}};

        int grillejeu[4][4];
        int alea;
        printf("Grille de Jeu :\n\n");
        printf("    a   b   c   d\n");
        printf("  - - - - - - - - - \n");
        for (i = 0; i < 4; i++) {
            printf("%d ", i + 1);
            for (j = 0; j < 4; j++) {
                printf("| ");
                alea = rand() % 4;
                if(alea == 1 || alea == 0)
                {
                    printf("%d ", grillejeuresultat0[i][j]);
                    grillejeu[i][j] = grillejeuresultat0[i][j];
                } else {
                    printf("  ");
                    grillejeu[i][j] = 2;
                }
            }
            printf("|\n");
            printf("  - - - - - - - - - \n");
        }
        printf("\n");
        int masque[4][4];
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                if (grillejeu[i][j] == 1 || grillejeu[i][j] == 0) {
                    masque[i][j] = 1;
                } else {
                    masque[i][j] = 0;
                }
            }
        }

        int colonne, ligne, valeur;
        colonne = 0;
        ligne = 0;
        valeur = 0;
        int n = 1;
        int coup;
        int changer =0;
        int temp;
        int nombrevie = vie();
        for(int k = 0; k < 4; k++){
            for(int l = 0; l < 4; l++)
            {
                while(masque[k][l] != masque11[k][l])
                {
                    if (changer == 1) {
                        grillejeu[ligne - 1][colonne - 1] = temp;
                        changer = 0;
                    }
                    // REMPLIR UNE CASE
                    printf("Quel case voulez vous remplir ?\n");

                    printf("Saisir la ligne :\n");
                    scanf("%d", &ligne);
                    printf("Saisir la colonne\n");
                    scanf("%d", &colonne);


                    if (masque[ligne - 1][colonne - 1] == 0) {

                        printf("Quel valeur voulez vous saisir\n");
                        printf("Vous avez actuellement %d vie\n", nombrevie);
                        printf("1. Entrer la valeur 1\n");
                        printf("0. Entrer la valeur 0\n");
                        scanf("%d", &valeur);

                        i = ligne - 1;
                        j = colonne - 1;
                        grillejeu[i][j] = valeur;
                        int variable;

                        if (valeur == grillejeuresultat0[i][j]) {
                            variable = 10;
                        } else {
                            variable = 11;
                        }

                        printf("    a   b   c   d\n");
                        printf("  - - - - - - - - - \n");
                        for (i = 0; i < 4; i++) {
                            printf("%d ", i + 1);
                            for (j = 0; j < 4; j++) {
                                printf("| ");
                                if (grillejeu[i][j] == 1 || grillejeu[i][j] == 0) {
                                    if (variable == 10) {
                                        coup = 1;
                                    } else {
                                        coup = 2;
                                    }
                                    printf("%d ", grillejeu[i][j]);
                                    masque[i][j] = 1;
                                } else {
                                    printf("  ");
                                }
                            }
                            printf("|\n");
                            printf("  - - - - - - - - - \n");
                        }
                        if (coup == 1) {
                            printf("Le coup est correct\n");
                            changer = 0;
                        } else {
                            printf("Le coup est incorrect\n");
                            nombrevie -= 1;
                            changer = 1;
                            printf("Vous perdez une vie\n");
                            printf("Le coup a donc ete modifier\n");
                            if (valeur == 1) {
                                temp = 0;
                            } else {
                                temp = 1;
                            }
                            printf("Vous avez actuellement %d vie\n", nombrevie);
                            if (nombrevie == 0) {
                                printf("Vous avez perdu. Retour au menu principal\n\n");
                                for(i=0;i<4; i++)
                                {
                                    for(j=0;j < 4 ; j++)
                                    {
                                        (masque[i][j] = masque11[i][j]);
                                    }
                                    n = 0;
                                }
                            }
                        }
                    } else {
                        printf("La valeur a deja ete remplie\n\n");
                    }
                }
            }
        }
        if(n ==1){
        printf("----- Bravo tu as gagné ! -----\n");}
    }
}

void jouer_0_8x8() //Fonction qui permet de jouer au takuzu
{
    int i, j;
    int grillejeuresultat0[8][8] = {{0,1,0,1,1,0,0,1},
                                      {1,0,0,1,0,0,1,1},
                                      {0,1,1,0,0,1,1,0},
                                      {1,1,0,0,1,1,0,0},
                                      {0,0,1,1,0,0,1,1},
                                      {0,1,0,1,1,0,1,0},
                                      {1,0,1,0,1,1,0,0},
                                      {1,0,1,0,0,1,0,1}};
    int masque11[8][8]={{1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},};
    int grillejeu[8][8];
    int alea;
    printf("Grille de Jeu :\n\n");
    printf("    a   b   c   d   e   f   g   h\n");
    printf("  - - - - - - - - - - - - - - - - -\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", i + 1);
        for (j = 0; j < 8; j++) {
            printf("| ");
            alea = rand() % 8;
            if(alea == 1 || alea == 0 || alea == 2 || alea == 4 || alea == 5)
            {
                printf("%d ", grillejeuresultat0[i][j]);
                grillejeu[i][j] = grillejeuresultat0[i][j];
            } else {
                printf("  ");
                grillejeu[i][j] = 2;
            }
        }
        printf("|\n");
        printf("  - - - - - - - - - - - - - - - - -\n");
    }
    printf("\n");
    int masque[8][8];
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (grillejeu[i][j] == 1 || grillejeu[i][j] == 0) {
                masque[i][j] = 1;
            } else {
                masque[i][j] = 0;
            }
        }
    }
    int colonne, ligne, valeur;
    colonne = 0;
    ligne = 0;
    valeur = 0;
    int n = 1;
    int coup;
    int changer =0;
    int temp;
    int nombrevie = vie();
    for(int k = 0; k < 8; k++){
        for(int l = 0; l < 8; l++)
        {
            while(masque[k][l] != masque11[k][l])
            {
                if (changer == 1) {
                    grillejeu[ligne - 1][colonne - 1] = temp;
                    changer = 0;
                }
                // REMPLIR UNE CASE
                printf("Quel case voulez vous remplir ?\n");

                printf("Saisir la ligne :\n");
                scanf("%d", &ligne);
                printf("Saisir la colonne\n");
                scanf("%d", &colonne);


                if (masque[ligne - 1][colonne - 1] == 0) {

                    printf("Quel valeur voulez vous saisir\n");
                    printf("Vous avez actuellement %d vie\n", nombrevie);
                    printf("1. Entrer la valeur 1\n");
                    printf("0. Entrer la valeur 0\n");
                    scanf("%d", &valeur);

                    i = ligne - 1;
                    j = colonne - 1;
                    grillejeu[i][j] = valeur;
                    int variable;

                    if (valeur == grillejeuresultat0[i][j]) {
                        variable = 10;
                    } else {
                        variable = 11;
                    }

                    printf("    a   b   c   d   e   f   g   h\n");
                    printf("  - - - - - - - - - - - - - - - - -\n");
                    for (i = 0; i < 8; i++) {
                        printf("%d ", i + 1);
                        for (j = 0; j < 8; j++) {
                            printf("| ");
                            if (grillejeu[i][j] == 1 || grillejeu[i][j] == 0) {
                                if (variable == 10) {
                                    coup = 1;
                                } else {
                                    coup = 2;
                                }
                                printf("%d ", grillejeu[i][j]);
                                masque[i][j] = 1;
                            } else {
                                printf("  ");
                            }
                        }
                        printf("|\n");
                        printf("  - - - - - - - - - - - - - - - - -\n");
                    }
                    if (coup == 1) {
                        printf("Le coup est correct\n");
                        changer = 0;
                    } else {
                        printf("Le coup est incorrect\n");
                        nombrevie -= 1;
                        changer = 1;
                        printf("Vous perdez une vie\n");
                        printf("Le coup a donc ete modifier\n");
                        if (valeur == 1) {
                            temp = 0;
                        } else {
                            temp = 1;
                        }
                        printf("Vous avez actuellement %d vie\n", nombrevie);
                        if (nombrevie == 0) {
                            printf("Vous avez perdu. Retour au menu principal\n\n");
                            for(i=0;i<8; i++)
                            {
                                for(j=0;j < 8 ; j++)
                                {
                                    (masque[i][j] = masque11[i][j]);
                                }
                                n = 0;
                            }
                        }
                    }
                } else {
                    printf("La valeur a deja ete remplie\n\n");
                }
            }
        }
    }
    if(n == 1){
    printf("----- Bravo tu as gagne ! -----\n");}
}


void jouer_1_8x8() //Fonction qui permet de jouer au takuzu 8x8
{
    int i, j;
    int grillejeuresultat0[10][10] = {{1,0,1,1,0,0,1,0},
                                      {0,0,1,1,0,1,0,1},
                                      {0,1,0,0,1,0,1,1},
                                      {1,0,0,1,0,1,1,0},
                                      {0,1,1,0,1,1,0,0},
                                      {0,1,0,1,0,0,1,1},
                                      {1,0,1,0,1,0,0,1},
                                      {1,1,0,0,1,1,0,0}};
    int masque11[8][8]={{1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},};
    int grillejeu[8][8];
    int alea;
    printf("Grille de Jeu :\n\n");
    printf("    a   b   c   d   e   f   g   h\n");
    printf("  - - - - - - - - - - - - - - - - -\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", i + 1);
        for (j = 0; j < 8; j++) {
            printf("| ");
            alea = rand() % 8;
            if(alea == 1 || alea == 0 || alea == 2 || alea == 3)
            {
                printf("%d ", grillejeuresultat0[i][j]);
                grillejeu[i][j] = grillejeuresultat0[i][j];
            } else {
                printf("  ");
                grillejeu[i][j] = 2;
            }
        }
        printf("|\n");
        printf("  - - - - - - - - - - - - - - - - -\n");
    }
    printf("\n");
    int masque[8][8];
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (grillejeu[i][j] == 1 || grillejeu[i][j] == 0) {
                masque[i][j] = 1;
            } else {
                masque[i][j] = 0;
            }
        }
    }
    int colonne, ligne, valeur;
    colonne = 0;
    ligne = 0;
    valeur = 0;
    int n = 1;
    int coup;
    int changer =0;
    int temp;
    int nombrevie = vie();
    for(int k = 0; k < 8; k++){
        for(int l = 0; l < 8; l++)
        {
            while(masque[k][l] != masque11[k][l])
            {
                if (changer == 1) {
                    grillejeu[ligne - 1][colonne - 1] = temp;
                    changer = 0;
                }
                // REMPLIR UNE CASE
                printf("Quel case voulez vous remplir ?\n");

                printf("Saisir la ligne :\n");
                scanf("%d", &ligne);
                printf("Saisir la colonne\n");
                scanf("%d", &colonne);


                if (masque[ligne - 1][colonne - 1] == 0) {

                    printf("Quel valeur voulez vous saisir\n");
                    printf("Vous avez actuellement %d vie\n", nombrevie);
                    printf("1. Entrer la valeur 1\n");
                    printf("0. Entrer la valeur 0\n");
                    scanf("%d", &valeur);

                    i = ligne - 1;
                    j = colonne - 1;
                    grillejeu[i][j] = valeur;
                    int variable;

                    if (valeur == grillejeuresultat0[i][j]) {
                        variable = 10;
                    } else {
                        variable = 11;
                    }

                    printf("    a   b   c   d   e   f   g   h\n");
                    printf("  - - - - - - - - - - - - - - - - -\n");
                    for (i = 0; i < 8; i++) {
                        printf("%d ", i + 1);
                        for (j = 0; j < 8; j++) {
                            printf("| ");
                            if (grillejeu[i][j] == 1 || grillejeu[i][j] == 0) {
                                if (variable == 10) {
                                    coup = 1;
                                } else {
                                    coup = 2;
                                }
                                printf("%d ", grillejeu[i][j]);
                                masque[i][j] = 1;
                            } else {
                                printf("  ");
                            }
                        }
                        printf("|\n");
                        printf("  - - - - - - - - - - - - - - - - -\n");
                    }
                    if (coup == 1) {
                        printf("Le coup est correct\n");
                        changer = 0;
                    } else {
                        printf("Le coup est incorrect\n");
                        nombrevie -= 1;
                        changer = 1;
                        printf("Vous perdez une vie\n");
                        printf("Le coup a donc ete modifier\n");
                        if (valeur == 1) {
                            temp = 0;
                        } else {
                            temp = 1;
                        }
                        printf("Vous avez actuellement %d vie\n", nombrevie);
                        if (nombrevie == 0) {
                            printf("Vous avez perdu. Retour au menu principal\n\n");
                            for(i=0;i<8; i++)
                            {
                                for(j=0;j < 8 ; j++)
                                {
                                    (masque[i][j] = masque11[i][j]);
                                }
                                n = 0;
                            }
                        }
                    }
                } else {
                    printf("La valeur a deja ete remplie\n\n");
                }
            }
        }
    }
    if(n==1){
    printf("----- Bravo tu as gagne ! -----\n");}
}

void jouer_2_8x8() //Fonction qui permet de jouer au takuzu 8x8
{
    int i, j;
    int grillejeuresultat0[10][10] = {{1,0,0,1,0,0,1,1},
                                      {1,0,1,1,0,1,0,0},
                                      {0,1,0,0,1,0,1,1},
                                      {1,0,1,0,1,1,0,0},
                                      {0,1,0,1,0,0,1,1},
                                      {0,1,1,0,1,0,0,1},
                                      {1,0,0,1,0,1,1,0},
                                      {0,1,1,0,1,1,0,0}};
    int masque11[8][8]={{1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1},};
    int grillejeu[8][8];
    int alea;
    printf("Grille de Jeu :\n\n");
    printf("    a   b   c   d   e   f   g   h\n");
    printf("  - - - - - - - - - - - - - - - - -\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", i + 1);
        for (j = 0; j < 8; j++) {
            printf("| ");
            alea = rand() % 8;
            if(alea == 1 || alea == 0 || alea == 2 || alea == 3)
            {
                printf("%d ", grillejeuresultat0[i][j]);
                grillejeu[i][j] = grillejeuresultat0[i][j];
            } else {
                printf("  ");
                grillejeu[i][j] = 2;
            }
        }
        printf("|\n");
        printf("  - - - - - - - - - - - - - - - - -\n");
    }
    printf("\n");
    int masque[8][8];
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (grillejeu[i][j] == 1 || grillejeu[i][j] == 0) {
                masque[i][j] = 1;
            } else {
                masque[i][j] = 0;
            }
        }
    }
    int colonne, ligne, valeur;
    colonne = 0;
    ligne = 0;
    valeur = 0;
    int n = 1;
    int coup;
    int changer =0;
    int temp;
    int nombrevie = vie();
    for(int k = 0; k < 8; k++){
        for(int l = 0; l < 8; l++)
        {
            while(masque[k][l] != masque11[k][l])
            {
                if (changer == 1) {
                    grillejeu[ligne - 1][colonne - 1] = temp;
                    changer = 0;
                }
                // REMPLIR UNE CASE
                printf("Quel case voulez vous remplir ?\n");

                printf("Saisir la ligne :\n");
                scanf("%d", &ligne);
                printf("Saisir la colonne\n");
                scanf("%d", &colonne);


                if (masque[ligne - 1][colonne - 1] == 0) {

                    printf("Quel valeur voulez vous saisir\n");
                    printf("Vous avez actuellement %d vie\n", nombrevie);
                    printf("1. Entrer la valeur 1\n");
                    printf("0. Entrer la valeur 0\n");
                    scanf("%d", &valeur);

                    i = ligne - 1;
                    j = colonne - 1;
                    grillejeu[i][j] = valeur;
                    int variable;

                    if (valeur == grillejeuresultat0[i][j]) {
                        variable = 10;
                    } else {
                        variable = 11;
                    }

                    printf("    a   b   c   d   e   f   g   h\n");
                    printf("  - - - - - - - - - - - - - - - - -\n");
                    for (i = 0; i < 8; i++) {
                        printf("%d ", i + 1);
                        for (j = 0; j < 8; j++) {
                            printf("| ");
                            if (grillejeu[i][j] == 1 || grillejeu[i][j] == 0) {
                                if (variable == 10) {
                                    coup = 1;
                                } else {
                                    coup = 2;
                                }
                                printf("%d ", grillejeu[i][j]);
                                masque[i][j] = 1;
                            } else {
                                printf("  ");
                            }
                        }
                        printf("|\n");
                        printf("  - - - - - - - - - - - - - - - - -\n");
                    }
                    if (coup == 1) {
                        printf("Le coup est correct\n");
                        changer = 0;
                    } else {
                        printf("Le coup est incorrect\n");
                        nombrevie -= 1;
                        changer = 1;
                        printf("Vous perdez une vie\n");
                        printf("Le coup a donc ete modifier\n");
                        if (valeur == 1) {
                            temp = 0;
                        } else {
                            temp = 1;
                        }
                        printf("Vous avez actuellement %d vie\n", nombrevie);
                        if (nombrevie == 0) {
                            printf("Vous avez perdu. Retour au menu principal\n\n");
                            for(i=0;i<8; i++)
                            {
                                for(j=0;j < 8 ; j++)
                                {
                                    (masque[i][j] = masque11[i][j]);
                                }
                                n = 0;
                            }
                        }
                    }
                } else {
                    printf("La valeur a deja ete remplie\n\n");
                }
            }
        }
    }
    if(n == 1){
    printf("----- Bravo tu as gagne ! -----\n");}
}

void lirelagrille4x4() //Fonction qui permet de resoudre une grille grâce aux regles du takuzu
{
    int i, j;
    int masque11[10][10] = {{1, 1, 1, 1},
                            {1, 1, 1, 1},
                            {1, 1, 1, 1},
                            {1, 1, 1, 1}};

    int grillejeuresultat1[10][10] = {{1, 0, 0, 1},
                                      {0, 1, 0, 1},
                                      {1, 0, 1, 0},
                                      {0, 1, 1, 0}};
    int grillejeu[10][10];
    int masque[10][10];
    int alea;
    printf("Grille de Jeu :\n\n");

    printf("    a   b   c   d\n");
    printf("  - - - - - - - - - \n");
    for (i = 0; i < 4; i++) {

        printf("%d ", i + 1);
        for (j = 0; j < 4; j++) {
            printf("| ");
            alea = rand() % 4;
            if (alea == 1 || alea == 0) {
                printf("%d ", grillejeuresultat1[i][j]);
                grillejeu[i][j] = grillejeuresultat1[i][j];
                masque[i][j] = 1;
            } else {
                printf("  ");
                grillejeu[i][j] = 2;
                masque[i][j] = 0;
            }
        }
        printf("|\n");
        printf("  - - - - - - - - -\n");
    }

    printf("\n");
    int verif;
    int k=0;
    for(int r=0;r<4;r++)
    {
        for(int e =0;e<4;e++)
        {
            while(masque[r][e] != masque11[r][e])
            {

            //METTRE UNE NOUVELLE GRILLE
            printf("Grille apres la regle %d\n",k+1);
            printf("    a   b   c   d\n");
            printf("  - - - - - - - - - \n");
            for (i = 0; i < 4; i++) {
                printf("%d ", i + 1);
                for (j = 0; j < 4; j++) {
                    printf("| ");
                    if (grillejeu[i][j] == 1 || grillejeu[i][j] == 0) {
                        if (k == 0) {
                            // Entre deux 0, il y a un 1 ( LIGNE)
                            if(grillejeu[i][j] == 0 && grillejeu[i][j+2] == 0){
                                grillejeu[i][j+1]=1;
                                masque[i][j+1]=1;
                            }

                        }
                        if (k == 1) {
                            // Entre deux 0, il y a un 1 (COLONNE)
                            if(grillejeu[i][j] == 0 && grillejeu[i+2][j] == 0){
                                grillejeu[i+1][j]=1;
                                masque[i+1][j]= 1;
                            }
                        }
                        if (k == 2) {
                            //Entre deux 1, il y a un 0 (LIGNE)
                            if(grillejeu[i][j] == 1 && grillejeu[i][j+2] == 1){
                                grillejeu[i][j+1]=0;
                                masque[i][j+1]=1;

                            }
                        }
                        if (k == 3) {
                            //Entre deux 1, il y a un 0 (COLONNE)
                            if(grillejeu[i][j] == 1 && grillejeu[i+2][j] == 1){
                                grillejeu[i+1][j]=0;
                                masque[i+1][j]= 1;

                            }

                        }
                        if (k == 4) {
                            //Si il y a deux 1 aux extremité alors il y a deux 0 au millieu (LIGNE)
                            if(grillejeu[i][j] == 1 && grillejeu[i][j+3] == 1){
                                grillejeu[i][j+1]=0;
                                grillejeu[i][j+2]=0;
                                masque[i][j+1]=1;
                                masque[i][j+2]=1;

                            }
                        }
                        if (k == 5) {
                            //Si il y a deux 0 aux extremité alors il y a deux 1 au millieu (LIGNE)
                            if(grillejeu[i][j]== 0 && grillejeu[i][j+3 ]== 0)
                            {

                                grillejeu[i][j+2]=1;
                                masque[i][j+2]=1;

                            }
                        }
                        if (k == 6) {
                            // Si il y a deux 1 aux extrémité alors il y a deux 0 au millieu (colonne)
                            if(grillejeu[i][j] == 1 && grillejeu[i+3][j] == 1){
                                grillejeu[i+1][j]= 0;
                                grillejeu[i+2][j]= 0;
                                masque[i+1][j] = 1;
                                masque[i+2][j] = 1;


                            }
                        }
                        if (k == 7) {
                            // Si il y a deux 0 aux extrémité alors il y a deux 1 au millieu (colonne)
                            if(grillejeu[i][j] == 0 && grillejeu[i+3][j] == 0){
                                grillejeu[i+1][j] = 1;
                                grillejeu[i+2][j] = 1;
                                masque[i+1][j]=1;
                                masque[i+1][j]=1;

                            }

                        }
                        printf("%d ", grillejeu[i][j]);
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("|\n");
                printf("  - - - - - - - - - \n");

            }
            printf("\n");
                if (k == 0){
                    printf("Regle %d : Entre deux 0, il y a toujours un 1 (LIGNE)\n",k+1);
                }
                if (k == 1){
                    printf("Regle %d : Entre deux 0, il y a toujours un 1 (COLONNE)\n",k+1);
                }
                if(k == 2){
                    printf("Regle %d : Entre deux 1, il y a toujours un 0 (LIGNE)\n",k+1);
                }
                if(k == 3){
                    printf("Regle %d : Entre deux 1, il y a toujours un 0 (COLONNE)\n",k+1);
                }
                if(k == 4){
                    printf("Regle %d : Lorsqu'il y a deux 1 aux extremites, il y a toujours deux 0 au millieu (LIGNE)\n",k+1);
                }
                if(k == 5){
                    printf("Regle %d : Lorsqu'il y a deux 0 aux extremites, il y a toujours deux 1 au millieu (LIGNE)\n",k+1);
                }
                if(k == 6){
                    printf("Regle %d : Lorsqu'il y a deux 1 aux extremites, il y a toujours deux 0 au millieu (COLONNE)\n",k+1);
                }
                if(k == 7){
                    printf("Regle %d : Lorsqu'il y a deux 0 aux extremites, il y a toujours deux 1 au millieu (COLONNE)\n",k+1);
                }
            printf("Appuyez sur ENTER pour voir la prochaine etape\n");
                getch();
            k += 1;
            if(k== 8){
                k=0;
            }

        }
        }
    }
    printf("La grille de Takuzu a ete resolue\n\n");
}