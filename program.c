#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int tonChoix = 0;
	double cfa = 0;
	double euro = 0;
	printf("1-Convertir des cfa en euro \n 2-convertir des euros en cfa ");
	scanf("%d", &tonChoix);
	if (tonChoix = 1)
	{
		printf("veuillez entrer la valeur à convertir en euro! ");
		scanf("%lf", &cfa);
		euro = (cfa/670);
		printf("En euro, cela donne %lf euro ", euro);
	}

	else if(tonChoix = 2)
	{
		printf("veuillez entrer la valeur à convertir en cfa ! ");
		scanf("lf", &euro);
		cfa = (euro*670);
		printf("En cfa, cela donne %lf", cfa);
	}else{
		printf("ce n'est pas de l'amusement gamin ");
	}	 
	
	return 0;
}
