#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
double a,b,c,temp,temp1,temp2;
a=2;
b=5;
c=2;
temp=(b*b)-(4*a*c);
temp=sqrt(temp);
temp=(temp)/(2*a);
temp1=(-1*b)+temp;
temp2=(-1*b)-temp;
printf("The Value of Quadratic Equation Is %f %f",temp1,temp2);
getch();
}
