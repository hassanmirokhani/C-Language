#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
clrscr();
long int binaryNumber,hexadecimalNumber=0,j=1,remainder;
printf("Enter any binary number: ");
scanf("%lx",&binaryNumber);
while(binaryNumber!=0)
{
remainder=binaryNumber%10;
hexadecimalNumber=hexadecimalNumber+remainder*j;
j=j*2;
binaryNumber=binaryNumber/10;
}
printf("hexadecimal value: %lx",hexadecimalNumber);
getche();
}