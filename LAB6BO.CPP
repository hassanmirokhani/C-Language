#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
float a=1,b=10,c=1,d,e;
while(a<=b)
{
c=c*a;
e=c+1;
d=a/e;
printf("The n/(1+n)! Of %f Is %f\n",a,d);
a++;
}
getch();
}