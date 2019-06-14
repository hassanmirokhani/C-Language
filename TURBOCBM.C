float getsecs(void);
void main(void)
{
float secs1,secs2;
printf("Type First Time (Form 3:22:01):");
secs1=getsecs();
printf("Type Second (later)time:");
secs2=getsecs();
printf("Difference Is %f Seconds",secs1-secs2);
}
float getsecs(void)
{
float hours,minutes,seconds;
printf("Enter Hours,Minutes And Seconds");
scanf("%f:%f:%f",&hours,&minutes,&seconds);
return(hours*60*60+minutes*60+seconds);
}
