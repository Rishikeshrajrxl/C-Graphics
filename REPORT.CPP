# include<graphics.h>
# include<conio.h>
# include<dos.h>
# include<iostream.h>
# include<stdio.h>
# include<string.h>
void main()
{
int n=DETECT,gm,i,k,l,g,d,e,z,w,n1,n2,n3;
char p[10],q[10], r[10],s[10],t[10],x[10],m[10],name[20],branch[20],year[20];
char *a,*b,*c;
initgraph(&n,&gm,"c:/turboc3/bgi");
//taking input from the user.
setbkcolor(4);
printf("ENTER YOUR NAME:\n");
gets(name);
printf("ENTER YOUR BRANCH:\n");
gets(branch);
printf("ENTER  YOUR YEAR:\n");
gets(year);
printf("ENTER THE MARKS IN MATHEMATICS\n");
scanf("%d",&k);
printf("ENTER THE MARKS IN HUMAN VALUES\n");
scanf("%d",&l);
printf("ENTER THE MARKS IN CHEMISTRY\n");
scanf("%d",&g);
printf("ENTER THE MARKS IN MECHANICAL ENGG\n");
scanf("%d", &d);
printf("ENTER THE MARKS IN CIVIL ENGG\n");
scanf("%d", &e);

for(i=10;i<290;i++)
{
delay(10);
clrscr();
setcolor(4);
line(10,10,10+i,10);
line(10,10,10,10+i);
line(300,300,300-i,300);
line(300,300,300,300-i);
}
outtextxy(100,18,"REPORT CARD");
line(98,27,190,27);
outtextxy(50,70,"NAME    :");
outtextxy(50,80,"BRANCH  :");
outtextxy(50,90,"YEAR    :");
outtextxy(130,70, name);
outtextxy(130,80,branch);
outtextxy(130,90,year);
line(10,115,10+i,115);
setcolor(0);
line(25,120,25,295);
line(25,120,280,120);
line(280,120,280,295);
line(280,295,25,295);
line(25,145,280,145);
line(200,120,200,295);
line(25,250,280,250);
//description of various subject
 setcolor(4);
outtextxy(50,130,"SUBJECT");
outtextxy(210,130, "MARKS");
setcolor(0);
outtextxy(30,150,"MATHEMATHICS    -");
outtextxy(30,170,"CHEMISTRY       -");
outtextxy(30,190,"HUMAN VALUES    -");
outtextxy(30,210,"MECHANICAL ENGG -");
outtextxy(30,230,"CIVIL ENGG      -");
outtextxy(205,260, "TOTAL=");
//date and time.
    setcolor(6);
outtextxy(200,90,__DATE__);
outtextxy(200,100,__TIME__);
//convertion of character into integer.
setcolor(0);
sprintf(p,"%d",k);
outtextxy(240,150,p);
sprintf(q,"%d",l);
outtextxy(240,170,q);
sprintf(r,"%d",g);
outtextxy(240,190,r);
sprintf(s,"%d",d);
outtextxy(240,210,s);
sprintf(t,"%d",e);
outtextxy(240,230,t);
//total marks calculation.
z=k+l+g+d+e;
sprintf(x,"%d",z);
outtextxy(255,260,x);
setcolor(1);
outtextxy(35,45,"RAJASTHAN TECHNICAL UNIVERSITY");
setcolor(0);
n1=z/100;
n2=z%100;
n2=n2/10;
n3=z%10;
setcolor(4);
switch (n1)
     {
     case 0: a="  ";
     break;
     case 1: a=" one hundred";
     break;
     case 2: a=" two hundred";
     break;
     case 3: a= " three hundred";
     break;
     case 4: a= " four hundred" ;
     break;
     case 5: a= " five hundred";
     break;
     }
outtextxy(30,255,a);

switch(n2)
{
  case 1: switch(n3)
	   {
			case 1: b= " eleven";
			break;
			case 2: b=" twelve";
			break;
			case 3: b= " thirteen";
			break;
			case 4: b=" fourteen";
			break;
			case 5: b= " fifteen";
			break;
			case 6: b= " sixteen";
			 break;
			 case 7: b= " seventeen";
			 break;
			 case 8: b= " eighteen";
			 break;
			 case 9: b= " ninteen";
			 break;
			 }
			  break;


		case 2: b="twenty";
		break;
		case 3: b=" thirty";
		break;
		case 4: b=" fourty";
		break;
		case 5: b= " fifty";
		break;
		case 6: b=" sixty";
		break ;
		case 7: b=" seventy";
		break;
		case 8: b=" eight";
		break;
		case 9: b=" ninty";
		break;
		}
		outtextxy(30,265,b);

if(n2!=1)
{
switch(n3)
  {
    case 1: c= " one";
    break;
    case 2: c= " two";
    break;
    case 3: c= " three";
    break;
    case 4: c= " four";
    break;
    case 5: c= " five" ;
    break;
    case 6: c= " six";
    break ;
    case 7: c= " seven";
    break;
    case 8: c= " eight";
    break;
    case 9: c= "nine";
    break ;
    }
  outtextxy(30,275,c);
}
getch();
closegraph();

}