float triarea(float,float);
float sqrarea(float);
float traparea(float,float,float);
float circlearea(float);
float pararea(float,float);
void main(void)
{
int a;
float l,b,B,h,r;
printf("1-Area Of Triangle");
printf("2-Area Of Square\n");
printf("3-Area Of Trapezoid\n");
printf("4-Area Of Circle\n");
printf("5-Area Of Parallelogram\n");
scanf("%d",&a);
if(a==1)
{
printf("Enter Length And Breadth");
scanf("%f%f",&l,&b);
printf("Area Is %2f",triarea(l,b));
}
if(a==2)
{
printf("Enter Length");
scanf("%f",&l);
printf("Area Of Square Is %d",sqrarea(l));
}
if(a==3)
{
printf("Enter Upper Breadth");
scanf("%f",&B);
printf("Enter Lower Breadth");
scanf("%f",&b);
printf("Enter Heigth");
scanf("%f",&h);
printf("Area Of Trapezoid Is %f",traparea(B,b,h));
}
if(a==4)
{
printf("Enter Radius");
scanf("%f",&r);
printf("Area Is %f",circlearea(r));
}
if(a==5)
printf("Enter Length And Breadth");
scanf("%f%f",&l,&b);
printf("Area Is %d",pararea(l,b));
}
float triarea(float c,float d)
{
return((c*d)/2);
}
float sqrarea(float m)
{
return(m*m);
}
float traparea(float U,float u,float k)
{
return(((u+U)*k)/2);
}
float circlearea(float rad)
{
return(3.14*rad*rad);
}
float pararea(float x,float y)
{
return(x*y);
}
