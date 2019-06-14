void main(void)
{
int array1[10],array2[10],array3[10];
int i,j,k,n1,n2;
printf("Enter Number Of Elements Of 1st Array\n");
scanf("%d\n",&n1);
for(i=0;i<n1;i++)
{
scanf("%d\n",&array1[i]);
}
printf("Enter Number Of Elements Of 2nd Array\n");
scanf("%d\n",&n2);
for(i=0;i<n2;i++)
{
scanf("%d\n",&array2[i]);
}
i=0;//Garbage Value
j=0;
k=0;
while(i<n1&&j<n2)//Starting Of Sorting And Merging
{
if(array1[i]<=array[j])
{
array3[k]=array1[i];
i++;
k++;
}
else
{
array3[k]=array2[j];
k++;
j++;
}
}
while(i<n1)//Some Elements Are Remaining In Array1
{
array3[k]=array1[i];
i++;
k++;
}
while(j<n2)//Some Elements Are Remaining In Array 2
{
array3[k]=array2[j];
k++;
j++;
}
printf("Merging And Sorting Is\n");
for(i=0;i<n1+n2;i++)//Displaying Elements In Array 3
printf("%d\n",array3[k]);
getch();
}//Main Ends Here