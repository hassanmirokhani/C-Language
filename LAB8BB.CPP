#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int dec=50,oct=0,rem,a=1;
while(dec>0)
{
rem=dec%8;
dec=dec/8;
oct=oct+rem*a;
a=a*10;
}
printf("%d",oct);
getch();
}
