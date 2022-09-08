#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main()
/*{
    int i,n;
    printf("Masukkan jumlah data = ");
    scanf("%d",&n);
    int tinggi[n];

    for(i=0;i<n;i++){
        printf("Data ke-%d =", i);
        scanf("%d", &tinggi[i]);
    }
    for(i=0;i<n;i++){
    printf("%d\n",tinggi[i]);
    }
    return 0;
    getch();
}*/
/*{
    int i,n;
    printf("Masukkan jumlah data = ");
    scanf("%d",&n);
    int tinggi[n];

    for(i=0;i<n;i++){
        printf("Data ke-%d = ", i);
        scanf("%d", &tinggi[i]);
    }
    int sum = 0;

    for(i=0;i<n;i++)
    {
    sum += tinggi[i];
    }

    printf("Hasil penjumlahan adalah %d", sum);
    return 0;
}*/
/*{
    int n,m,i,j;

    printf("Masukkan baris = ");
    scanf("%d", &n);
    printf("Masukkan kolom = ");
    scanf("%d", &m);

    int matrix[n][m];

    for(i=0;i<n;i++)
        {
        for (j=0;j<m;j++)
        {
        printf("ini matrix indeks %d%d= ",i,j);
        scanf("%d", &matrix[i][j]);
        }
    }

    for(i=0;i<n;i++)
        {
        for (j=0;j<m;j++)
        {
        printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

}
*/

/*{

    char a[100];
    printf("Masukkan Nama anda ");
    //gets(a);
    //scanf("%[^\n]", &a);
    scanf("%[^\n]", &a);
    for(int i=0;i<=strlen(a);i++)
    printf("%c",a[i]);
}*/

{

    char a[100];
    printf("Masukkan Nama anda ");
    scanf("%[^\n]", &a);
    for(int i=strlen(a)-1;i>=0;i--)
    printf("%c",a[i]);
}
