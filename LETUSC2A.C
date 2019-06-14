void main(void)
{
int cp,sp,l,p;
clrscr();
printf("Enter Cost Price Of An Item:");
scanf("%d",&cp);
printf("Enter Selling Price Of An Item:");
scanf("%d",&sp);
if(cp>sp)
{
l=cp-sp;
printf("You Have Made Loss. Your Loss is %d",l);
}
else if(sp>cp)
{
p=sp-cp;
printf("You Have Gain Profit. Your Profit Is %d",p);
}
else if(sp=cp)
{
printf("You Have neither Loss Nor Profit");
}
getch();
}
