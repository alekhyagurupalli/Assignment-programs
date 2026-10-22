#include<stdio.h>
void main() 
{
   char x;
    printf("\n Enter an alphabet:");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
        printf("\n %c is a vowel",x);
    else
        printf("\n %c is a consonant",x);
}            
