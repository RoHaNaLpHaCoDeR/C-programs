#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class ATTENDANCE
{
	char EName[20];
	int ECode;
	int WorkingDays;
	int DaysPresent;
	int DaysAbsent;
public:
	void GetData5();
	void PutData5();
	int getECode3();
};

class BUDGET
{
	int BudForEducation;
	int BudForHealth;
	int BudForTransport;
	int BudForElectricity;
	int BudForWater;
public:
	void GetData2();
	void PutData2();
        int GetBudget();
	int getAverageBud();
};

class EMPLOYEES
{
         int EmployeeCode;
         char EmployeeName[20];
         char Designation[20];
         char Division [20];
public:
         void GetData1();
         void PutData1();
         int getEcode1();
};

class PROJECTS
{
	char Sector[20];
	int ProjectNo;
	char ProjectName[20];
	int Cost;
	char HeadOfOperation[20];
	int Deadline;
public:
	void GetData4();
	void PutData4();
	int getProjectNo();
};

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

class WARDLIST
{
	char Division[20];
	char Zone[20];
	char Ward[20];
	public:
	void GetData6();
	void PutData6();
        char*getward();
};

void ATTENDANCE::GetData5()
{
	cout<<"\n\tEnter the name of the Employee\n\t";
	gets(EName);
	cout<<"\n\tEnter the Employee Code\n\t";
	cin>>ECode;
	cout<<"\n\tEnter the total number of working days\n\t";
	cin>>WorkingDays;
	cout<<"\n\tEnter the number of days on which the employee was present\n\t";
	cin>>DaysPresent;
	cout<<"\n\tEnter the number of days on which the employee was absent\n\t";
	cin>>DaysAbsent;
}
void ATTENDANCE::PutData5()
{
	cout<<"\n\tThe name of the employee :\n\t"<<EName<<"\n\tEmployee code :\n\t"<<ECode<<"\n\tNumber of working days :\n\t"<<WorkingDays<<"\n\tPresent days :\n\t"<<DaysPresent<<"\n\tAbsent days :\n\t"<<DaysAbsent;
}
int ATTENDANCE::getECode3()
{
	return(ECode);
}

void BUDGET:: GetData2()
{
	 cout<<"enter budget for education";
	 cin>>BudForEducation;
	 cout<<"enter budget for health";
	 cin>>BudForHealth;
	 cout<<"enter budget for transport";
	 cin>>BudForTransport;
	 cout<<"enter budget for electricity";
	 cin>>BudForElectricity;
	 cout<<"enter budget for water";
	 cin>>BudForWater;
}
void BUDGET:: PutData2()
{
	  cout<<BudForEducation<<"\t"<<BudForHealth<<"\t"<<BudForTransport<<"\t"<<BudForElectricity<<"\t"<<BudForWater<<"\t"<<endl;
}
int BUDGET:: getAverageBud()
{
	  int AverageBudget;
	  AverageBudget=(BudForEducation+BudForHealth+BudForTransport+BudForElectricity+BudForWater)/5;
	  cout<<"average budget="<<AverageBudget;
	  return(AverageBudget);
}
int BUDGET:: GetBudget()
{
     cout<<"budget for education";
return(BudForEducation);
     cout<<"budget for health";
return(BudForHealth);
     cout<<"budget for transport";
return(BudForTransport);
     cout<<"budget for electricity";
return(BudForElectricity);
     cout<<"budget for water";
return(BudForWater);
}

void EMPLOYEES ::GetData1()
{
         cout<<"enter Employee's Code";
         cin>>EmployeeCode;
         cout<<"enter Employee's Name";
         gets(EmployeeName);
         cout<<"Enter Employee's Designation";
         gets(Designation);
         cout<<"enter employee's Division";
         gets(Division);
}
void EMPLOYEES:: PutData1()
{
         cout<<EmployeeCode<<"\t"<<EmployeeName<<"\t"<<Designation<<"\t"<<Division<<endl;
}
int EMPLOYEES:: getEcode1()
{
         return(EmployeeCode);
}

