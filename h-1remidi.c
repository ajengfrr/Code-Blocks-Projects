//jumlah karakter dan spasi
#include<stdio.h>
#include<conio.h>
int main()
{
char kar;
int jkar=0, jumspasi=0, karakter;

printf("Masukkan sebuah kalimat dan akhiri dengan ENTER \n");
printf("Saya akan Menghitung Jumlah karakter dari kalimat tersebut \n");


while((kar = getchar()) != '\n')
{
jkar++;
if (kar == ' ' ) jumspasi++;
karakter = jkar - jumspasi;
}
printf("Jumlah karakter= %d\n", karakter);
printf("Jumlah spasi= %d\n", jumspasi);
getch();
}
