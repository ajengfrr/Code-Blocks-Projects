#include<stdio.h>
float minimum(float, float);
int main()
{
    float a,b,kecil;
    printf("Masukkan nilai a : ");
    scanf("%f",&a);
    printf("Masukkan nilai b : ");
    scanf("%f",&b);

    kecil=minimum(a,b);
    printf("\nBilangan terkecil antara %g dan %g adalah %g",a,b,kecil);
}
float minimum(float x,float y)
{
    if(x<y)
        return(x);
    else
        return(y);
}
