int sumsqr(int,int);
int sqr(int);
int sum(int,int);
void main(void)
{
int num1,num2;
printf("Type 2 Numbers");
scanf("%d%d",&num1,&num2);
printf("Sum Of The Square Is %d",sum(num1,num2));
}
int sumsqr(int j,int k)
{
return(sum(sqr(j),sqr(k)));
}
int sqr(int z)
{
return(z*z);
}
int sum(int x,int y)
{
return(x+y);
}
