int z;//sem
char za[8];//branch
int zb;//how many
int zc;//initialize
int zd[100];//d
char ze[100];//e
atteni()
{
cout<<"Enter the sem:-";
cin>>z;
cout<<"\nEnter branch:-";
cin>>za;
cout<<"\nFor how many student you want to take attendence:-";
cin>>zb;
for(zc=0;zc<zb;zc++)
{
cout<<"\nEnter roll number:-";
cin>>zd[zc];
cout<<"\nEnter p for present and a for absent:-";
cin>>ze[zc];
}
}
attend()
{
cout<<"Sem:-"<<z;
cout<<"\nBranch:-"<<za;
for(zc=0;zc<zb;zc++)
{
cout<<"\nRoll no:-"<<zd[zc];
cout<<"\nAttendence status:-"<<ze[zc];
}  }