#include <stdio.h>
#include <math.h>

void parimp(int, int *, int *)

void main(void)

{
     int I, N, NUM, PAR = 0, IMP = 0;
    printf("\nIngresa el numero de datos: ");
    scanf("%d", &N);
    for 9I =1; I <= N; I++)
    {
        printf("Ingresa el numero de %d:", I);
        scanf("%d", &NUM);
        parimp(NUM< &PAR, &IMP);
    }

    printf("\nNUmero de pares: %d", PAR);
    printf("\nNumero de impares: %d", IMP);
}
    void parimp(int NUM, int *P, int *I)
{
   int RES;
    RES = pow(-1,  NUM);
    if (RES > 0)
        *P += 1;
    else
        if (RES < 0)
            *I += 1;
}

