#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int a,b,c=1;
printf("Enter Value Of b");
scanf("%d",&b);
for(a=1;a<=b;a++)
{
c=c*a;
printf("The Factorial Of %d Is %d",a,c);
}
getch();
}