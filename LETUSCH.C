void main(void)
{
int a,b,c,d,e,num1,num2,num3,num4,num5,num;
printf("Enter Five Digit Number");
scanf("%d",&num);
a=num/10;
num5=num%10;
b=a/10;
num4=a%10;
c=b/10;
num3=b%10;
d=c/10;
num2=c%10;
e=d/10;
num1=d%10;
printf("Reverse is %d%d%d%d%d",num5,num4,num3,num2,num1);
getch();
}