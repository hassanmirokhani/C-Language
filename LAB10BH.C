void main(void)
{
char name[80];
int dex;
puts("Enter Your Num");
gets(name);
for(dex=0;dex<strlen(name);dex++)
printf("Add=%s%u char='%c'-%3d\n",&name[dex],name[dex],name[dex]);
}
