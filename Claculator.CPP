#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<math.h>

  class graphics
     {
       public:
      void screen(int x1,int y1,int x2,int y2)
	  {
	   setcolor(0);
	   setfillstyle(1,0);
	   rectangle(x1,y1,x2,y2);
	   floodfill(x1+2,y1+2,0);
	   setcolor(15);
	   Rectangle(x1,y1,x2,y2,15,8);
	   Rectangle(x1-1,y1-1,x2+1,y2+1,15,8);
	   gotoxy(30,9);
	   cout<<"0";
	  }
	 void button(int x1,int y1,int x2,int y2,char *ch,int col)
	 {
	  int color;
	  setcolor(col);
	  setfillstyle(1,col);
	  rectangle(x1,y1,x2,y2);
	  floodfill(x1+2,y1+2,col);
	  Rectangle(x1-1,y1-1,x2+1,y2+1,0,15);
	  if(col==4)
	 color=15;
	 else
	  color=0;
	  setcolor(color);
	  settextstyle(2,0,6);
	  outtextxy(x1+12,y1+3,ch);
	 }
      void pressed_button(int x1,int y1,int x2,int y2,char *ch,int col1,int col2)
	{
	  button(x1,y1,x2,y2,ch,col1);
	  delay(200);
	  button(x1,y1,x2,y2,ch,col2);
	}

       void Rectangle(int x1,int y1,int x2,int y2,int col1,int col2)
	{
	 setcolor(col1);
	 line(x2,y1,x2,y2);
	 line(x1,y2,x2,y2);
	 setcolor(col2);
	 line(x1,y1,x2,y1);
	 line(x1,y1,x1,y2);
	}
       void Form(int x1,int y1,int x2,int y2,int col1,int col2,char *ch)
	{
	  setcolor(col1);
	  setfillstyle(1,col1);
	  rectangle(x1,y1,x2,y2);
	  floodfill(x1+2,y1+2,col1);
	  setcolor(col2);
	  setfillstyle(1,col2);
	  rectangle(x1,y1,x2,y1+20);
	  floodfill(x1+2,y1+2,col2);
	  Rectangle(x1-1,y1-1,x2+1,y2+1,8,15);
	  Rectangle(x1-2,y1-2,x2+2,y2+2,8,15);
	  setcolor(15);
	  settextstyle(2,0,5);
	  outtextxy(x1+8,y1+2,ch);
       }
       void Interface()
       {
	setcolor(15);
	settextstyle(1,0,4);
	outtextxy(170,20,"Simple Calculator");
	setcolor(0);
	setfillstyle(1,0);
	rectangle(220,90,410,340);
	floodfill(222,92,0);
	Form(210,80,400,330,7,4,"Calculator");
	screen(225,120,385,145);
	int x1=220,y1=175,x2=250,y2=200;
         int col=4;
        button(x1,y1,x2,y2,"7",col);
        button(x1+=35,y1,x2+=35,y2,"8",col);
        button(x1+=35,y1,x2+=35,y2,"9",col);
        button(x1+=35,y1,x2+=35,y2,"û",col);
        button(x1+=35,y1,x2+=35,y2,"C",col);
      y1+=35;
      y2+=35;
      x1=220;
      x2=250;
   button(x1,y1,x2,y2,"4",col);
   button(x1+=35,y1,x2+=35,y2,"5",col);
   button(x1+=35,y1,x2+=35,y2,"6",col);
   button(x1+=35,y1,x2+=35,y2,"*",col);
   button(x1+=35,y1,x2+=35,y2,"/",col);
      y1+=35;
      y2+=35;
      x1=220;
      x2=250;
   button(x1,y1,x2,y2,"1",col);
   button(x1+=35,y1,x2+=35,y2,"2",col);
   button(x1+=35,y1,x2+=35,y2,"3",col);
   button(x1+=35,y1,x2+=35,y2,"+",col);
   button(x1+=35,y1,x2+=35,y2,"-",col);
      y1+=35;
      y2+=35;
      x1=220;
      x2=250;
   button(x1,y1,x2,y2,"0",col);
   button(x1+=35,y1,x2+=35,y2,".",col);
   button(x1+=35,y1,x2+=35,y2,"ã",col);
   button(x1+=35,y1,x2+=35,y2,"A",col);
   button(x1+=35,y1,x2+=35,y2,"=",col);

        setcolor(14);
        settextstyle(1,0,3);
        outtextxy(185,380,"Press Escape To Exit");
        setcolor(15);
        settextstyle(7,0,2);
        outtextxy(440,100,"Instructions");
        setcolor(10);
	settextstyle(1,0,1);
        outtextxy(430,150,"Press 'u' For û");
        outtextxy(430,200,"Press 'p' For ã");
        outtextxy(430,250,"Press 'c' For Clear");
        setcolor(15);
        settextstyle(7,0,2);
        outtextxy(20,100,"Designer & ");
        outtextxy(50,140,"Progrmmer");
        setcolor(10);
	settextstyle(7,0,2);
	outtextxy(20,180,"Anuj Upadhyay");
        setcolor(15);
        outtextxy(20,225,"Group Name");
        setcolor(10);
        outtextxy(50,270,"Educators (é)");

       }
     };


