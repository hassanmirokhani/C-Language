#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int a,b,c=6;
clrscr();
for(a=1;a<=10;a++)
{
if(a==1||a==2||a==4||a==7)
{
printf("\n");
for(b=1;b<=c;b++)
printf(" ");
c=c-2;
}
printf("%4d",a);
}
getch();
}
