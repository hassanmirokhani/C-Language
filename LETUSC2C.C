void main(void)
{
int year;
clrscr();
printf("Enter Any Year");
scanf("%d",&year);
if(year%4==0)
printf("%d Is A Leap Year",year);
else
printf("%d Is Not A Leap Year",year);
getch();
}
