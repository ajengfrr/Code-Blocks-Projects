#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,m,i,j,pilihan;
    printf("masukkan baris : ");
    scanf("%d",&n);
    printf("masukkan kolom : ");
    scanf("%d",&m);
    int matriks1[n][m],matriks2[n][m],hasil[n][m];
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("masukkan matriks 1 indeks [%i][%i] : ",i,j);
            scanf("%i",&matriks1[i][j]);
        } printf("\n");
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("masukkan matriks 2 indeks [%i][%i] : ",i,j);
            scanf("%i",&matriks2[i][j]);
        } printf("\n");
    }
    printf("matriks 1\n");
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%d ",matriks1[i][j]);
        } printf("\n");
    } printf("\n");
    printf("matriks 2\n");
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%d ",matriks1[i][j]);
        } printf("\n");
    }
    printf("\n1.penjumlahan \n2.pengurangan");
    printf("\nmasukkan pilihan : ");
    scanf("%d",&pilihan);
    switch(pilihan) {
        case 1 :
            printf("matriks 1\n");
        for(i=0;i<n;i++) {
            for(j=0;j<m;j++) {
                hasil[i][j]=matriks1[i][j]+matriks2[i][j];
            } printf("\n");
        }
        break;
            case 2 :
            printf("matriks 2\n");
        for(i=0;i<n;i++) {
            for(j=0;j<m;j++) {
                hasil[i][j]=matriks1[i][j]-matriks2[i][j];
            } printf("\n");
        }
        break;
    } printf("hasil :\n");
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%d ",hasil[i][j]);
        } printf("\n");
    }
}
