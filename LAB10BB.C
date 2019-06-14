void main(void)
{
float temp[40];
float sum=0.0;
int num,day=0;
do
{
printf("Enter Temp For Day %d",day);
scanf("%f",&temp[day]);
}
while(temp[day++]>0);
num=day-1;
for(day=0;day<num;day++)
sum+=temp[day];
printf("Average Is %1f",sum/num);
getch();
}