void main()
 {
  int d,m;
   d=DETECT;
   initgraph(&d,&m,"C:\\Turboc3\\BGI");
   cleardevice();


	  int  col=1;
	  setcolor(col);
	  setfillstyle(1,col);
	  rectangle(0,0,625,475);
	  floodfill(2,2,col);
	  setcolor(7);
	  rectangle(0,0,625,475);
	  rectangle(1,1,624,474);
	  rectangle(3,3,622,472);
   /////////////////////////////////////
   graphics g;
   g.Interface();

 char ch,a1[25],a2[25];
 int x=0,c=30,r=9,pi=0;
 int clear=0,equals=0,equal1=0,answer=0;
 float val1,val2;
 float result;
 int sum=0,mul=0,div=0,sub=0;
 do
  {
  gotoxy(c,r);
  ch=getch();
  if(clear==1||equals==1||answer==1||pi==1)
    {
    gotoxy(30,9);
    cout<<"0                 ";
    clear=0;
    equals=0;
    answer=0;
    pi=0;
    }
  if(x>9&&(!(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='='||ch=='c'||ch=='C'||ch=='u'||ch=='U')))
      continue;
  gotoxy(c,r);
  switch(ch)
   {
    case'1':
    g.pressed_button(220,245,250,270,"1",14,4);
    cout<<"1";
    break;
    case'2':
    g.pressed_button(255,245,285,270,"2",14,4);
    cout<<"2";
    break;
    case'3':
    g.pressed_button(290,245,320,270,"3",14,4);
    cout<<"3";
    break;
    case'4':
    g.pressed_button(220,210,250,235,"4",14,4);
    cout<<"4";
    break;
    case'5':
    g.pressed_button(255,210,285,235,"5",14,4);
    cout<<"5";
    break;
    case'6':
    g.pressed_button(290,210,320,235,"6",14,4);
    cout<<"6";
    break;
    case'7':
    g.pressed_button(220,175,250,200,"7",14,4);
    cout<<"7";
    break;
    case'8':
    g.pressed_button(255,175,285,200,"8",14,4);
    cout<<"8";
    break;
    case'9':
    g.pressed_button(290,175,320,200,"9",14,4);
    cout<<"9";
    break;
    case'C':case'c':
      g.pressed_button(360,175,390,200,"C",14,4);
      gotoxy(30,9);
      cout<<"0                  ";
      sum=0;mul=0;div=0;sub=0;
      c=30;r=9;x=0;
      clear=1;
      continue;
      break;
    case'*':
       g.pressed_button(325,210,355,235,"*",14,4);
      a1[x]='\0';
      val1=atof(a1);
      mul=1;
      c=30;r=9;x=0;
      clear=1;
      continue;
    break;
    case'/':
      g.pressed_button(360,210,390,235,"/",14,4);
      a1[x]='\0';
      val1=atof(a1);
      div=1;
      c=30;r=9;x=0;
      clear=1;
      continue;
    break;

    case'+':
      g.pressed_button(325,245,355,270,"+",14,4);
      a1[x]='\0';
      val1=atof(a1);
      sum=1;
      c=30;r=9;x=0;
      clear=1;
      continue;
    break;
    case'-':
      g.pressed_button(360,245,390,270,"-",14,4);
      a1[x]='\0';
      val1=atof(a1);
      sub=1;
      c=30;r=9;x=0;
      clear=1;
      continue;
    break;
    case'p':case'P':
    g.pressed_button(290,280,320,305,"ã",14,4);
    gotoxy(30,9);
    cout<<"                   " ;
    gotoxy(30,9);
    cout<<"3.14";
    pi=1;
    continue;
    break;
    case'U': case'u':
      g.pressed_button(325,175,355,200,"û",14,4);
      a1[x]='\0';
      val1=atof(a1);
      result=sqrt(val1);
      gotoxy(30,9);
      cout<<"             ";
      gotoxy(30,9);
      cout<<result;
      c=30;r=9;x=0;
      clear=1;
      continue;
    break;
    case'A':case'a':
    g.pressed_button(325,280,355,305,"A",14,4);
    if(equal1==1)
    {
    gotoxy(30,9);
    cout<<"                ";
    gotoxy(30,9);
    cout<<result;
    }
    answer=1;
    continue;
    break;
    case'=':
      a2[x]='\0';
      val2=atof(a2);
      g.pressed_button(360,280,390,305,"=",14,4);
      gotoxy(30,9);
      cout<<"0                 ";
      if(sum==1)
      {
      result=val1+val2;
      gotoxy(30,9);
      cout<<result;
      }
      else if(div==1)
      {
    if(val2==0)
      {
      gotoxy(30,9);
      cout<<"ì";
     }
      else
      {
      result=val1/val2;
      gotoxy(30,9);
      cout<<result;
      }
      }
      else if(mul==1)
      {
      result=val1*val2;
      gotoxy(30,9);
      cout<<result;
      }
      else if(sub==1)
      {
      result=val1-val2;
      gotoxy(30,9);
      cout<<result;
      }
    equals=1;
    equal1=1;
       c=30;r=9,x=0;
       continue;
    break;
    case'.':
      g.pressed_button(255,280,285,305,".",14,4);
      if(x>0)
      cout<<".";
      else
      continue;
    break;
    case'0':
      g.pressed_button(220,280,250,305,"0",14,4);
      if(x>0)
      cout<<"0";
      else
      continue;
    break;
  default:
       continue;
   }
   c++;
   if(sum==0&&sub==0&&mul==0&&div==0)
       a1[x]=ch;
    else
       a2[x]=ch;
    x++;

  }while(ch!=27);

  closegraph();
 }