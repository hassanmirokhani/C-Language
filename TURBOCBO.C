void main(void)
{
int temp[7];
int sum,day;
for(day=0;day<7;day++)
{
printf("Enter Temperature %d Day",day);
scanf("%d",&temp[day]);
}
for(day=0;day<7;day++)
{
printf("The Temperature Of Day %d Is %d\n",day,temp[day]);
}
sum=0;
for(day=0;day<7;day++)
sum=sum+temp[day];
printf("Average Is %d",sum/7);
getch();
}
