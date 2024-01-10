#include<iostream>
using namespace std;

class BankAccount;
class vector;
class DM;
class DB;

class BankAccount{
		int count;
		string name;
		string acn;
		string act;
		double balance;
		double transaction;
	public :
		//	default
		BankAccout(){		}
		
		// for Question 1
		BankAccount
		(string n,string ac,string type,double bal)
		{	
			name = n;
			acn = ac;
			act = type;
			balance = bal;
			cout << endl << "Question 1's Constuctor Called" << endl;
		}
		
		// for Question 3
		BankAccount
		(int c,string n,string ac,string type,double bal)
		{	
			count = c + 1; 
			name = n;
			acn = ac;
			act = type;
			balance = bal;
			cout << endl << "Question 3's Constuctor Called" << endl;
		}
		
		void deposit(void);
		void withdraw(void);
		void display(void);
};

class vector{
		int size;
		int arr[99];
	public : 
		//	default
		vector(){		}
		
		//	Question 2
		vector(int index,int value)
		{
			arr[index] = value;	
			cout << endl << "Question 2's Constructor Called" << endl;
		}
		
		//	Question 4 is Same As Question 2
		vector(int index,int value,int qn)
		{
			arr[index] = value;	
			cout << endl << "Question 4's Constructor Called" << endl;
		}
		
		void creation(int);
		friend addition(vector ,vector );
		void modify(void);
		void scale(void);
		void display(void);
};

class DM{
		float meter;
		float cms;
	public :
		//	default
		DM(){		}
		
		// Constructor
		DM(float m,float c)
		{
			meter = m;cms = c;
			cout << endl << "Question 5's Constuctor DM Called" << endl;
		}
		void Display(void);
		friend add(DM ,DB);
};

class DB{
		float foot;
		float inch;
	public :
		//	default
		DB(){		}
		
		// Constructor
		DB(float f,float i)
		{
			foot = f;inch = i;
			cout << endl << "Question 5's Constuctor DB Called" << endl;	
		}
		
		void Display(void);
		friend add(DM ,DB);
};

int main()
{
	//	Question 1
	BankAccount A("KRISH","1902","Savings",20000);
	//	Question 2
	vector B(0,1);
	//	Question 3
	BankAccount C(1,"KRISH","1902","Savings",20000);
	//	Question 4
	vector D(0,1,4);
	//	Question 5
	DM E(1,1);
	DB F(1,1);
//	cout << "Hello World";
}
