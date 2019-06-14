#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int oct=10,dec=0,a=0,rem;
while(oct>0)
{
rem=oct%10;
oct=oct/10;
dec=dec+(rem*pow(8,a));
a++;
}
printf("Decimal Is %d",dec);
getch();
}
