#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
float a,b,c=1;
printf("Enter Value Of b");
scanf("%f",&b);
a=1;
while(a<=b)
{
c=1/(c*a);
printf("The 1/Factorial Of %f Is %f",b,c);
a++;
}
getch();
}