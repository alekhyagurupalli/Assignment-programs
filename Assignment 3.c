#include<stdio.h>
void main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>=18)
        printf("\n %d is eligible to vote",age);
    else
        printf("\n %d is not eligible to vote",age);
}
