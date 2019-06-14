#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
float x=2,y=1,z;
clrscr();
do
{
z=sqrt((x+y)/(x-y));
printf("The Value Of Equation Is %f\n",z);
x++;
}
while(x<=10);
getch();
}