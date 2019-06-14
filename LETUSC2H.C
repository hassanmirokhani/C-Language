void main(void)
{
int l,b,a,p;
clrscr();
printf("Enter Length Of A Rectangle\n");
scanf("%d",&l);
printf("Enter Breadth Of A Rectangle\n");
scanf("%d",&b);
p=2*(l+b);
a=l*b;
if(a>p)
printf("Area %d Is Greater Than Perimeter %d\n",a,p);
else
printf("Perimeter %d Is Greater Than Area %d\n",p,a);
getch();
}
