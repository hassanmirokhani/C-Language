#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int dec=50,hex=0,rem,a=1;
while(dec>0)
{
dec=dec/16;
rem=dec%16;
hex=hex+rem*a;
a=a*10;
}
printf("%x",hex);
getch();
}

