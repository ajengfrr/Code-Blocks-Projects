#include<stdio.h>
int main()
{
    int i,j,k,jarak,bintang;
    //cerobong
    for(i=0;i<5;i++) {
        for(j=0;j<5;j++){
            printf(" ");
        }
        for(j=0;j<5;j++) {
            printf("|");
        }
        printf("\n");
    }
    //atap
    bintang=0;
    jarak=5;
    for(i=0;i<5;i++) {
        for(j=0;j<jarak;j++) {
            printf(" ");
        }
        for(j=0;j<5*3;j++) {
            printf("H");
        }
        for(j=0; j<=bintang; j++){
            printf("*");
        }
        printf("\n");
        if(i>=0) {
            jarak-=1;
            bintang+=2;
        }
    }
    //tembok
    for (i=0;i<=5;i++) {
        for(j=0;j<=5*3;j++) {
            printf("H");
        } for(j=0;j<5*2-1;j++) {
        printf("F");
        }
        printf("\n");
        }
}
