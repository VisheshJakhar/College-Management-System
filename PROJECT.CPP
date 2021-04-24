#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include"student.h"
#include"teacher.h"
#include"marks.h"
#include"fees.h"
#include"attendence.h"
class teacher
{public:
teacherdetail()
{
int zf;
cout<<"Processing";
delay(1000);
cout<<"..";
delay(1000);
cout<<"..";
delay(1000);
cout<<"..";
delay(1000);
cout<<"..";
clrscr();
cout<<"***********************************College management system*************************";
cout<<"\nPlease choose from the following options:-";
cout<<"\n1.To upload teacher`s detail";
cout<<"\n2.To enter marks";
cout<<"\n3.To enter attendence\n";
cin>>zf;
switch(zf)
{
case 1:
{teaget();
clrscr();
teashow();
break;  }
case 2:
{
marksu();
break;}
case 3:
{
atteni();
clrscr();
attend();
break;}
default:
cout<<"Please enter valid choice";
}
}

};
class student:public teacher
{public:
studentdetail()
{
int zg;
cout<<"Processing";
delay(1000);
cout<<"..";
delay(1000);
cout<<"..";
delay(1000);
cout<<"..";
delay(1000);
cout<<"..";
clrscr();
cout<<"******************************College management system************************";
cout<<"\nChoose from the following options:-";
cout<<"\n1.To fill student detail form";
cout<<"\n2.To see marks";
cout<<"\n3.Pay fees\n";
cin>>zg;
switch(zg)
	{
	case 1:
		{
		stuget();
		clrscr();
		stushow();
		}
		break;
	case 2:
		{
		markss();
		}
		break;
	case 3:
		{
		fees();
		}
	default:
	cout<<"Please enter valid entry";
	}
}};
void main()
{ int zh;
int zi;
int zj;
int zk;
clrscr();
student o;
cout<<"                             W";
delay(1000);
cout<<"E";
delay(1000);
cout<<"L";
delay(1000);
cout<<"C";
delay(1000);
cout<<"O";
delay(1000);
cout<<"M";
delay(1000);
cout<<"E";
delay(1000);
cout<<" T";
delay(1000);
cout<<"O";
delay(1000);
cout<<" A";
delay(1000);
cout<<"B";
delay(1000);
cout<<"C";
delay(1000);
cout<<" C";
delay(1000);
cout<<"O";
delay(1000);
cout<<"L";
delay(1000);
cout<<"L";
delay(1000);
cout<<"E";
delay(1000);
cout<<"G";
delay(1000);
cout<<"E";
delay(1000);
cout<<"\n\n\n                                        *                         \n";
delay(1000);
cout<<"                                       ***                        \n";
delay(1000);
cout<<"                                      *****                        \n";
delay(1000);
cout<<"                                     *******                        \n";
delay(1000);
cout<<"                                    *********                        \n";
delay(1000);
cout<<"                                   ***********                        \n";
delay(1000);
cout<<"                      **************************************                 \n";
delay(1000);
cout<<"                      **************************************                 \n";
delay(1000);
cout<<"                      **************************************                  \n";
delay(1000);
cout<<"                      **************************************                 \n";
delay(1000);
cout<<"                      **************************************                 \n";
delay(1000);
cout<<"                      **************************************                 \n";
delay(1000);
cout<<"                      **************************************                 \n";
delay(1000);
cout<<"                      **************************************                 \n";
delay(1000);
cout<<"                      **************************************                 \n";
delay(1000);
cout<<"                      **************************************                 \n";
delay(1000);
cout<<"                      **************************************                 \n";
delay(1000);
cout<<"                      ***************        ***************                 \n";
delay(1000);
cout<<"                      ***************        ***************                 \n";
delay(1000);
cout<<"                      ***************        ***************		 \n";
delay(1000);
delay(1000);
clrscr();
cout<<"\n\nWhich portal you want to visit.\n\nFor teacher portal press 1 and for student press 2\n";
cin>>zh;
switch(zh)
{
case 1:
{clrscr();
teach:
o.teacherdetail();
cout<<"\nIf you again want to visit teachers portal press 1, for student portal press 2, else 0 to exit out";
cin>>zi;
if(zi == 1)
{clrscr();
goto teach;}
else if(zi == 2)
{
clrscr();
goto student;
}
else
{break;}
}
case 2:
{clrscr();
student:
o.studentdetail();
cout<<"\nIf you again want to go to student`s portal press 1, press 2 to go to teacher`s portal, else to go out press 0";
cin>>zj;
if(zj == 1)
{clrscr();
goto student;}
else if(zj == 2)
{clrscr();
goto teach;}
else
{break;}
}
default:
{cout<<"\nPlease enter valid option";
}
getch();
}}