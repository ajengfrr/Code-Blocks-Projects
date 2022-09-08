#include <stdio.h>
#include <conio.h>
#include <string.h>

//Ajeng Febriana Rahmawati 672019323
//Johannes Satria P.K 672019188

void main()
{
    char kalimat[20];
    int x,y;
    printf("Input : ");
    gets(kalimat);
    x = strlen(kalimat);
    strupr(kalimat);
    printf("Output : ");
    for(y=0; y<x; y++){
        printf("%c", kalimat[x-1-y]);
    }getch();
}