void PROJECTS::GetData4()
{
	cout<<"\n\tEnter the type of work which is to be done\n\t";
	gets(Sector);
	cout<<"\n\tEnter the Project Number\n\t";
	cin>>ProjectNo;
	cout<<"\n\tEnter the name of the Project\n\t";
	gets(ProjectName);
	cout<<"\n\tEnter the average cost of the Project (in Crores)\n\t";
	cin>>Cost;
	cout<<"\n\tEnter the name of the person in charge of this project\n\t";
	gets(HeadOfOperation);
	cout<<"\n\tEnter the deadline for submitting the project\n\t";
	cin>>Deadline;
}
void PROJECTS::PutData4()
{
	cout<<"\n\tType of Work :\n\t"<<Sector<<"\n\tProject Number :\n\t"<<ProjectNo<<"\n\tName of the project :\n\t"<<ProjectName<<"\n\tCost of making :\n\t"<<Cost<<"\n\tPerson in Charge :\n\t"<<HeadOfOperation<<"\n\tDeadline :\n\t"<<Deadline;
}
int PROJECTS::getProjectNo()
{
	return(ProjectNo);
}

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

void WARDLIST::GetData6()
{
	cout<<"\n\tEnter the name of the Division of the MCD\n\t";
	gets(Division);
	cout<<"\n\tEnter the name of the Zone\n\t";
	gets(Zone);
	cout<<"\n\tEnter the name of the Ward\n\t";
	gets(Ward);
}
void WARDLIST::PutData6()
{
	cout<<"\n\tThe name of the division :\n\t"<<Division<<"\n\tName of the Zone :\n\t"<<Zone<<"\n\tName of the Ward :\n\t"<<Ward;
}
char* WARDLIST::getward()
{
	return(Ward);
}

ATTENDANCE A;
BUDGET B;
EMPLOYEES E;
PROJECTS P;
SALARY S;
WARDLIST W;

void ATTENDANCE()
{
	clrscr();
	void Enter_File1();
	void Display_File1();
	void Search1();
	void Modify1();
	void Delete1();
	
	int choice;
	do
	{
		cout<<"\n\tMain Menu\n\t";
		cout<<"\n\t1.Add a record\n\t";
		cout<<"\n\t2.Display the record\n\t";
		cout<<"\n\t3.Search a record\n\t";
		cout<<"\n\t4.Modify a record\n\t";
		cout<<"\n\t5.Delete a record\n\t";
		cout<<"\n\t6.Want to exit?\n\t";

		cout<<"Enter your choice";
		cin>>choice;
		
		switch(choice)
		{
			case 1: Enter_File1();
				break;
			case 2: Display_File1();
				break;
			case 3: Search1();
				break;
			case 4: Modify1();
				break;
			case 5: Delete1();
				break;
		}
	}while(choice!=6);
	getche();
}
void Enter_File1()
{
	ofstream afile("pro1.dat",ios::binary|ios::app);
	A.GetData5();
	afile.write((char*)& A,sizeof(A));
	afile.close();
	cout<<"\n\t";
	getche();
}
void Display_File1()
{
	ifstream bfile("pro1.dat",ios::binary);
	while(bfile.read((char*)& A,sizeof(A)))
	{
		A.PutData5();
	}
	bfile.close();
	cout<<"\n\t";
	getche();
}
void Search1()
{
	int p=-1;
	int z;
	ifstream cfile("pro1.dat",ios::binary);
	cout<<"\n\tPlease enter the Employee code which is to be searched\n\t";
	cin>>z;
	while(cfile.read((char*)& A,sizeof(A)))
	{
		if(A.getECode3()==z)
		{
			p++;
		}
	}
	if(p==-1)
		cout<<"\n\tSorry!Record not found\n\t";
	cfile.close();
	getche();
}
void Modify1()
{
	int q=-1;
	int a=0;
	int t;
	cout<<"\n\tPlease enter the Employee code which is to modified\n\t";
	cin>>t;
	fstream dfile("pro1.dat",ios::in|ios::out|ios::binary);
	while(dfile.read((char*)& A,sizeof(A)))
	{
		a++;
		if(A.getECode3()==t)
		{
			A.GetData5();
			dfile.seekp((a-1)*sizeof(A),ios::beg);
			dfile.write((char*)& A,sizeof(A));
			q++;
		}
	}
	if(q==-1)
		cout<<"Sorry Record not found";
	dfile.close();
	getche();
}
void Delete1()
{
	int b;
	ifstream efile("pro1.dat",ios::binary);
	ofstream ffile("temp1.dat",ios::binary);
	cout<<"\n\tPlease enter the Employee code to be deleted\n\t";
	cin>>b;
	while(efile.read((char*)& A,sizeof(A)))
	{
		if(A.getECode3()!=b)
		{
			ffile.write((char*)& A,sizeof(A));
		}
	}
	remove("pro1.dat");
	rename("temp1.dat","pro1.dat");
	efile.close();
	ffile.close();
	cout<<"\n\t";
	getche();
}

