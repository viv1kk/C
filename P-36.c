// PM 11:08 07-08-2017
#include <stdio.h>
int main (void)
{
int a, failure, number, grade, total;
failure = 0;
total = 0;
grade = 0;
float average = 0;
printf("\n\nEnter the number of Grades - ");
scanf("%i", &number);
printf("\n\n");
for (a = 1; a <= number; ++a){
printf("Enter Grade #%i : ", a);
scanf("%i", &grade);
total = total + grade;
if (grade < 65){
	++failure;

}
}
average = (float) total / number;
printf("\n\nThe average grade is %.2f\n", average);
printf("Number of Failure - %i\n\n", failure);
return 0;
}