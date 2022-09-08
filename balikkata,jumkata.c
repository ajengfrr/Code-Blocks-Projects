#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char kalimat[100];
int i,j,jumkata=0;
printf("Masukkan kalimat : ");
gets(kalimat);
//balik kata
char*var=strtok(kalimat," ");
    while(var!=NULL)
    {
        printf("%s",strrev(var));
        var=strtok(NULL," ");
        printf(" ");
    }
//hitung kata
    for(i=0;i<=strlen(kalimat);i++)
    {
        if(kalimat[i]==32) jumkata++;
    }
    printf("\njumlah kata : %d",jumkata+1);
    getch();
}
