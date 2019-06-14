#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int count;
count=1;
while(count<=10)
{
printf("2*%d=%d 3*%d=%d\n",count,2*count,count,3*count);
count++;
}
getch();
}