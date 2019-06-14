void main(void)
{
float length,breadth,radius,area,perimeter,areaofcircle,circumference;
clrscr();
printf("Enter Length And Breadth Of Rectangle");
scanf("%f%f",&length,&breadth);
area=length*breadth;
perimeter=(2*length)+(2*breadth);
printf("The Area Of Rectangle is %f\n The Perimeter Of Rectangle Is %f",area,perimeter);
printf("Enter Radius Of Circle");
scanf("%f",&radius);
areaofcircle=3.14*radius*radius;
circumference=2*3.14*raius*radius;
printf("The Area Of Circle Is %f\n The Circumference Of Circle Is %f",areaofcircle,circumference);
getch();
}