void BUDGET()
{
clrscr();
void enterbudget();
void calculatebudget();
void displaybudget();
void searchbudget();
void modifybudget();
void deletebudget();
int c;
     do
     {
	   cout<<"\n main menu "<<endl;
	   cout<<"1. enter the value of all budgets"<<endl;
	   cout<<"2. calculate average budget "<<endl;
	   cout<<"3. display all budgets "<<endl;
	   cout<<"4. search a budget value "<<endl;
	   cout<<"5. modify a value of budget "<<endl;
	   cout<<"6. delete a budget value "<<endl;
	   cout<<"7.exit "<<endl;
cout<<"enter your choice"<<" ";
cin>>c;
	  switch(c)
	  {
	  case 1: enterbudget();
	  break;
	  case 2: calculatebudget();
	  break;
	  case 3: displaybudget();
	  break;
	  case 4: searchbudget();
	  break;
	  case 5: modifybudget();
	  break;
	  case 6: deletebudget();
	  break;
	  }
     }while(c!=7);
getche();
}
void enterbudget()
{
                  ofstream afile("pro.dat",ios::binary|ios::app);
                  B.GetData2();
                  afile.write((char*)& B, sizeof(B));
                  afile.close();
cout<<endl;
getche();
}
void calculatebudget()
{
                  ifstream gfile("pro.dat",ios::binary);
	                while(gfile.read((char*)& B, sizeof(B)))
	                {
	                B.getAverageBud();
	                }
                        gfile.close();
}
void displaybudget()
{
                  ifstream bfile("pro.dat",ios::binary);
	                while(bfile.read((char*)& B, sizeof(B)))
	                {
	                B.PutData2();
	                }
                        bfile.close();
cout<<endl;
getche();
}
void searchbudget()
{
                  int p=-1,z;
                  ifstream cfile("pro.dat",ios::binary);
                  cout<<"please enter budget to be searched:\n"; 
                  cin>>z;
	                   while(cfile.read((char*)& B,sizeof(B)))
	                   {
			         if(B.GetBudget()==z)
                                 {
			         cout<<"budget";
			         p++;
                                 }
	                   }
	          if(p==-1)
	          cout<<"sorry!record not found\n";
cout<<endl;
                  cfile.close();
getche();
}
void modifybudget()
{
                  int g=-1,a=0,t;
                  cout<<"please enter the budget to be modified:\n";
                  cin>>t;
                  fstream dfile("pro.dat",ios::in|ios::binary|ios::out );
		            while(dfile.read((char*)& B,sizeof(B)))
		            {
		            a++;
				    if(B.GetBudget()==t)
				    {
				    B.GetData2();
				    dfile.seekp((a-1)*sizeof(B),ios::beg);
				    dfile.write((char*)& B, sizeof(B));
				    g++;
				    }
		            }
		  if(g==-1)
		  cout<<"sorry record not found\n";
                  dfile.close();
getche();
}
void deletebudget()
{
                  int b;
                  ifstream efile("pro.dat",ios::binary);
                  ofstream ffile("Pro.dat",ios::binary);
                  cout<<"please enter the budget to be deleted\n";
                  cin>>b;
		         while(efile.read((char*)& B,sizeof(B)))
		         {
				    if(B.GetBudget()!=b)
				    {
				    ffile.write((char*)& B,sizeof(B));
				    }
		         }
remove("pro.dat");
rename("Pro.dat","pro.dat");
efile.close();
ffile.close();
cout<<endl;
getche();
}

