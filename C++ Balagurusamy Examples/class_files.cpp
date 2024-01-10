#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class inventory
{
	char name[20];
	int code;
	float cost;
	public:
		void readdata()
		{
			cout<<"Enter name : "; cin>>name;
			cout<<"\nenter code : ";cin>>code;
			cout<<"\nEnter cost : "; cin>>cost;
		}
		void writedata()
		{
			cout<<setiosflags(ios::left)<<setw(10)<<name;
			cout<<setw(10)<<code;
			cout<<setprecision(5)<<setw(10)<<cost;
			cout<<endl<<endl;
		}
};
main()
{
	inventory product[3];
	fstream file;
	file.open("stock",ios::in | ios::out);
	cout<<"\nenter details for three items :\n";
	for(int i=0;i<3;i++)
	{
		product[i].readdata() ;
		file.write((char *) &product[i],sizeof(product[i]));
	}
	file.seekg(0);
	cout<<"\n\nOutput is : \n\n";
	for(int i=0;i<3;i++)
	{
		file.read((char *) &product[i], sizeof(product[i]));
		product[i].writedata() ;
	} 
	file.close() ;
	
	float height[5]={12.45,234.1,456.23,567.4,900.78};
	ofstream outfile;
	outfile.open("binary"); 
	outfile.write((char *) & height,sizeof(height));
	outfile.close() ;
	ifstream infile;
	infile.open("binary");
	infile.read((char *) & height,sizeof(height)); 
	for(int i=0;i<5;i++)
	{
		cout<<height[i]<<endl;
	} 
	infile.close() ;
}





