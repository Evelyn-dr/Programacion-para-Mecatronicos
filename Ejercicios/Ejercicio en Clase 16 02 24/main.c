#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *ptrd;
    int *num;
    int a[100];

    double dl = 18.0;
    int intl = 97;
    printf("\nValor de dl = %lf",dl);
    ptrd = &dl;//& operador de direccion
    *ptrd = 125.5; //* operaodr de in direccion

    printf("\nValor de dl = %lf",dl);
    printf("\nValor de dl = %lf",*ptrd);

    printf("\nDireccion de dl: %p",&dl);
    //un puntero es un numero entero a 64 bits

    printf("\n Dimenciones de dl:%d",sizeof(dl));
    printf("\n Dimenciones de a[100]:%d",sizeof(a));
    printf("\n Dimenciones de a[1]:%d",sizeof(*a));
    printf("\n Dimenciones de int:%d",sizeof(intl));
    return 0;
}
