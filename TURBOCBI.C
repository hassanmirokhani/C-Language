void main(void)
{
int a;
printf("Enter Speed");
scanf("%d",&a);
if(a>75)
   printf("Slow Down");
   else
if(a>55)
   printf("Average Speed");
   else
if(a>45)
   printf("Under Average");
   else
   printf("Speed Up Till Average");
getch();
}
