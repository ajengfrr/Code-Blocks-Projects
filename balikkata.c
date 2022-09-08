#include<stdio.h>
#include<string.h>
int main()
{
    char kalimat[99];
    printf("Masukkan kalimat : ");
    gets(kalimat);
    char*var=strtok(kalimat," ");
    while(var!=NULL)
    {
        printf("%s",strrev(var));
        var=strtok(NULL," ");
        printf(" ");
    } printf("\n");
}
