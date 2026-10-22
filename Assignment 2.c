#include<stdio.h>
void main() 
{
    float length, breadth, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\n %f Area of the rectangle", area);
    printf("\n %f Perimeter of the rectangle", perimeter);

    
}
