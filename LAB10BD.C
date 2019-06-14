void main(void)
{
int matrix1[10][10],matrix2[10][10],sum[10][10],i,j,m,n,p,q;
printf("Enter the order of first matrix: ");
scanf("%d%d",&m,&n);
printf("Enter the order of second matrix: ");
scanf("%d%d",&p,&q);
if(m!=p && n!=q)
{
printf("Order of matrix did not matched");
}
printf("Enter first matrix: \n");
for(i =0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",&matrix1[i][j]);
}
printf("Enter second matrix: \n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
scanf("%d",&matrix2[i][j]);
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
sum[i][j]=matrix1[i][j]+matrix2[i][j];
}
printf("The sum of the matrix is :\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d",sum[i][j]);
printf("\t");
}
printf("\n");
}
getch();
}