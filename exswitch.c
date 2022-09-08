#include<stdio.h>
int main()
{
    int nilai;
    printf("Masukkan nilai anda : ");
    scanf("%d", &nilai);
    /*if(nilai>=80) {
        printf("Bagus sekali\n");
    } else if(nilai>=70) {
    printf("Bagus\n");
    } else if(nilai>=50) {
    printf("Cukup\n");
    } else {
    printf("Belajar lagi");
    }
    */
    switch(nilai) {
case 80 :
    printf("Bagus sekali\n");
    break;
case 50 :
    printf("Bagus\n");
    break;
    default:
        printf("Gimana ini?\n");
    }
}
