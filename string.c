#include<stdio.h>

#define MAX 256

#include<string.h>
int main()
{
    /*char name[15];
    printf("Masukkan nama: ");
    //gets(name);
    scanf("%s",&name);
    printf("\nHallo %s selamat stress di kelas pemrograman",name);
*/

     int i, jumkar=0;
     char teks[MAX];
     puts("Masukkan sebuah kalimat: ");
     fgets(teks,sizeof teks,stdin);
     for(i=0;teks[i];i++)
        jumkar++;
     printf("Jumlah karakter = %d",jumkar);
     //nb:spasi dan kedip" diitung


     /*
     char teks[10];
     printf("Masukkan sebuah kalimat");
     scanf("%s",&teks);
     */
}
