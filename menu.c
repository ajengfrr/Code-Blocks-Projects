#include<stdio.h>
int main()
{
    int pilihan,nilai,tinggi,i,j,k;
    do { printf("Pilihan Menu : \n");
        printf("1. Ganjil Genap\n");
        printf("2. Jajar Genjang\n");
        printf("3. Keluar\n");
        printf("Masukkan Pilihan : ");
        scanf("%d",&pilihan);
        switch(pilihan) {
    case 1 :
        printf("Masukkan nilai : ");
        scanf("%i",&nilai);
        if(nilai%2==0) {
            printf("%d adalah bilangan genap\n\n",nilai);
        }
        else {
            printf("%d adalah bilangan ganjil\n\n",nilai);
        }
        break;
    case 2 :
        printf("Masukkan tinggi : ");
        scanf("%d", &tinggi);
        for(i=0;i<tinggi;i++) {
            for(j=0;j<tinggi-i;j++) {
                printf(" ");
            } for (k=0;k<tinggi*2;k++) {
            printf("*");
            }
            printf("\n");
        }
        break;
    default :
        printf("SALAH INPUT\n\n");
        }
    } while(pilihan!=3);
}