void EMPLOYEES()
{
clrscr();
int c;
void enteremployee();
void displayemployee();
void searchemployee();
void modifyemployee();
void deleteemployee();
            do
            {
            cout<<"\n main menu"<<endl;
            cout<<"1.Enter Employee details"<<endl;
            cout<<"2.Display Employee details"<<endl;
            cout<<"3.Search Employee Details"<<endl;
            cout<<"4.Modify Employee Details"<<endl;
            cout<<"5.Delete Employee Details"<<endl;
            cout<<"6.want to exit"<<endl;
            cout<<"enter your choice";
            cin>>c;
                            switch(c)
                            {
                                 case 1: enteremployee();
                            break;
                                 case 2: displayemployee();
                            break;
                                 case 3: searchemployee();
                            break;
                                 case 4: modifyemployee();
                            break;
                                 case 5: deleteemployee();
                            break;
                            }
             }while(c!=6);
getche();
}
void enteremployee()
{
             ofstream afile("champ.dat",ios::binary|ios::app);
             E.GetData1();
             afile.write((char*)& E, sizeof(E));
             afile.close();
cout<<endl;
getche();
}
void displayemployee()
{
             ifstream bfile("champ.dat",ios::binary);
             while(bfile.read((char*)& E, sizeof(E)))
             {
             E.PutData1();
             }
             bfile.close();
cout<<endl;
getche();
}
void searchemployee()
{
             int p=-1,z;
             ifstream cfile("champ.dat",ios::binary);
             cout<<"please enter the employee code to be searched:\n";
             cin>>z;
                      while(cfile.read((char*)& E,sizeof(E)))
                      {
                                 if(E.getEcode1()==z)
                                 {
                                 E.PutData1();
                                 p++;
                                 }
                      }
                      if(p==-1)
                      cout<<"sorry!record not found\n";
cout<<endl;
                      cfile.close();
getche();
}
void modifyemployee()
{
              int g=-1,a=0,t;
              cout<<"please enter the employee code to be modified:\n";
              cin>>t;
              fstream dfile("champ.dat",ios::in|ios::binary|ios::out );
                          while(dfile.read((char*)& E, sizeof(E)))
                          {
                          a++;
                                  if(E.getEcode1()==t)
                                  {
                                  E.GetData1();
                                  dfile.seekp((a-1)*sizeof(E),ios::beg);
                                  dfile.write((char*)& E, sizeof(E));
                                  g++;
                                  }
                           }
                           if(g==-1)
                           cout<<"sorry record not found\n";
                           dfile.close();
cout<<endl;
getche();
}
void deleteemployee()
{
               int b;
               ifstream efile("champ.dat",ios::binary);
               ofstream ffile("bigchamp.dat",ios::binary);
               cout<<"please enter the employee code to be deleted\n";
               cin>>b;
                           while(efile.read((char*)& E, sizeof(E)))
                           {
                                   if(E.getEcode1()!=b)
                                   {
                                   ffile.write((char*)& E,sizeof(E));
                                   }
                           }
remove("champ.dat");
rename("bigchamp.dat","champ.dat");
efile.close();
ffile.close();
cout<<endl;
getche();
}

void PROJECTS()
{
	clrscr();
	void Enter_File();
	void Display_File();
	void Search();
	void Modify();
	void Delete();
	
	int choice;
	do
	{
		cout<<"\n\tMain Menu\n\t";
		cout<<"\n\t1.Add a record\n\t";
		cout<<"\n\t2.Display the record\n\t";
		cout<<"\n\t3.Search a record\n\t";
		cout<<"\n\t4.Modify a record\n\t";
		cout<<"\n\t5.Delete a record\n\t";
		cout<<"\n\t6.Want to exit?\n\t";

		cout<<"Enter your choice";
		cin>>choice;
		
		switch(choice)
		{
			case 1: Enter_File();
				break;
			case 2: Display_File();
				break;
			case 3: Search();
				break;
			case 4: Modify();
				break;
			case 5: Delete();
				break;
		}
	}while(choice!=6);
	getche();
}
void Enter_File()
{
	ofstream afile("pro.dat",ios::binary|ios::app);
	P.GetData4();
	afile.write((char*)& P,sizeof(P));
	afile.close();
	cout<<"\n\t";
	getche();
}
void Display_File()
{
	ifstream bfile("pro.dat",ios::binary);
	while(bfile.read((char*)& P,sizeof(P)))
	{
		P.PutData4();
	}
	bfile.close();
	cout<<"\n\t";
	getche();
}
void Search()
{
	int p=-1;
	int z;
	ifstream cfile("pro.dat",ios::binary);
	cout<<"\n\tPlease enter the Project number which is to be searched\n\t";
	cin>>z;
	while(cfile.read((char*)& P,sizeof(P)))
	{
		if(P.getProjectNo()==z)
		{
			p++;
		}
	}
	if(p==-1)
		cout<<"\n\tSorry!Record not found\n\t";
	cfile.close();
	getche();
}
void Modify()
{
	int q=-1;
	int a=0;
	int t;
	cout<<"\n\tPlease enter the project number which is to modified\n\t";
	cin>>t;
	fstream dfile("pro.dat",ios::in|ios::out|ios::binary);
	while(dfile.read((char*)& P,sizeof(P)))
	{
		a++;
		if(P.getProjectNo()==t)
		{
			P.GetData4();
			dfile.seekp((a-1)*sizeof(P),ios::beg);
			dfile.write((char*)& P,sizeof(P));
			q++;
		}
	}
	if(q==-1)
		cout<<"Sorry Record not found";
	dfile.close();
	getche();
}
void Delete()
{
	int b;
	ifstream efile("pro.dat",ios::binary);
	ofstream ffile("temp.dat",ios::binary);
	cout<<"\n\tPlease enter the Project number to be deleted\n\t";
	cin>>b;
	while(efile.read((char*)& P,sizeof(P)))
	{
		if(P.getProjectNo()!=b)
		{
			ffile.write((char*)& P,sizeof(P));
		}
	}
	remove("pro.dat");
	rename("temp.dat","pro.dat");
	efile.close();
	ffile.close();
	cout<<"\n\t";
	getche();
}

