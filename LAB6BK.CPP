#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
float a=1,b,c=1,d;
clrscr();
printf("Enter Range");
scanf("%f",&b);
for(a=1;a<=b;a++)
{
c=c*a;
d=1/(1+c);
printf("The 1/1+n! Of %f Is %f\n",a,d);
}
getch();
}