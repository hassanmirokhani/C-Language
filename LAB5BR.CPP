#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
float x,y;
x=1;
while(x<=10)
{
y=sqrt((x+2)/(x-2));
printf("The Value Of Equation Is %f",y);
x++;
}
getch();
}