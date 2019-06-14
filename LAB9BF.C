void oddeven(void);
void negative(void);
int keynumb;//External Or Universal Variable
void main(void)
{
printf("Type Keynumb");
scanf("%d",&keynumb);
oddeven();
negative();
}
void oddeven(void)
{
if(keynumb%2)
printf("even\n");
else
printf("odd\n");
}
void negative(void)
{
if(keynumb<0)
printf("Keynumb As Negative");
else
printf("Keynumb Is Positive");
}
