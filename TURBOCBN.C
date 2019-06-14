#define CLOCK(hours,mins,secs)(hours*60*60+mins*60+secs)
void main(void)
{
float secs1,secs2,hrs,min,sec;
printf("Enter First Time");
scanf("%f:%f:%f",&hrs,&min,&sec);
secs1=CLOCK(hrs,min,sec);
printf("Enter Second Time");
scanf("%f:%f:%f",&hrs,&min,&sec);
secs2=CLOCK(hrs,min,sec);
printf("Difference Is %f Seconds",secs2-secs1);
}

