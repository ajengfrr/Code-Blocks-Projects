#include <stdio.h>
#include <stdlib.h>

#define minBesar    65
#define maxBesar    90
#define minKecil    95
#define maxKecil    122
//Ajeng Febriana Rahmawati 672019323
//Johannes Satria P.K 672019188

int main()
{
    int besar, kecil;
    long in;
    besar = kecil = 0;
    printf("Masukkan kalimat");
    while((in = getchar()) != EOF && in != '\n') {
        if (in >= minBesar && in <= maxBesar)
            ++besar;
        else if(in >= minKecil && in <= maxKecil)
            ++kecil;
    }
    printf("\nJumlah Huruf Besar : %d dan Huruf Kecil : %d\n", besar, kecil);
    return 0;
}
