#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int row,col;
for(row=1;row<=2;row++)
{
for(col=1;col<=2;col++)
   printf("%d%d\t",row,col);
printf("\n");
}
getch();
}