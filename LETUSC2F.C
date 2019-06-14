void main(void)
{
int a1,a2,a3,sum;
clrscr();
printf("Enter Three Angles Of A Triangle");
scanf("%d%d%d",&a1,&a2,&a3);
sum=a1+a2+a3;
if(sum==180)
printf("The Triangle Is Valid");
else
printf("The Triangle Is Not Valid");
getch();
}
