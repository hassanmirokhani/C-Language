#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int a,b,c,d,e,f,num=1;
clrscr();
printf("Armstrong Numbers From 1 to 500\n");
while(num<=500)
{
a=num%10;
b=num/10;
c=b%10;
d=b/10;
e=d%10;
f=d/10;
if(num==(a*a*a)+(c*c*c)+(e*e*e))
{
printf("%d\n",num);
}
num++;
}
getch();
}
