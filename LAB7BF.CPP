#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int x,y;
char c='G',r='A';
for(x=1;x<=(c-r+1);x++)
{
for(y=1;y<=x;y++)
printf("%c",r);
r++;
printf("\n");
}
getch();
}

