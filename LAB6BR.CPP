#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
float a=1,b,c=1,d,e;
printf("Enter Range");
scanf("%f",&b);
do
{
c=c*a;
e=c+1;
d=a/e;
printf("The n/(1+n)! Of %f Is %f\n",a,d);
a++;
}
while(a<=b);
getch();
}