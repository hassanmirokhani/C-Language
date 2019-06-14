#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int a,b;
a=1;
b=2;
while(a<=10)
{
printf("Value Of a=%d And b=%d",a,b);
a++;
b++;
a++;
b+=2;
}
printf("Last Value Of a=%d And b=%d",a,b);
getch();
}