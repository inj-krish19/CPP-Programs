#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int age;
	char gender;
	double phone_no;
	int id;
	try{
	
		cout<<"\nEnter roll number : ";
		cin>>id;
		if(id<=0) throw(id);
		cout<<"Enter age :";
		cin>>age;
		if(age<0 || age>100)
			throw(age);
		cout<<"\nEnter gender : ";
		cin>>gender;
		if(!(gender =='m' or gender == 'f'))
			throw(gender);
		
		cout<<"\nEnter phnoe number : ";
		cin>>phone_no;
		double len=trunc(log10(phone_no)+1);
		cout<<endl<<len<<endl;
		if (len != 10) throw (len);
		cout.setf(ios::fixed);
		cout<<"\nThe data is : \n"<<id<<endl<<age<<endl<<gender<<endl<<phone_no<<" "<<len;
	}
	catch(int i)
	{
		if(id <= 0) cout<<"\nEnter valid id";
		else
		{
		
			if(i < 0)
				cout<<endl<<i<<" is too young for a human, Enter approprite age\n";
			else
				cout<<endl<<i<<" is too old for a human, Enter approprite age\n";
		}
	}
	catch(char g)
	{
		cout<<g<<" is not a valid gender\n";
	}
	catch(double length)
	{
		cout<<"\nEnter appropriate phone number";
	}
	catch(...)
	{
		cout<<"\nUnexpected Exception\n";
	}
}
