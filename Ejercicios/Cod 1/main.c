#include <stdio.h>

/* Apuntadores y arreglos */

void main(void)
{
    int V1[4] = { 2, 3, 4, 7 }, V2[4] = { 6 };
    int* AX, * AY;
    int *ptr;
    printf("\n\n------ 1 -------");
    for(int i = 0; i<4; i++)
    {
        printf("\nV1[%d]=%d",i,V1[i]);
    }
    printf("\n");
    for(int i = 0; i<4; i++)
    {
        printf("\nV2[%d]=%d",i,V2[i]);
    }

    AX = &V1[3];//el valor 7
    AY = &V2[2];//valor 0
    V1[V2[0] - V1[2]] = *AY;//6-4=2 V1[2]=0
    *AY = *AX - V1[0];//V2[2]=7-2
    printf("\n\n------ 2 -------");
    for(int i = 0; i<4; i++)
    {
        printf("\nV1[%d]=%d",i,V1[i]);
    }
    printf("\n");
    for(int i = 0; i<4; i++)
    {
        printf("\nV2[%d]=%d",i,V2[i]);
    }

    V2[1] = ++ * AX;//V2[1]= ++7
    printf("\nAY = %d",*AY);
    V2[3] = (*AY)++;//V2[3]=
    printf("\nAY = %d",*AY);
    *AX += 2;

    printf("\n\n------ 3 -------");
    for(int i = 0; i<4; i++)
    {
        printf("\nV1[%d]=%d",i,V1[i]);
    }
    printf("\n");
    for(int i = 0; i<4; i++)
    {
        printf("\nV2[%d]=%d",i,V2[i]);
    }

    printf("\n\n------ 4 -------");
    ptr = &V1[0];
    for(int i = 0; i<4; i++,ptr= ptr+1)
    {
        printf("\nV1[%d]=%d",i,*ptr);
        printf("\nV1[%d]=%d",i,V1[i]);
    }
}
