#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
float a,b,c=1;
printf("Enter Value Of b");
scanf("%f",&b);
for(a=1;a<=b;a++)
{
c=1/(c*a);
printf("The 1/Factorial Of %f Is %f",b,c);
}
getch();
}