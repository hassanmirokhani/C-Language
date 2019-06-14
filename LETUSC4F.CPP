#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int num,temp,a=0,b=0,c=0;
clrscr();
printf("Enter Numbers");
scanf("%d",&temp);
while(temp>0)
{
scanf("%d",&num);
if(num>0)
a++;
if(num<0)
b++;
if(num==0)
c++;
temp--;
}
printf("Positive Negative And Zero Are %d %d %d",a,b,c);
getch();
}
