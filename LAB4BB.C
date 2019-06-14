#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
double result;
double x=0.5,y=3;
result=cos(x);
printf("The cosine of%lf is %lf\n",x,result);
result=sin(x);
printf("The sine of %lf is %lf\n",x,result);
result=tan(x);
printf("The tangent of %lf is %lf\n",x,result);
result=cosh(x);
printf("The hyperbolic of cosine of %lf is %lf\n",x,result);
result=sinh(x);
printf("the hyperbolic of sine of %lf is %lf\n",x,result);
result=tanh(x);
printf("The hyperbolic of tangent of %lf is %lf\n",x,result);
result=sqrt(x);
printf("The square root of %lf is %lf\n",x,result);
result=log(x);
printf("The logarithm of %lf is %lf\n",x,result);
result=log10(x);
printf("The common logarithm of %lf is %lf\n",x,result);
printf("pow(%lf%lf)=%lf\n",x,y,pow(x,y));
getch();
}