#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,pangkat,bagi;
    char operasi;
    do {
        printf("masukkan angka pertama: ");
        scanf("%f",&a);
        printf("masukkan angka kedua: ");
        scanf("%f",&b);
        printf("\n\n< ^ > pangkat");
        printf("\n< / > pembagian");
        printf("\n\nmasukkan operasi: ");
        scanf(" %c",&operasi);
        switch(operasi) {
    case '^' :
        pangkat=pow(a,b);
        printf("%.2f",pangkat);
        break;
    case '/' :
        bagi=a/b;
        printf("%.2f",bagi);
        break;
    case 'x' :
        printf("\n");
        system("cls");
        break;
    default :
        printf("selesai");
        }
    } while(operasi=='x');
    getch();
}
