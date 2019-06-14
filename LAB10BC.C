#define LIM 5
void main(void)
{
static int table[]={50,25,5,2,1};
int dex,amount,qty;
printf("Enter Amount In Cents(form 361)");
scanf("%d",&amount);
for(dex=0;dex<LIM;dex++)
{
qty=amount/table[dex];
printf("Value Of Coins=%2d",table[dex]);
printf("Number Of Coins=%2d\n",qty);
amount=amount%table[dex];
}
}

