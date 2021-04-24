char j[30];//name
int k;//teacher`s id
char l[20];//Feild of specialization
char m[10];//phone no
char n[30];//Email
teaget()//Function to get details of teacher
{cout<<"Enter name of teacher:-";
cin>>j;
cout<<"Enter teacher id:-";
cin>>k;
cout<<"Enter the feild of specialization:-";
cin>>l;
cout<<"Enter phone number:-";
cin>>m;
cout<<"Enter Email Id:-";
cin>>n;}
teashow()//Function to show the details of teachers
{
cout<<"Name:-"<<j<<"\n\n";
cout<<"T.Id:-"<<k<<"\n\n";
cout<<"Feild of specialization:-"<<l<<"\n\n";
cout<<"Phone_number:-"<<m<<"\n\n";
cout<<"Email-Id:-"<<n<<"\n\n";
}