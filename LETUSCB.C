void main(void)
{
int distkm,distm,distf,disti,distcm
printf("Enter Distance In Kilometer");
scanf("%d",&distkm);
distm=(distkm*1000);
distf=(distkm*3280);
disti=(distkm*39370);
distcm=(distkm*100000);
printf("Distance In Meter Is %d\n Distance In Feet Is %d\n Distance In Inches Is %d\n Distance In Centimeter Is %d",distm,distf,disti,distcm);
getch();
}