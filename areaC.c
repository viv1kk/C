#include <stdio.h>
void main()
{
float a = 0, b = 0;
printf("Enter the radius of Circle (in mtrs) : ");
scanf("%f", &a);
b = (22 * a * a) / 7;
printf("Area of circle of radius %.3fm is %.3fm^s.", a, b); 
}