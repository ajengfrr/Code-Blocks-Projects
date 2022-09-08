#include<stdio.h>
int main()
{

    int star=1,space=4,a,b,c;
    for (a=1;a<=5;a++) {
            for(b=space;b>=1;b--) {
                printf(" ");
            } for (c=1;c<=5*4;c++) {
            printf("X");
            } for(b=1;b<=star;b++) {
            printf("*");
            }
            printf("\n");
            if(a>=1) {
                space -=1;
                star +=2;
            }
}
}
