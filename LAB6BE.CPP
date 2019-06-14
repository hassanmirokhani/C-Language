#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int a=1;
clrscr();
do
{
printf("2*%d,%d 3*%d=%d\n",a,2*a,a,3*a);
a++;
}
while(a<=10);
getch();
}