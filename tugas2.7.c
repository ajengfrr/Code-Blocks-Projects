#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    printf("Tuliskan string1=");
    gets(a);

    printf("\nTuliskan string2=");
    gets(b);

    strcat(a,b);
    printf("\nKalo digabung menjadi %s",a);
    getch();
}
