void display(void);
void marksheet(void);
void calculator(void);
void pattern(void);
void main(void)
{
int a;
printf("1- Display Your Name");
printf("2-Marksheet");
printf("3-Calculator");
printf("4-Pattern");
printf("5-Exit");
printf("Enter Your Choice");
scanf("%d",&a);
switch(a)
{
case 1:
display();
break;
case 2:
marksheet();
break;
case 3:
calculator();
break;
case 4:
pattern();
break;
default:
break;
}
}
void display(void)
{
printf("Muhammad Hassan\n Batch 2017\n Electronics Engineering");
}
void marksheet(void)
{
printf("Subjects\t Total Marks\t Marks Obtained\n");
printf("English\t 100\t\t 74\n");
printf("Urdu\t    100\t\t 82\n");
printf("Maths\t   100\t\t 88\n");
}
void calculator(void)
{
int c=2,b=4;
printf("Sum Is %d",c+b);
printf("Difference Is %d",b-c);
printf("Product Is %d",c*b);
printf("Ratio Is %d",b/c);
getch();
}
void pattern(void)
{
int r,sp,s;
for(r=1;r<=4;r++)
{
for(sp=1;sp<=4-r;sp++)
printf(" ");
for(s=1;s<=r;s++)
printf("*");
printf("\n");
}
getch();
}
