#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int V_aleatoire =0, min =0, max =100, nombre_entrer =0;
    printf("veuillez entrer une valeur reel !");
    scanf("%d", &nombre_entrer);
    V_aleatoire=srand()%((max-min)+min);
    if(V_aleatoire=nombre_entrer)
    {
        printf("Trouver ! vous êtes un grand genie.");
    }
    else if(V_aleatoire != nombre_entrer)
    {
        printf("Rate ! veuillez reessayer.")
    }

    else("tu fou quoi ? j'ai dit pas de zéro !");
return 0;
}
