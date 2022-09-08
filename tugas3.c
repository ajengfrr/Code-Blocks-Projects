#include<stdio.h>
#include<conio.h>
//Ricky Arindra Wijaya(672019212)
//Ajeng Febriana Rahmawati(672019323)

int main()

{
    char Nama1[100], Nama2[100];
    int NIM1, NIM2, pilihan;
    float ipk1, ipk2, rata;

    printf("Masukan Nama 1 : ");
    scanf("%s", &Nama1);

    printf("Masukan Nim 1 : ");
    scanf("\n %d", &NIM1);

    printf("Masukan IPK 1 : ");
    scanf("\n %f", &ipk1);

    printf("\n\nMasukan Nama 2 : ");
    scanf("%s", &Nama2);

    printf("Masukan Nim 2 : ");
    scanf("\n %d", &NIM2);

    printf("Masukan IPK 2 : ");
    scanf("%f", &ipk2);

    printf("Pilih segitiga yang mana? ");
    scanf("\n %d", &pilihan);

    rata = (ipk1 + ipk2)/2;

    printf("\nHai %s dan %s \nNIM kalian %d dan %d \nRata-rata IPK Kalian %f \n", Nama1, Nama2, NIM1, NIM2, rata);

    printf("Pilihan Segitiga Kalian :\n");
    if (pilihan == 1)
        {
            int i,j,k;

            for(i=1;i<=3;i++)
            {
                for(j=1;j<=5;j++)
                {
                    if(j>=3-(i-1) && j<=3+(i-1))
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
        else if (pilihan == 2)
            {
            int i,j,k;

            for(i=1;i<=9;i++)
            {
                for(j=1;j<=3;j++)
                {
                    if(i>=3-(j-1) && i<=3+(j-1))
                        {
                            printf("*");
                        }
                    else
                        {
                            printf("");
                        }
                }
                printf("\n");
            }
            }
getch();
}
