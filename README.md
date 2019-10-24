# C-programs
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
