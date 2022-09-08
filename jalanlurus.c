#include<stdio.h>
int main()
{
    int i,j,jarak;
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
}
