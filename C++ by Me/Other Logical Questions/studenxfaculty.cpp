#include<iostream>
#include<iomanip>
using namespace std;

class person{
	public:
		int id;
		string name;
		int age;
		string contact_no;
		
		virtual void getdata() = 0;
		virtual void displaydata() = 0;
};

class faculty : public person{
	float salary;
	string designation;
	public:
		void getdata();
		void displaydata();
};

class student : public person{
	float marks[7];
	float total;
	float percentage;
	public:
		void getdata();
		void displaydata();
};

//definition...
void faculty::getdata(){
	cout<<"Enter Faculty details:="<<endl;
	cout<<"ID: ";
	cin>>id;
	cout<<"Name: ";
	cin>>name;
	cout<<"age: ";
	cin>>age;
	cout<<"contact No: ";
	cin>>contact_no;
	cout<<"Salary: ";
	cin>>salary;
	cout<<"Designation: ";
	cin>>designation;
}

void student::getdata(){
	cout<<"Enter Student details:="<<endl;
	cout<<"ID: ";
	cin>>id;
	cout<<"Name: ";
	cin>>name;
	cout<<"age: ";
	cin>>age;
	cout<<"contact No: ";
	cin>>contact_no;
	
	cout<<"Marks: "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter subject "<<i+1<<": ";
		cin>>marks[i];
	}
}

void faculty::displaydata()
{
	cout<<endl;
	cout<<"Displaying the details of faculty:="<<endl;
	cout<<id<<endl;
	cout<<name<<endl;
	cout<<age<<endl;
	cout<<contact_no<<endl;
	cout<<salary<<endl;
	cout<<designation<<endl;
}
void student::displaydata()
{
	cout<<endl<<"Displaying the details of student:="<<endl<<endl
	<<"Id" << setw(10)
	<<"Name " << setw(10)
	<<"age "<<setw(20)
	<<"Contact " << endl;
	cout << id << setw(10)
		 << name << setw(10)
		 << age << setw(20)
		 << contact_no ;
	cout<<endl<<"Marks:= "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"subject "<<i+1<<": "<<marks[i]<<endl;
	}
}



int main()
{
	person *p[200];
	int person_count = 0;
	char ch;
	
	do{
		cout<<"s = student"<<endl
			<<"f = faculty"<<endl
			<<"e = exit"<<endl;
		cout<<"Enter choice: ";
		cin>>ch;
		cout<<endl;
		
		if( (ch == 'e' or ch == 'E' ) or person_count == 199){
			cout << "Exiting ...";
			return 0;
		}
		else if(ch == 's' or ch == 'S'){
			cout << "Student";
			p[person_count] = new student;
			
			p[person_count]->getdata();
			p[person_count]->displaydata();
			
			person_count ++;
		}
		else if(ch == 'f' or ch == 'F'){
			cout << "Faculty";
			p[person_count] = new faculty;
			
			p[person_count]->getdata();
			p[person_count]->displaydata();
			
			person_count ++;
		} 
		else{
			cout << "Invalid Choice";
		}
		cout << endl;
		
	}while(ch!='E' || ch!='e');
}
