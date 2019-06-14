#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int bin=1001,dec=0,a=0,rem;
while(bin>0)
{
rem=bin%10;
bin=bin/10;
dec=dec+(rem*pow(2,a));
a++;
}
printf("Decimal Is %d",dec);
getch();
}









