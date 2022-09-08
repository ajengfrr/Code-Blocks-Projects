#include<stdio.h>
int main()
{
    int i,j,jarak;
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
}

