#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int valeatoire = 0, NombreUser = 0;
	const max = 100, min =1;

	srand(time(NULL));
	valeatoire=(rand()%(max-min+1)+min+2);

	do{
		printf("veuillez entrer une variable svp !\n");
		scanf("%d", &NombreUser);

		if (NombreUser=valeatoire)
		{
			printf("Trouver ! vous etes un genie\n");
		}else{
			printf("NON ! Encore un effort vous etes proche ");
		}
	}
	 while(	NombreUser =valeatoire);
	
	return 0;
	
}
