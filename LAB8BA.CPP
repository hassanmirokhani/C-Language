#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int dec=50,bin=0,rem,a=1;
do
{
dec=dec/2;
rem=dec%2;
bin=bin+rem*a;
a=a*10;
}
while(dec>0);
printf("%d",bin);
getch();
}
