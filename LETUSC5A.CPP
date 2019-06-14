#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int,int);
void main(void)
{
int a,b,c=1;
printf("Enter Integer");
scanf("%d",&b);
for(a=1;a<=b;a++)
{
c=c*a;
}
printf("\n The Factorial Of Integer Is %d",int(c));
}
int fact(int p,int r)
{
return(p*r);
}
