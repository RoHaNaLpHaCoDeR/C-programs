#include<fstream.h>
#include<conio.h>
#include<stdio.h>
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
PROJECTS P;
void main()
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

			
	


		

