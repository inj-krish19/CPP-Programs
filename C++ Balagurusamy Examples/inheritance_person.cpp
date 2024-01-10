#include<iostream>
using namespace std;

class person
{
	long int adhaar,mobile;
	string name;
	string city;
	int age;
	char gender;
	public:
		setdata(long int a, long int m, string n, string c,int ag,char g)
		{
			adhaar =a;
			mobile=m;
			name=n;
			city=c;
			age=ag;
			gender=g;
		}
		getdata()
		{
			cout<<endl<<adhaar<<endl<<mobile<<endl<<name<<endl<<city<<endl<<age<<endl<<gender;
		}
};
class employee:public person
{
	int emp_id,salary;
	string designation;
	public:
		setempdata(int id,int s,string d)
		{
			emp_id = id;
			salary=s;
			designation=d;
		}
		getempdata()
		{
			cout<<endl<<emp_id<<endl<<salary<<endl<<designation;
		}
};

class student:public person
{
	long int st_id,library_id;
	int percentage;
	string last_degree,hobby;
	public:
		setstudata(long int id,int p,long int l_id,string ld,string h)
		{
			st_id = id;
			percentage=p;
			library_id=l_id;
			last_degree = ld;
			hobby=h;
		}
		getstudata()
		{
			cout<<endl<<st_id<<endl<<percentage<<endl<<library_id<<endl<<last_degree<<endl<<hobby;
		}
};

class hourlyemployee: public employee
{
	int num_of_hour;
	public:
	sethempdata()
	{
		num_of_hour=50;
	}
	gethempdata()
	{
		cout<<endl<<num_of_hour;
	}
};

class regularemployee:public employee
{
	int da,ta,hra;
	public:
	setrempdata()
	{
		da=50,ta=20,hra=20;
	}
	getrempdata()
	{
		cout<<endl<<da<<endl<<ta<<endl<<hra;
	}
};
main()
{
	employee e1;
	student s1;
	hourlyemployee he1;
	regularemployee re1;
	cout<<"\n\nFollowing is employee data :";
	e1.setdata(111111,32453,"pooja","surat",23,'f');
	e1.getdata();
	e1.setempdata(101,20000,"manager");
	e1.getempdata();
	
	cout<<"\n\nFollowing is student data :";
	s1.setdata(112351,32253,"janak","Ahmedabad",19,'m');
	s1.getdata();
	s1.setstudata(2023021,96,2023123,"commerce","music");
	s1.getstudata();
	
	cout<<"\n\nFollowing is regular employee data :";
	re1.setdata(222111,52453,"jayanti","Baroda",31,'f');
	re1.getdata();
	re1.setempdata(101,20000,"manager");
	re1.getempdata();
	re1.setrempdata();
	re1.getrempdata();
	
	cout<<"\n\nFollowing is hourly employee data :";
	he1.setdata(211111,32453,"janaki","surat",39,'f');
	he1.getdata();
	he1.setempdata(101,20000,"manager");
	he1.getempdata();
	he1.sethempdata();
	he1.gethempdata();
}
