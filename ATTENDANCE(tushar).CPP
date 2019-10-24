#include<fstream.h>
#include<conio.h>
#include<stdio.h>
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
ATTENDANCE A;
void main()
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

			
	


		

