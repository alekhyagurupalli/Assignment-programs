#include<stdio.h>

void main() 
{
    int age, creditScore;
    float income;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter monthly income: ");
    scanf("%f", &income);

    printf("Enter credit score: ");
    scanf("%d", &creditScore);

    if (age >= 21 && age <= 60)
    {
        if (income >= 25000)
        {
            if (creditScore >= 700) 
            {
                printf("Loan Approved");
            }
            else 
            {
                printf("Loan Rejected. Credit Score below 700");
            }
        }
        else 
        {
            printf("Loan Rejected. Income below 25000");
        }
    }
    else
    {
        printf("Loan Rejected. Age not in 21 to 60");
    }

   
}


