float area(float);
void main(void)
{
float radius;
printf("Enter Value Of Sphere");
scanf("%f",&radius);
printf("Area Of Sphere Is %2f",area(radius));
}
float area(float rad)
{
return(4*3.14154*rad*rad)
}
