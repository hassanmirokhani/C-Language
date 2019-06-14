#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
char ch;
ch=getche();
if(ch=='y'||ch=='Y')
   printf("2 Person Allowed");
else
    if(ch=='n'||ch=='N')
    printf("1 Person Allowed");
else
    printf("Not Allowed");
getch();
}
