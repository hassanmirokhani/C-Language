#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
float a=1,b,c=1,d;
printf("Enter Range");
scanf("%f",&b);
while(a<=b)
{
c=c*a;
d=c/(1+c);
printf("The n!/1+n! Of %f Is %f\n",a,d);
a++;
}
getch();
}
