#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int a,b,c=1;
printf("Enter Value Of b");
scanf("%d",&b);
do
{
c=c*a;
printf("The Factorial Of %d Is %d",a,c);
a++;
}
while(a<=b);
getch();
}