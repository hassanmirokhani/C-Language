#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main(void)
{
char str[5][10],t[20];
int i,j;
printf("Enter Five Names\n");
for(i=0;i<5;i++)
{
scanf("%s\n",&str[i]);
}
for(i=1;i<5;i++)
{
for(j=1;j<5;j++)
{
if(strcmp(str[j-1],str[j])>0)
{
strcpy(t,str[j-1]);
strcpy(str[j-1],str[j]);
strcpy(str[j],t);
}
}
}
printf("Strings In Alphabetical Order\n");
for(i=0;i<5;i++)
{
printf("%s\n",str[i]);
}
getch();
}
