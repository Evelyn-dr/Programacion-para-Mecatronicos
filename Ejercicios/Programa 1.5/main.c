#include <stdio.h>

void main(void)
{
    int i=5, j=7, k=3, ml;
    float x = 2.5, z = 1.8, t;
    ml = ((j % k) / 2) + 1;
    ml += i;
    ml %= --i;
    printf("\nEl valor de m1 es: %d, m1");

    t = ((float) (j % k) / 2);
    t++;
    x *= ++z;
    t -= (x += ++i);
    printf("\nEl valor de t es: %.2f", t);
}
