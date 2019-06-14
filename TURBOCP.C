void main(void)
{
float temp[40];
float sum=0.0;
int num,day=0;
printf("Enter Temperature For Day");
scanf("%f",&temp[0]);
while(temp[day++]>0)
{
printf("Enter Temp For Day %d",day);
scanf("%f",&temp[day]);
}
num=day-1;
for(day=0;day<num;day++)
sum+=temp[day];
printf("Average Is %1f",sum/num);
getch();
}
