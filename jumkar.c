#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{

    char teks[20];
    int a,besar,kecil;
    besar=0,kecil=0;
    printf("Masukkan kalimat : ");
    gets(teks);
    while((teks=getchar())!='\n') {
        if (teks >='A'&&teks<='Z') {
            besar++;
        }
        else if(teks>='a'&&teks<='z') {
            kecil++;
        }
    }
    printf("Jumlah Huruf Besar : %d \nJumlah Huruf Kecil : %d", besar, kecil);
    return 0;
}
