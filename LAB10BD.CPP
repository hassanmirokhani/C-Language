#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
clrscr();
long int bnum,dnum=0,base=1,rem;
printf("Enter binary number:");
scanf("%ld",&bnum);
while(bnum!=0)
{rem=bnum%10;
dnum=dnum+rem*base;
base=base*2;
bnum=bnum/10;
}
printf("Decimal value of binary is=%ld",dnum);
getche();
}