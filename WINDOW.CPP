#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
void welcome(void);
void intro(void);
void main(void)
{
clrscr();
int gd=DETECT,gm,a;
initgraph(&gd,&gm,"c:\\tc\\bgi");
//intro();   // its not wroking here.
cleardevice();
settextstyle(3,0,6);
outtextxy(200,185,"Windows");
settextstyle(3,0,3);
outtextxy(115,170,"Microsoft");
settextstyle(3,0,5);
setcolor(4);
outtextxy(410,170,"XP");
setfillstyle(5,4);   //red
bar(240,120,300,60);
setfillstyle(4,2);// green
bar(305,120,365,60);
setfillstyle(4,14+3);  //blue
bar(240,125,300,185);
setfillstyle(5,14); //yellow
bar(305,125,365,185);
setcolor(15);
settextstyle(3,0,1);
moveto(460,440);
outtext("Microsoft");
settextstyle(3,0,1);
outtextxy(5,445,"Copyright T.N.Z Inc. 2004");
rectangle(210,320,395,340);
//bar(214,325,290,335);
int x,y ;

for(y=1;y<=3;y++){
for(x=220;x<=390;x++)
{
//setcolor(y);
setfillstyle(1,y+1) ;delay(50);
// moveto(x,320);
bar(214,325,x,335);}}
//outtext("*****");} }
delay(50);
//NEW PAGE ----------PAGE-2

welcome();
//intro();

   getch();
closegraph();
}
void welcome(void)
{
cleardevice();
cleardevice();
setbkcolor(9);
//line(330,0,330,430);
//line(0,430,680,430);
setfillstyle(1,4);
bar(180,130,230,180);
setfillstyle(1,2);
bar(235,130,285,180);
setfillstyle(1,14+3);
bar(180,185,230,235);
setfillstyle(1,14);
bar(235,185,285,235);

setfillstyle(9,0);
bar(95,200,10,110);
settextstyle(3,0,2);
outtextxy(90,225,"Microsoft");
setcolor(12);
settextstyle(3,0,1);
outtextxy(290,235,"XP");
setcolor(15);
settextstyle(3,0,4);
outtextxy(165,240,"Windows");
setfillstyle(9,10);
settextstyle(6,0,4);
setcolor(14);
bar3d(360,100,400,140,5,650);
setcolor(7+4);
outtextxy(420,100,"Administrator");
setcolor(14);
bar3d(360,260,400,300,5,250);
setcolor(7+4);
outtextxy(420,260,"Guest");
settextstyle(1,0,6);  setcolor(4);
outtextxy(365,247,"G");
outtextxy(365,87,"A");
setfillstyle(1,1);
bar(0,431,650,490);

bar(0,0,650,60); //  setcolor(15);
//line(0,61,680,61);
settextstyle(3,0,3);  setfillstyle(1,4);  setcolor(15);bar3d(13,440,45,470,5,250);
outtextxy(55,440,"TurnOff your computer");settextstyle(1,0,4);
 outtextxy(20,435,"T");
 settextstyle(1,0,1);
 outtextxy(30,320,"To begin, press desire");
 outtextxy(30,340," alphabet written on the icons");
 int x ;
for(x=0;x<=620;x++)
{
setcolor(15) ; delay(5);
line(0,61,x,61) ;
}
int y ;
for(y=61;y<=430;y++)
{setcolor(15); delay(3);
line(330,61,330,y);
}                          //line must be till 620 app.
int z;
for(z=0;z<=620;z++)
{setcolor(15); delay(5);
line(0,430,z,430);}
 ///--------------//  incorrect
// int ch ;
//ch=getch();
//if((ch=getch())='a');
//{

 setfillstyle(1,7);
bar(410,150,620,230);
setfillstyle(1,1);
bar(410,150,620,170);
setcolor(15);
rectangle(410,150,620,230);  settextstyle(2,0,5);
outtextxy(415,152,"Administrator Password");
outtextxy(430,175," Enter Password");
setfillstyle(1,15);
bar(430,200,580,220);
// NOTE: if the password is correct call a function for new page . otherwise for no
//guest function will be called on clicking G
//else;
//if((ch=getch())='g')
//{ cleardevice();
//setbkcolor(1);
//printf("Page under construction");      }

}

//void intro(void)
//{
//cleardevice();  settextstyle(3,0,3);  setbkcolor(0);
//outtext("Tausif");
//delay(100);
//cleardevice();
//}
