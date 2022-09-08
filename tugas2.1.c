#include<stdio.h>
int main()
{
    char grade='B';
    switch(grade) {
case'A' :
    printf("Excellent\n");
    break;
case'B' :
    printf("Good\n");
    break;
case'C' :
    printf("Well Done\n");
    break;
case'D' :
    printf("You Passed\n");
    break;
case'E' :
    printf("Better try again\n");
    break;
default :
    printf("Invalid grade\n");
    }
    printf("Your grade is %c\n", grade);
}
