#define PI 3.14159
float area(float);
void main(void)
{
float radius;
printf("Enter Radius Of Sphere");
scanf("%f",&radius);
printf("Area Of Sphere Is %2f",area(radius));
}
float area(float rad)
{
return(PI*rad*rad);
}
