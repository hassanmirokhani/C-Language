#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int r,sp,s;
for(r=1;r<=4;r++)
{
for(sp=1;sp<=r+4;sp++)
printf("");
for(s=1;s<=r;s++)
printf("*");
printf("\n");
}
getch();
}
