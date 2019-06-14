float sum(float,int);
void main(void)
{
float v1;
int v2;
printf("Enter First Value");
scanf("%f",&v1);
printf("\n Enter Second Value");
scanf("%d",&v2);
printf("Sum Is %f",sum(v1,v2));
}
float sum(float a,int b)
{
return(a+b);
}
