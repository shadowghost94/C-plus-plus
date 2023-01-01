#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int VotreChoix;
	/* fabs est utilisé pour les valeurs absolu
		ceil est utilisé pour renvoyé le premier nombre entier après le nombre decimal qu'on lui donne
		floor est utilisé pour l'inverse de ceil
		pow est utilisé pour les puissances
		sqrt est utilisé pour la racine carré */
	printf("===MENU===\n");
	printf("1.ROYAL CHEESE\n");
	printf("2.Mc DELUXE\n");
	printf("3.Mc BACON\n");
	printf("4.BIG MAC\n");
	printf("votre choix maintenant :\n");
	scanf("%d", &VotreChoix);
	printf("/n");

	switch (VotreChoix)
		{
			case 1:
				printf("vous avez choisi le royal cheese !");
				break;
			case 2:
				printf("vous avez choisi le Mc DELUXE");
				break;
			case 3:
				printf("vous avez choisi le Mc BACON");
				break;
			case 4:
				printf("vous avez choisi le BIG MAC");
				break;
			default:
				printf("me prend pour con !, essaye donc d'entrer une valeur exacte.\n");
				break;

		}

	return 0;

}