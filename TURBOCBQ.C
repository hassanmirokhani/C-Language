void strins(char[],char,int);
void main(void)
{
char ch,st[40];
int a;
printf("Type String,Character,Position\n");
gets(st);
scanf("%c%d",&ch,&a);
strins(st,ch,a);
puts(st);
}
void strins(char temp[],char temp1,int b)
{
char temp2[80];
strcpy(temp2,&temp[b]);
temp[b]=temp1;
strcpy(&temp[b+1],temp2);
}

