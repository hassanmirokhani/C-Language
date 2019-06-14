#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int a,b,c=300;
clrscr();
for(a=1;a<=300;a++)
{
b=2;
while(b<c-1)
{
if(a%b==0)
break;
b++;
}
if(b==a)
printf("%d",a);
}
getch();
}