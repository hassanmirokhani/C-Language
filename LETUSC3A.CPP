#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int emp,time,pay,hours;
for(emp=1;emp<=10;emp++)
{
printf("Enter Numbers Of Hour Worked");
scanf("%d",&hours);
if(hours>40)
{
time=hours-40;
pay=time*12;
printf("The Pay Is %d",pay);
}
else if(hours<40)
{
printf("There Is No Extra Pay");
}
}
getch();
}
