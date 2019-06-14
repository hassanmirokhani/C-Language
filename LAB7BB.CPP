#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
char R,Sp,S,ch=65;
clrscr();
for(R=1;R<=7;R++)
{
for(Sp=1;Sp<=7-R;Sp++)
printf(" ");
for(S=1;S<=R;S++)
printf("%c",ch++);
printf("\n");
}
getch();
}