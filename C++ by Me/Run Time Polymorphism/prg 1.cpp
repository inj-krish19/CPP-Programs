#include<iostream>
using namespace std;

// CLASS declaration
class staff{
	int code;
	string name;
	public:
		void getdata(int id,string n);
		void display();
};

class teacher: virtual public staff{
	string subject;
	string publications;
	public:
		void getdata(string sub,string pub);
		void display();
};

class typist: virtual public staff{
	double speed;
	public:
		void getdata(double s);
		void display();
};

class officer: virtual public staff{
	double grade;
	public:
		void getdata(double gr);
		void display();
};

// inherites from typist

class regular: public typist{
	double providentFund;
	public:
		void getdata(double PF);
		void display();
};

class casual: public typist{
	double dailyWage;
	public:
		void getdata(double dW);
		void display();
};

// Class memberFunction definition

// base
void staff::getdata(int id,string n){
	code = id;
	name = n;
}
void staff::display(){
	cout<<"Staff ID is "<<code<<endl;
	cout<<"Staff name is "<<name<<endl;
}

// derived
void teacher::getdata(string sub,string pub){
	subject = sub;
	publications = pub;	
}
void teacher::display(){
	cout<<"The employee is TEACHER"<<endl;
	cout<<"teaching subject "<<subject<<endl;
	cout<<"publications: "<<publications<<endl;
}

void typist::getdata(double s){
	speed = s;
}
void typist::display(){
	cout<<"The speed of the typist is "<<speed<<endl;
}

void officer::getdata(double gr){
	grade = gr;
}
void officer::display(){
	cout<<"The grade of the officer is "<<grade<<endl;
}

void regular::getdata(double PF){
	providentFund = PF;
}
void regular::display(){
	cout<<"Regular typist remunerates the PF of "<<providentFund<<endl;
}

void casual::getdata(double dW){
	dailyWage = dW;
}
void casual::display(){
	cout<<"The daily wage Of Typist is "<<dailyWage<<endl;
}


int main()
{
	staff s;
	s.getdata(12,"Mohit");
	s.display();
	
	return 0;
}
