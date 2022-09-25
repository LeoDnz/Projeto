#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, t1 = 1, t2 = 1, proxTermo;

    printf ("Digite a quantidade de termos:");
    scanf ("%d", &n);

    printf ("SERIE DE FIBONACCI \n \n");

    for (i = 1; i <= n; i++) {

        printf ("%d \n", t1);
         proxTermo = t1 + t2;
         t1 = t2;
         t2 = proxTermo;
    }

    return 0;
}
