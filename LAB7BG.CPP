#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int r,sp;
for(r=1;r<=5;r++)
{
for(sp=1;sp<=5-r;sp++)
printf("%d",r);
printf("\n");
}
getch();
}

