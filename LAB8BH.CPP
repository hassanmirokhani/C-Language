#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int dec=80,hex,a=1,rem;
while(dec>0)
{
rem=rem%16;
dec=dec/16;
hex=hex+rem*a;
a=a*10;
}
printf("%x",hex);
getch();
}
