#include<stdio.h>
int main()
{
    int pilihan,tinggi,i,j,k,jarak,bintang,jalan;
    char y;
    do { printf("Menu Pilihan : \n");
        printf("1. Rumah\n");
        printf("2. Arah Jalan\n");
        printf("3. Keluar\n");
        printf("Masukkan Pilihan : ");
        scanf("%d",&pilihan);
        switch(pilihan) {
    case 1 :
        printf("Masukkan tinggi rumah : ");
        scanf("%d",&tinggi);
        //cerobong
    for(i=0;i<tinggi;i++) {
        for(j=0;j<tinggi;j++){
            printf(" ");
        }
        for(j=0;j<tinggi;j++) {
            printf("|");
        }
        printf("\n");
    }
    //atap
    bintang=0;
    jarak=tinggi-1;
    for(i=0;i<tinggi;i++) {
        for(j=0;j<jarak;j++) {
            printf(" ");
        }
        for(j=0;j<tinggi*3;j++) {
            printf("H");
        }
        for(j=0;j<=bintang;j++){
            printf("*");
        }
        printf("\n");
        if(i>=0) {
            jarak-=1;
            bintang+=2;
        }
    }
    //tembok
    for (i=0;i<=tinggi;i++) {
        for(j=0;j<tinggi*3;j++) {
            printf("H");
        } for(j=0;j<tinggi*2-1;j++) {
        printf("F");
        }
        printf("\n");
        }

    printf("Apakah rumah mau dibalik?y/t?");
    scanf(" %c",&y);
    if(y=='y') {
        //cerobong
    for(i=0;i<tinggi;i++) {
        for(j=0;j<tinggi*3+1;j++){
            printf(" ");
        }
        for(j=0;j<tinggi;j++) {
            printf("|");
        }
        printf("\n");
    }
    //atap
    bintang=1;
    jarak=tinggi-1;
    for(i=0;i<tinggi;i++) {
        for(j=0;j<jarak;j++) {
            printf(" ");
        }
        for(j=0;j<bintang;j++) {
            printf("*");
        }
        for(j=0;j<=tinggi*3;j++){
            printf("H");
        }
        printf("\n");
        if(i>=0) {
            jarak-=1;
            bintang+=2;
        }
    }
    //tembok
    for (i=0;i<=tinggi;i++) {
        for(j=0;j<tinggi*2-1;j++) {
            printf("F");
        }
        for(j=0;j<=tinggi*3;j++) {
            printf("H");
        }

        printf("\n");
        }
    }

    break;
    case 2 :
        printf("Pilih Membuat Jalan : \n");
        printf("1. Jalan lurus\n");
        printf("2. Jalan kanan\n");
        printf("3. Jalan Kiri\n");
        printf("Masukkan mau ke jalan yang mana : ");
        scanf("%d",&jalan);
        switch(jalan) {
    case 1 :
        //jalan lurus
    for(i=0;i<10;i++) {
            for(j=0;j<10;j++) {
                printf(" ");
            }
        if(i%2==0) {
            printf("|   |   |");
        }
        else {
            printf("|       |");
        }
        printf("\n");
    }
    break;
    case 2 :
    //kekanan
    jarak=10;
    for(i=0;i<11;i++) {
        for(j=0;j<jarak;j++) {
            printf(" ");
        }
        if(i%2==0) {
            printf("/   /   /");
        }
        else {
            printf("/       /");
        }
        printf("\n");
        if(i>=0) {
            jarak-=1;
        }
    }
    break;
    case 3 :
    //kekiri
    jarak=0;
    for(i=0;i<11;i++) {
        for(j=0;j<jarak;j++) {
            printf(" ");
        }
        if(i%2==0) {
            printf("\\   \\   \\");
        }
        else {
            printf("\\       \\");
        }
        printf("\n");
        if(i>=0) {
            jarak+=1;
        }
    }
    break;
        }
    }
    } while(pilihan!=3);
}
