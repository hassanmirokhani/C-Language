#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int a,b,c=1;
printf("Enter Value Of b");
scanf("%d",&b);
a=1;
while(a<=b)
{
c=c*a;
printf("The Factorial Of %d Is %d\n",a,c);
a++;
}
getch();
}