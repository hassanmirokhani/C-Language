#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int a,b,c=1;
printf("Enter Range");
scanf("%d",&b);
for(a=1;a<=b;a++)
{
c=c*a;
}
printf("Factorial Of Given Number Is %d",c);
getch();
}
