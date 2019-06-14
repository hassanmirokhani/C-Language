float square(float);
float rectangle(float,float);
float circle(float);
float ellipse(float,float);
float triangle(float,float);
float parallelogram(float,float);
float trapezoid(float,float,float);
float cube(float);
float rectangularprism(float,float,float);
float sphere(float);
float circularcylinder(float,float);
float rhombus(float,float);
float kite(float,float);
float voltage(float,float);
float current(float,float);
float resistance(float,float);
float voltagediv(float,float,float);
float currentdiv(float,float,float);
float totalresistance(float,float,float);
void main(void)
{
int a;
float l,b,c,h,w,v,i,r,RT,r1,r2,r3,vx,ix,v1,v2,i1,i2;
double result,x,y;
printf("1-Area Of Square\n");
printf("2-Area Of Rectangle\n");
printf("3-Area Of Circle\n");
printf("4-Area Of Ellipse\n");
printf("5-Area Of Triangle\n");
printf("6-Area Of Parallelogram\n");
printf("7-Area Of Trapezoid\n");
printf("8-Volume Of Cube\n");
printf("9-Volume Of Rectangular Prism\n");
printf("10-Volume Of Sphere\n");
printf("11-Volume Of Right Circular Cylinder\n");
printf("12-Area Of Rhombus\n");
printf("13-Area Of Kite\n");
printf("14-Ohm's Law Voltage\n");
printf("15-Ohm's Law Current\n");
printf("16-Ohm's Law Resistance\n");
printf("17-Voltage Divider\n");
printf("18-Current Divider\n");
printf("19-Total Resistance In Parallel\n");
printf("20-Scientific Calculator\n");
scanf("%d",&a);
if(a==1)
{
printf("Enter Length\n");
scanf("%f",&l);
printf("Area Of Square Is %f\n",square(l));
}
if(a==2)
{
printf("Enter Length\n");
scanf("%f",&l);
printf("Enter Breadth\n");
scanf("%f",&b);
printf("The Area Of Rectangle Is %f\n",rectangle(l,b));
}
if(a==3)
{
printf("Enter Radius\n");
scanf("%f",&r);
printf("The Area Of Circle Is %f\n",circle(r));
}
if(a==4)
{
printf("Enter Length\n");
scanf("%f",&c);
printf("Enter Breadth\n");
scanf("%f",&b);
printf("The Area Of Ellipse Is %f\n",ellipse(c,b));
}
if(a==5)
{
printf("Enter Length\n");
scanf("%f",&c);
printf("Enter Height\n");
scanf("%f",&h);
printf("The Area Of Triangle Is %f\n",triangle(c,h));
}
if(a==6)
{
printf("Enter Breadth\n");
scanf("%f",&b);
printf("Enter Height\n");
scanf("%f",&h);
printf("The Area Of Parallelogram Is %f\n",parallelogram(b,h));
}
if(a==7)
{
printf("Enter Length\n");
scanf("%f",&c);
printf("Enter Breadth\n");
scanf("%f",&b);
printf("Enter Height\n");
scanf("%f",&h);
printf("The Area Of Trapezoid Is %f",trapezoid(c,b,h));
}
if(a==8)
{
printf("Enter Length\n");
scanf("%f",&c);
printf("The Volume Of Cube Is %f\n",cube(c));
}
if(a==9)
{
printf("Enter Length\n");
scanf("%f",&l);
printf("Enter Width\n");
scanf("%f",&w);
printf("Enter Height\n");
scanf("%f",&h);
printf("The Volume Of Rectangular Prism Is %f\n",rectangularprism(l,w,h));
}
if(a==10)
{
printf("Enter Radius\n");
scanf("%f",&r);
printf("The Volume Of Sphere Is %f\n",sphere(r));
}
if(a==11)
{
printf("Enter Radius\n");
scanf("%f",&r);
printf("Enter Height\n");
scanf("%f",&h);
printf("THe Volume Of Right Circular Cylinder Is %f\n",circularcylinder(r,h));
}
if(a==12)
{
printf("Enter Length\n");
scanf("%f",&c);
printf("Enter Breadth\n");
scanf("%f",&b);
printf("The Area Of Rhombus Is %f\n",rhombus(c,b));
}
if(a==13)
{
printf("Enter Length\n");
scanf("%f",&c);
printf("Enter Breadth");
scanf("%f",&b);
printf("The Area Of Kite Is %f\n",kite(c,b));
}
if(a==14)
{
printf("Enter Current\n");
scanf("%f",&i);
printf("Enter Resistance\n");
scanf("%f",&r);
printf("The Voltage Is %f\n",voltage(i,r));
}
if(a==15)
{
printf("Enter Voltage\n");
scanf("%f",&v);
printf("Enter Resistance\n");
scanf("%f",&r);
printf("The Current Is %f\n",current(v,r));
}
if(a==16)
{
printf("Enter Voltage\n");
scanf("%f",&v);
printf("Enter Current\n");
scanf("%f",&i);
printf("The Resistance Is %f",resistance(v,i));
}
if(a==17)
{
printf("Enter Total Voltage\n");
scanf("%f",&v);
printf("Enter Total Resistance\n");
scanf("%f",&RT);
printf("Enter Resitance Of Resistor\n");
scanf("%f",r1);
printf("The Voltage Of Resistor Is %f\n",voltagediv(v,RT,r1));
}
if(a==18)
{
printf("Enter Total Current\n");
scanf("%f",&i);
printf("Enter Total Resitance\n");
scanf("%f",&RT);
printf("Enter Opposite Resitance\n");
scanf("%f",&r2);
printf("The Current Of Resistor Is %f\n",currentdiv(i,RT,r2));
}
if(a==19)
{
printf("Enter First Resistance\n");
scanf("%f",&r1);
printf("Enter Second Resistance\n");
scanf("%f",&r2);
printf("Enter Third Resistance\n");
scanf("%f",&r3);
printf("Total Resistance In Parallel Is %f\n",totalresistance(r1,r2,r3));
}
if(a==20)
{
printf("Enter Value For Cos\n");
scanf("%lf",&x);
result=cos(x);
printf("The Cosine Is %lf\n",result);
printf("Enter Value For Sin\n");
scanf("%lf",&x);
result=sin(x);
printf("The Sine Is %lf",result);
printf("Enter Value For Tan\n");
scanf("%lf",&x);
result=tan(x);
printf("The Tangent Is %lf\n",result);
printf("Enter Value For cosh\n");
scanf("%lf",&x);
result=cosh(x);
printf("The Hyperbolic Cosine Is %lf\n",result);
printf("Enter Value For sinh\n");
scanf("%lf",&x);
result=sinh(x);
printf("The Hyperbolic Sine Is %lf\n",result);
printf("Enter Value For tanh\n");
scanf("lf",&x);
result=tanh(x);
printf("The Hyperbolic Tangent Is %lf\n",result);
printf("Enter Value For Square Root\n");
scanf("%lf",&x);
result=sqrt(x);
printf("The Square Root Is %lf\n",result);
printf("Enter Value For Log\n");
scanf("%lf",&x);
result=log(x);
printf("The Logarithm Is %lf\n",result);
printf("Enter Value For log10");
scanf("%lf",&x);
result=log10(x);
printf("The Natural Logarithm Is %lf\n",result);
printf("Enter Values Of Coeffient And Power\n");
scanf("%lf%lf",&x,&y);
printf("pow(%lf%lf)=%lf\n",x,y,pow(x,y));
}
}
float square(float d)
{
return(d*d);
}
float rectangle(float m,float n)
{
return(m*n);
}
float circle(float rad)
{
return(3.14*rad*rad);
}
float ellipse(float q,float e)
{
return(3.14*q*e);
}
float triangle(float le,float be)
{
return((1/2)*le*be);
}
float parallelogram(float z,float s)
{
return(z*s);
}
float trapezoid(float u,float U,float he)
{
return((1/2)*(u+U)*he);
}
float cube(float s)
{
return(s*s*s);
}
float rectangularprism(float le,float we,float he)
{
return(le*we*he);
}
float sphere(float rad)
{
return((4/3)*3.14*rad*rad*rad);
}
float circularcylinder(float rad,float he)
{
return(3.14*rad*rad*he);
}
float rhombus(float v,float p)
{
return((1/2)*v*p);
}
float kite(float t,float vv)
{
return((1/2)*t*vv);
}
float voltage(float cur,float res)
{
return(cur*res);
}
float current(float vol,float rest)
{
return(vol/rest);
}
float resistance(float volt,float resti)
{
return(volt/resti);
}
float voltagediv(float VT,float TR,float SR)
{
return((VT*SR)/TR);
}
float currentdiv(float IT,float Y,float RO)
{
return((IT*RO)/Y);
}
float totalresistance(float r7,float r8,float r9)
{
return(1/((1/r7)+(1/r8)+(1/r9)));
}

