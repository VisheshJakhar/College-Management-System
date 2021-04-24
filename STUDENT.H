		char a[30];//Name
		int b;//Semester
		int c;//rollno
		int d;//age
		char e[30];//phone_no
		char f[30];//father_name
		char g[30];//mother_name
		char h[35];//email
		char i[6];//Branch&section
	       void stuget()
	       {
	       cout<<"Enter name of student:-\n";
	       cin>>a;
	       cout<<"Enter semester:-\n";
	       cin>>b;
	       cout<<"Enter roll_no:-\n";
	       cin>>c;
	       cout<<"Enter age:-\n";
	       cin>>d;
	       cout<<"Enter phone_no:-\n";
	       cin>>e;
	       cout<<"Enter father`s name:-\n";
	       cin>>f;
	       cout<<"Enter mother`s name:-\n";
	       cin>>g;
	       cout<<"Enter E-mail address:-\n";
	       cin>>h;
	       cout<<"Enter branch and section:-\n";
	       cin>>i;
	       }
	       void stushow()
	       {
		cout<<"\n\n\nDetails of student\n";
		cout<<" " ;
		cout<<"Name of student:-"<<a<<"\n\n";
		cout<<"Semester:-"<<b<<"\n\n";
		cout<<"Roll_no:-"<<c<<"\n\n";
		cout<<"Age:-"<<d<<"\n\n";
		cout<<"Phone number:-"<<e<<"\n\n";
		cout<<"Father`s name:-"<<f<<"\n\n";
		cout<<"Mother`s name:-"<<g<<"\n\n";
		cout<<"E-mail address:-"<<h<<"\n\n";
		cout<<"Branch and section:-"<<i<<"\n\n";
	       }
