#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j;
    printf(" x !");
    for( i=1;i<11;i++){
    printf("%2i",i);
    }
    printf("\n");
    printf("%s","-------------------------");
    printf("\n");
    for( i=1;i<11;i++){
    printf("%2i !",i);
    for( j=1;j<11;j++)
    {
    printf("%2i",i*j);
    }
    printf("\n");
    }
    printf("%s","---------------------------");
    return (0);
}

    