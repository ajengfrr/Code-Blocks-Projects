#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Mau tinggi berapa piramidanya = ");
    scanf("%d", &n);
    for(i=1;i<=3*n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i>=n-(j-1) && i<=n+(j-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