void SALARY()
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

void WARDLIST()
{
	clrscr();
	void Enter_File2();
	void Display_File2();
	void Search2();
	void Modify2();
	void Delete2();
	
	int choice;
	do
	{
		cout<<"\n\tMain Menu\n\t";
		cout<<"\n\t1.Add a record\n\t";
		cout<<"\n\t2.Display the record\n\t";
		cout<<"\n\t3.Search a record\n\t";
		cout<<"\n\t4.Modify a record\n\t";
		cout<<"\n\t5.Delete a record\n\t";
		cout<<"\n\t6.Want to exit?\n\t";

		cout<<"Enter your choice";
		cin>>choice;
		
		switch(choice)
		{
			case 1: Enter_File2();
				break;
			case 2: Display_File2();
				break;
			case 3: Search2();
				break;
			case 4: Modify2();
				break;
			case 5: Delete2();
				break;
		}
	}while(choice!=6);
	getche();
}
void Enter_File2()
{
	ofstream afile("pro2.dat",ios::binary|ios::app);
	W.GetData6();
	afile.write((char*)& W,sizeof(W));
	afile.close();
	cout<<"\n\t";
	getche();
}
void Display_File2()
{
	ifstream bfile("pro2.dat",ios::binary);
	while(bfile.read((char*)& W,sizeof(W)))
	{
		W.PutData6();
	}
	bfile.close();
	cout<<"\n\t";
	getche();
}
void Search2()
{
	int p=-1;
	char z[20];
	ifstream cfile("pro2.dat",ios::binary);
	cout<<"\n\tPlease enter the Ward name which is to be searched\n\t";
	gets(z);
	while(cfile.read((char*)& W,sizeof(W)))
	{
		if(strcmpi(W.getward(),z)==0)
		{
			p++;
			W.PutData6();
		}
	}
	if(p==-1)
		cout<<"\n\tSorry!Record not found\n\t";
	cfile.close();
	getche();
}
void Modify2()
{
	int q=-1;
	int a=0;
	char t[20];
	cout<<"\n\tPlease enter the Ward name which is to modified\n\t";
	gets(t);
	fstream dfile("pro2.dat",ios::in|ios::out|ios::binary);
	while(dfile.read((char*)& W,sizeof(W)))
	{
		a++;
		if(strcmpi(W.getward(),t)==0)
		{
			W.GetData6();
			dfile.seekp((a-1)*sizeof(W),ios::beg);
			dfile.write((char*)& W,sizeof(W));
			q++;
		}
	}
	if(q==-1)
		cout<<"Sorry Record not found";
	dfile.close();
	getche();
}
void Delete2()
{
	char b[20];
	ifstream efile("pro2.dat",ios::binary);
	ofstream ffile("temp2.dat",ios::binary);
	cout<<"\n\tPlease enter the Ward name to be deleted\n\t";
	gets(b);
	while(efile.read((char*)& W,sizeof(W)))
	{
		if(strcmpi(W.getward(),b)!=0)
		{
			ffile.write((char*)& W,sizeof(W));
		}
	}
	remove("pro2.dat");
	rename("temp2.dat","pro2.dat");
	efile.close();
	ffile.close();
	cout<<"\n\t";
	getche();
}

void main()
{
    int c;
    clrscr();
                          do
                          {
                          cout<<"Main Menu "<<endl;
                          cout<<"1.Attendance of the employees"<<endl;
                          cout<<"2.Budget for various works"<<endl;
                          cout<<"3.Enter the employee details"<<endl;
                          cout<<"4.Projects to complete"<<endl;
                          cout<<"5.Provide the salaries to the employees"<<endl;
                          cout<<"6.Enter the list of respective wards"<<endl;
                          cout<<"enter your choice"<<" ";
                          cin>>c;
                                       switch(c)
                                       {
                                       case 1: ATTENDANCE();
                                       break;
                                       case 2: BUDGET();
                                       break;
                                       case 3: EMPLOYEES();
                                       break;
                                       case 4: PROJECTS();
                                       break;
                                       case 5: SALARY();
                                       break;
                                       case 6: WARDLIST();
                                       break;
                                       }
                          }while(c!=7);
getche();
}
