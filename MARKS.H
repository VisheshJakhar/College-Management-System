 int o;//Sem
 char p[6];//branch & section
 char q[16];//subject
 int r[100];//enter rollno
 int s[100];//marks
 int t;//forloop
 int u;//for loop
marksu()
{cout<<"Upload marks\n\n";
cout<<"Enter semester:-";
cin>>o;
cout<<"Enter branch and section:-";
cin>>p;
cout<<"Enter subject:-";
cin>>q;
cout<<"For how many students you want to upload marks:-";
cin>>u;
for(t=0;t<u;t++)
{cout<<"Enter roll number:-";
cin>>r[t];
cout<<"Enter marks:-";
cin>>s[t];}
}
markss()
{clrscr();
cout<<"Semester:-"<<o;
cout<<"\nBranch and section:-"<<p;
cout<<"\nSubject:-"<<q;
for(t=0;t<u;t++)
{cout<<"\nRoll number:-"<<r[t];
cout<<"\nMarks:-"<<s[t];}
}