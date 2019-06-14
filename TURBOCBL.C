int num(int,int);
void main(void)
{
int num1,num2;
printf("Enter First Number");
scanf("%d",&num1);
printf("Enter Second Number");
scanf("%d",&num2);
printf("The Larger Number Is %d",num(num1,num2));
}
int num(int a,int b)
{
return(a>b ? a:b);
}
