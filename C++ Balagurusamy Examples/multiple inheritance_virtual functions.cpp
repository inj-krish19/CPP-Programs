//virtual functions

#include<iostream>
using namespace std;

class person
{
      long int adhaar_no;
      string fname,mname,lname;
      int age;
      long int mobile_no;
      public:
             void setpdata(long int a,string b,string c,string d,int e,long int f)
             {
                  adhaar_no = a;
                  fname=b;
                  mname=c;
                  lname=d;
                  age=e;
                  mobile_no=f;
             }
             void getpersondata()
             {
                  cout <<endl<<adhaar_no<<fname<<endl<<mname<<endl<<lname<<endl<<age<<endl<<mobile_no;
             } 
};
class teacher:public virtual person
{
	int t_id,experience;
	string designation;
	public:
		settdata(int a, int b,string d)
		{
			t_id=a;
			experience =b;
			designation=d;
		}
		void display_data()
		{
			cout<<endl<<t_id<<endl<<experience<<endl<<designation;
			
		}
};
class student:public virtual person
{
	int enroll_no,percentage;
	string last_degree;
	public:
		setsdata(int a, int b,string d)
		{
			enroll_no=a;
			percentage =b;
			last_degree=d;
		}
		void display_data()
		{
			cout<<endl<<enroll_no<<endl<<percentage<<endl<<last_degree;
			
		}
};
class ta:public teacher,public student
{
	int duration;
	public:
		getduration(int d)
		{
			duration =d;
		}
		display()
		{
			getpersondata();
			teacher::display_data();
			student::display_data();
			cout<<endl<<duration;
		}
};
main()
{
	ta ta1;
	ta1.setpdata(123456,"pooja","ashok","mehta",23,875763); 
	ta1.setsdata(10001,97,"BE");
	ta1.settdata(201,12,"lecturer");
	ta1.getduration(2);
	ta1.display();
}
