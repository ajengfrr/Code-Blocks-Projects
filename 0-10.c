#include<stdio.h>
int main()
{
    int a,b;
    int i;
    printf("nilai awal : ");
    scanf("%d",&a);
    printf("batas : ");
    scanf("%d",&b);
    /*
    //while
    while(a<=b) {
        printf("%d",a);
        a++;
    }

    while(a>=b) {
        printf("%d",a);
        a--;
    }

    //do while
    do {
        printf("%d",a);
        a--;
    } while(a>=b);

    //for
    for(i=a;i<=b;i++) {
        printf("%d",a);
        a++;
    }

    //ganjil
    for(i=a;i<=b;i++) {
        if(i%2!=0) {
            printf("%d",i);
        }
    }
*/
    //ganjil genap
    if(a%2==0) {
        printf("bilangan genap: ");
        for(i=a;i<=b;i++) {
            if(i%2==0) {
                printf("%i",i);
            } else {
            continue;
            }
        }
    } else {
    printf("bilangan ganjil: ");
    for(i=a;i<=b;i++) {
        if(i%2==1) {
            printf("%i",i);
        } else {
        continue;
        }
    }
    }
}
