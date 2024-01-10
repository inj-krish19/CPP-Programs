#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream fout;
	fout.open("country");
	fout<<"India"<<endl<<"Europe"<<endl<<"Australia"<<endl<<"United Kingdom";
	fout.close();
	
	fout.open("capital");
	fout<<"New Delhi"<<endl<<"Brussels"<<endl<<"Canberra"<<endl<<"London";
	fout.close() ;
	
	char line[80];
	ifstream fin;
	fin.open("country");
	cout<<"\nCountries are : ";
	while(fin)
	{
		fin.getline(line,80);
		cout<<"\n"<<line;
	}
	fin.close();
	fin.open("capital");
	cout<<"\nCapitals are : ";
	while(fin)
	{
		fin.getline(line,80);
		cout<<"\n"<<line;
	}
	fin.close();
	ifstream f1,f2;
	ofstream f3;
	f1.open("country");
	f2.open("capital");
	f3.open("country_caital");
	while(f1)
	{
		f1.getline(line,80);
		f3<<endl<<line;
	}
	while(f2)
	{
		f2.getline(line,80);
		f3<<endl<<line;
	}
	f3.close();
}
