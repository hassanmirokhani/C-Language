void main(void)
{
int a,b,c,d,num1,num2,num3,num4,num;
clrscr();
printf("Enter Four Digit Number");
scanf("%d",&num);
a=num/10;
num4=num%10;
b=a/10;
num3=a%10;
c=b/10;
num2=b%10;
d=c/10;
num1=c%10;
sum=num1+num4;
printf("The Sum Of First And Last Digit Is %d",sum);
getch();
}