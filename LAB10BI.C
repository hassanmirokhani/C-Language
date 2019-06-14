#define MAX 20
void sort(int[],int);
void main(void)
{
int list[MAX];
int size=0;
int dex;
do
{
printf("Enter Number");
scanf("%d",&list[size]);
}
while(list[size++]!=0);
sort(list,--size);
for(dex=0;dex<size;dex++)
printf("%d\n",list[dex]);
}
void sort(int list[],int size)
{
int out,in,temp;
for(out=0;out<size-1;out++)
for(in=out+1;in<size;in++)
if(list[out]>list[in])
{
temp=list[in];
list[in]=list[out];
list[out]=temp;
}
}
