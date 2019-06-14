#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int a,b,c=71,d=70,e=1,f;
clrscr();
for(b=1;b<=7;b++)
{
for(a=65;a<=c;a++)
printf("%c",a);
if(b==2)
d=70;
for(f=2;f<e;f++)
printf(" ");
for(a=d;a>=65;a--)
printf("%c",a);
printf("\n");
c--;
d--;
e+=2;
}
getch();
}
