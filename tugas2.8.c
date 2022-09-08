#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Masukkan sebuah karakter:\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        printf("%c adalah sebuah huruf vokal.\n",ch);
    else
        printf("%c bukan huruf vokal.\n");
    getch();
}
