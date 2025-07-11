#include <stdio.h>
int main()
{
    printf("Enter number 1: ");
    int num1 ,num2, num3;
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);
    printf("Enter number 3: ");
    scanf("%d",&num3);
    int a=num1+num2+num3;
    printf("The average is \n : %d", a/3);

}