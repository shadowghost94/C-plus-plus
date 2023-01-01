#include "stdio.h"
#include "math.h"
using namespace std;
int main()
{
	int v1, v2;
	do{

printf("Entrer une premiere valeur svp !: ");
scanf(("%d"), &v1);

printf("Entrer une deuxieme valeur svp !: ");
scanf(("%d"), &v2);

if (v1>v2)
	printf("la plus grande valeur est %d ", v2);
else
printf("la plus grande valeur est %d ", v1);
}
while(v2=!v1);
return 0;

}
