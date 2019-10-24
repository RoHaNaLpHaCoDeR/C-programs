#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class WARDLIST
{
	char Division[20];
	char Zone[20];
	char Ward[20];
	public:
	void GetData6();
	void PutData6();
};
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

WARDLIST W;
void main()
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
		if(strmpi(Ward,z)==0)
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
		if(strmpi(Ward,t)==0)
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
		if(strmpi(Ward,b)!=0)
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

			
	


		

