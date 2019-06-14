void main(void)
{
int x1,y1,x2,y2,x3,y3,m1,m2;
clrscr();
printf("Enter Coordinates Of First Point\n");
scanf("%d%d",&x1,&y1);
printf("Enter Coordinates Of Second Point\n");
scanf("%d%d",&x2,&y2);
printf("Enter Coordinates Of Third Point\n");
scanf("%d%d",&x3,&y3);
m1=(y2-y1)/(x2-x1);
m2=(y3-y2)/(x3-x2);
if(m1==m2)
printf("The Points Are On Straight Line\n");
else
printf("The Points Are Not On Straight Line");
getch();
}
