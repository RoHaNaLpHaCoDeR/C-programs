#include<fstream.h>
#include<conio.h>
#include<stdio.h>

class SALARY
{
	char EmpName[20];
	int EmpCode;
	int Salary;
	char Designation1[20];
public:
	void GetData3();
	void PutData3();
	int getEcode2();
};
void SALARY::GetData3()
{
	      cout<<"enter Employee Name";
	      gets(EmpName);
	      cout<<"enter Employee Code";
	      cin>>EmpCode;
	      cout<<"enter Employee Salary";
	      cin>>Salary;
	      cout<<"enter Employee's Destination";
	      gets(Designation1);
}
void SALARY::PutData3()
{
	   cout<<EmpName<<"\t"<<EmpCode<<"\t"<<Salary<<"\t"<<Designation1;
}
int SALARY:: getEcode2()
{
	   return(EmpCode);
}
SALARY S;
void main()
{
clrscr();
int c;
void entersalary();
void displaysalary();
void searchsalary();
void deletesalary();
void modifysalary();
		    do
		    {
		    cout<<"\n main menu"<<endl;
		    cout<<"1.add Employee salary detail"<<endl;
		    cout<<"2.display Employee salary details"<<endl;
		    cout<<"3.search Employee salary details"<<endl;
		    cout<<"4.modify Employee salary details"<<endl;
		    cout<<"5.delete Employee salary details"<<endl;
		    cout<<"6.want ot exit"<<endl;
		    cout<<"enter your selection";
		    cin>>c;
				 switch(c)
				 {
				 case 1: entersalary();
				 break;
				 case 2: displaysalary();
				 break;
				 case 3: searchsalary();
				 break;
				 case 4: modifysalary();
				 break;
				 case 5: deletesalary();
				 break;
				 }
		     }while(c!=6);
getche();
}
void entersalary()
{
		ofstream afile("devel.dat",ios::binary|ios::app );
		S.GetData3();
		afile.write((char*)& S, sizeof(S));
		afile.close();
cout<<endl;
getche();
}
void displaysalary()
{
                ifstream bfile("devel.dat",ios::binary);
                        while(bfile.read((char*)& S, sizeof(S)))
                        {
                        S.PutData3();
                        }
                        bfile.close();
cout<<endl;
getche();
}
void searchsalary()
{
                int p=-1,z;
                ifstream cfile("devel.dat",ios::binary);
                cout<<"please enter the employee code to be searched:\n";
                cin>>z;
                          while(cfile.read((char*)& S,sizeof(S)))
                          {
                                   if(S.getEcode2()==z)
                                   {
                                   S.PutData3();
                                   p++;
                                   }
                           }
                if(p==-1)
                cout<<"sorry!record not found\n";
cout<<endl;
                cfile.close();
getche();
}
void modifysalary()
{
                 int g=-1,a=0,t;
                 cout<<"please enter the employee code to be modified:\n";
                 cin>>t;
                 fstream dfile("devel.dat",ios::in|ios::binary|ios::out );
                           while(dfile.read((char*)& S,sizeof(S)))
                           {
                           a++;
                                   if(S.getEcode2()==t) 
                                   {
                                   S.GetData3();
                                   dfile.seekp((a-1)*sizeof(S),ios::beg);
                                   dfile.write((char*)& S, sizeof(S));
                                   g++;
                                   }
                            }
                   if(g==-1)
                   cout<<"sorry record not found\n";
                   dfile.close();
getche();
}
void deletesalary()
{
                  int b;
                  ifstream efile("devel.dat",ios::binary);
                  ofstream ffile("prototype.dat",ios::binary);
                  cout<<"please enter the employee code to be deleted\n";
                  cin>>b;
                  while(efile.read((char*)& S,sizeof(S)))
                  {
                              if(S.getEcode2()!=b)
                              {
                              ffile.write((char*)& S, sizeof(S));
                              }
                  }
remove("devel.dat");
rename("prototype.dat","devel.dat");
efile.close();
ffile.close();
cout<<endl;
getche();
}



