# Takuzu
#-----------------------------
#
#	Le jeu du TAKUZU 
#
#-----------------------------
#
# Lorsque l'on demarre le code  un menu s'affiche proposant 5 actions a choisir en saisant le chiffre correspondant a l'action :

#	- Lorsque l'utilisateur appuie sur la touche 0 le programme se ferme


#	- La premier est "Resoudre une grille" : qui va afficher un autre menu pour choisir sois une grille de jeu de 4 par 4 ou une grille de 8 par 8 
   							  Après avoir choisir la taille de grille, l'utilsateur a le choix entre		 - Saisir manuellement un masque en entrant le numéro 1
	
#																			   L'utilisateur dois saisir les coordonnées d'une case, le nombre de cases changent selon la taille de la grille, puis il doit choisir entre la valeur 1 ou 0 correspondant a la case
																			   Ensuite la grille de jeu est affichée

#																		 - Generer automatiquement un masque en entrant le numéro 2
		
#																			   Une grille de jeu mais aussi le masque généré est affiché aléatoirement

#																	 - Jouer en entrant le numéro 3
#																		
																			   Une grille de jeu est affiché, permettant l'utilisateur de reflechi a la resolution de la grille de Takuzu. Il dispose  de 3 vies, si le nombre de vie est égal a 0, le jeu se ferme et retourne sur le menu principal
																																			      si l'utilisateur reussi a completer entierement la grille sans mettre ses 3 vies, alors un message de Feleciation s'affiche.

#        - Le deuxieme est " Resoudre automatiquement une grille" : qui va afficher une grille de jeu puis appliquer les différentes regles du TAKUZU, pour passer a la regle l'utilisateur dois appuyer sur la touche entrer, jusqu'a que la grille sois remplie.

# - Le troisieme est de generer une grille (en cours)
	
# - Le quatrième est d'afficher les règles pour jouer au TAKUZU


#-----------------------------
#-----------------------------

#Les fonctions :
		 menu() : Permet d'afficher le menu principale
		 sous_menu() : Permet d'afficher : Permet d'afficher le menu  après choisi la taille 
		 sous_menu_taille_grille() : Permet d'afficher le menu de choix de taille de la grille
                 saisir_masque_4x4() : Permet de saisir manuellement un masque 4x4
                 saisir_masque_8x8() : Permet de saisir manuellement un masque 8x8
		 masque_grille_0_alea4x4 , masque_grille_1_alea4x4 , masque_grille_2_alea4x4, masque_grille_3_alea4x4 : Permet d'afficher un masque et une grille de jeu aléatoirement 4x4
		 masque_grille_3_8x8() , masque_grille_2_8x8() , masque_grille_1_8x8() ,masque_grille_0_8x8() : Permet d'afficher un masque et une grille de jeu aléatoirement 8x8
		 vie() = definie les vies
		 jouer_0_4x4() , jouer_1_4x, jouer_2_4x4 : Permet a l'utilisateur de jouer au Takuzu avec une grille 4x4
		 jouer_0_8x8(), jouer_1_8x8() , jouer_2_8x8() : Permet a l'utilisateur de jouer au Takuzu avec une grille 8x8
		 lirelagrille4x4() : permet d'appliquer les différentes regles connu du Takuzu, en appuyant sur entrer
                      regles() : Permet d'afficher les regles du Takuzu
