#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
float a=1,b,c=1,d;
clrscr();
printf("Enter Value Of b");
scanf("%f",&b);
do
{
d=1/(c);
printf("The 1/Factorial Of %f Is %f\n",a,d);
a++;
c=c*a;
}
while(a<=b);
getch();
}
