#include<stdio.h>
#include<conio.h>
void bintang(int n, int m)
{
    int a,b;
    for(a=1;a<=n;a++)
    {
        printf("\n");
        for(b=1;b<=m;b++)
            printf("*");
    }
}
int main()
{
    bintang(4,5);
    getch();
}
