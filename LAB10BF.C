#define MAX 5
#define LEN 40
void main(void)
{
int dex;
int enter=0;
char name[40];
char list[MAX][LEN]={"Ali","Noman","Ahmed","Azhar","Sarfaraz"};
printf("Enter Your Name");
gets(name);
for(dex=0;dex<MAX;dex++)
if(strcmp(&list[dex][0],name)==0)//string compare(strcmp)
enter=1;//checking
if(enter==1)
   printf("Allowed");
   else
       printf("Not Allowed");
}
