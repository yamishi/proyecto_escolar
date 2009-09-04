#include <stdio.h>

int numeros[11];
int x, y, p, i;

int par_imparf(x)
{
    for(x=1; x!=11; x++)
    {
     if(numeros[x] % 2 == 0)
         {
         printf("El numero %i es par\n", numeros[x]);
         ++p;
         }
     else
         {
         printf("El numero %i es impar\n", numeros[x]);
         ++i;
         };
    };
}

int main()
{
    for(y=1; y!=11; y++)
    {
     printf("introduce el numero %i :\n", y);
     scanf("%i", &numeros[y]);
    }

    par_imparf();

    printf("\npares: %i\nimpares: %i\n", p, i);

    system("pause");
}

