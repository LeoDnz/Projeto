#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf ("Digite um numero:");
    scanf ("%d", &numero);

    while (numero >= 0)
    {
        printf ("%d \n20
                ", numero);
        numero--;
    }

    return 0;
}
