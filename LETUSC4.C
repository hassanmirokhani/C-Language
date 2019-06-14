void main(void)
{
int sub,cls;
printf("Enter Number Of Subjects In Which A Student Has Failed\n");
scanf("%d",&sub);
printf("Enter The Class Through Which The Student Has Passed");
scanf("%d",&cls);
switch(cls)
{
case 1:
    switch(sub)
    {
    case 1:
    printf("Grace Marks=5\n");
    break;
    case 2:
    printf("Grace Marks=10\n");
    break;
    case 3:
    printf("Grace Marks=15\n");
    break;
 default:
	 printf("No Grace Marks\n");
    }
    break;
    case 2:
    switch(sub)
    {
    case 1:
    printf("Grace Marks=4\n");
    break;
    case 2:
    printf("Grace Marks=8\n");
    break;
    default:
    printf("No Grace Marks\n");
    }
    break;
    case 3:
    switch(sub)
    {
    case 1:
    printf("Grace Marks=5\n");
    break;
    default:
    printf("No Grace Marks\n");
    }
    }
    }
