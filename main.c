#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double absolu = 0.0;
    float nombre = 0.0;
    printf("Entrez un nombre :\t");
    scanf ("%f", &nombre);
      absolu=fabs(nombre);
    printf ("La valeur absolue de votre nombre est : %f", absolu);
    return 0;
}
