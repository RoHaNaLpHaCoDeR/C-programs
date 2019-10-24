#include<fstream.h>
#include<conio.h>
#include<stdio.h>

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
BUDGET B;
void main()
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





