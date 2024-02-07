#include <stdio.h>

void main(void)
{
   float PAG, SPA;
   SPA = 0;
   printf("Ingrese el primer pago:\t");
   scanf("%f", &PAG);
   while (PAG)
   {
       SPA = SPA + PAG;
       printf("Ingrse el siguiente pago:\t ");
       scanf("%f", &PAG);

   }
   printf("\nEl total de los pagos de mes es: %2f", SPA);
}
