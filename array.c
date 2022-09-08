#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    /*
    int n,i,jumlah=0;
    printf("masukkan data : ");
    scanf("%i",&n);
    int tinggi[n];
    for(i=0;i<n;i++) {
        printf("nilai tinggi ke-%i = ",i);
        scanf("%i",&tinggi[i]);
    }
    for(i=0;i<n;i++) {
        printf("%i, ",tinggi[i]);
    }
    for(i=0;i<n;i++) {
            jumlah+=tinggi[i];
    }
    printf("jumlah data= %d",jumlah);
    return 0;


    int n,m,i,j;
    printf("masukkan baris : ");
    scanf("%d",&n);
    printf("masukkan kolom : ");
    scanf("%d",&m);
    int matriks[n][m];
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("ini matriks indeks %i %i : ",i,j);
            scanf("%i",&matriks[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%d ",matriks[i][j]);
        }
        printf("\n");
    }
    */

    char nama[25],i;
    printf("masukkan nama : ");
    //scanf("%s",&nama);
    //gets(nama);
    scanf("%[^\n]",&nama);
    //printf("%s",nama);
    //for(i=0;i<strlen(nama);i++) {
     //   printf("%c",nama[i]);
     for(i=strlen(nama)-1;i>=0;i--) {
        printf("%c",nama[i]);
    }
}
