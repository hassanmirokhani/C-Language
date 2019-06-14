void main(void)
{
int x,y;
clrscr();
printf("Enter Coordinates Of A Point");
scanf("%d%d",&x,&y);
if(x==0&&y!=0)
printf("The Point Lies On y Axis");
else if(y==0&&x!=0)
printf("The Point Lies On x Axis");
else if(x==0&&y==0)
printf("The Point Lies On Origin");
else
("The Does Not Lie On X,Y Axis Or Origin");
getch();
}

