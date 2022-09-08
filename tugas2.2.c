#include<stdio.h>
#include<stdio.h>
int main()
{
    int n,t,sum=0,remainder;
    printf("Masukkan sebuah integer\n");
    scanf("%d",&n);
    t=n;
    while(t!=0) {
        remainder=t%10;
        sum=sum+remainder;
        t=t/10;
    }
    printf("\n\nJumlah masing-masing digit %d=%d\n",n,sum);
}
