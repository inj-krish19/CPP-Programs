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
	inventory product;
	fstream inoutfile;
	inoutfile.open("stock.dat",ios::ate | ios::Init | ios::out | ios::binary);
	inoutfile.seekg(0,ios::beg);
	cout<<"Current contents of stock are "<<endl;
	while(inoutfile.read(char*)) 	
}
