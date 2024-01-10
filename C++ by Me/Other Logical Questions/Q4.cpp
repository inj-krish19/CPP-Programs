#include<iostream>
using namespace std;

class Person{
	protected : 
		int code;
		string name;
	public :
		void create(){
			cout << endl << "CLASS PERSON " << endl;
			cout << "Enter ID : ";
			cin >> code;
			cout << "Enter Name : ";
			cin >> name;
			display();
		}
		void display(){
			cout << endl << endl;
			cout << endl << "CLASS PERSON " << endl;
			cout << "ID Is " << code << endl;
			cout << "Name Is " << name << endl;
		}
		void update(){
			int tid;
			cout << "Enter ID : ";
			cin >> tid;
			if(code == tid){
				cout << "Now You Can Update Record\n";
				cout << "Enter Name : ";
				cin >> name;
			}else{
				cout << "Record Not Available\n";
			}
			display();	
		}
	
};

class Admin : virtual public Person{
	protected : 
		int exp;
	public :
		void create(){
			cout << endl << "CLASS ADMIN " << endl;
			cout << "Enter ID : ";
			cin >> code;
			cout << "Enter Name : ";
			cin >> name;
			cout << "Enter Experience : ";
			cin >> exp;
			display();
		}
		void display(){
			cout << endl << endl;
			cout << endl << "CLASS ADMIN " << endl;
			cout << "ID Is " << code << endl;
			cout << "Name Is " << name << endl;
			cout << "Experience Is " << exp << endl;
		}
		void update(){
			int tid;
			cout << "Enter ID : ";
			cin >> tid;
			if(code == tid){
				cout << "Now You Can Update Record\n";
				cout << "Enter Name : ";
				cin >> name;
				cout << "Enter Experience : ";
				cin >> exp;
			}else{
				cout << "Record Not Available\n";
			}
			display();	
		}
	
};

class Account : virtual public Person{
	protected : 
		int pay;
	public :
		void create(){
			cout << endl << "CLASS ACCOUNT " << endl;
			cout << "Enter ID : ";
			cin >> code;
			cout << "Enter Name : ";
			cin >> name;
			cout << "Enter Pay : ";
			cin >> pay;
			display();
		}
		void display(){
			cout << endl << endl;
			cout << endl << "CLASS ACCOUNT " << endl;
			cout << "ID Is " << code << endl;
			cout << "Name Is " << name << endl;
			cout << "Pay Is " << pay << endl;
		}
		void update(){
			int tid;
			cout << "Enter ID : ";
			cin >> tid;
			if(code == tid){
				cout << "Now You Can Update Record\n";
				cout << "Enter Name : ";
				cin >> name;
				cout << "Enter Pay : ";
				cin >> pay;
			}else{
				cout << "Record Not Available\n";
			}
			display();	
		}
	
};

class Master : public Admin,public Account{
	protected : 
	public :
		void create(){
			cout << endl << "CLASS MASTER " << endl;
			cout << "Enter ID : ";
			cin >> code;
			cout << "Enter Name : ";
			cin >> name;
			cout << "Enter Experience : ";
			cin >> exp;
			cout << "Enter Pay : ";
			cin >> pay;
			display();
		}
		void display(){
			cout << endl << endl;
			cout << endl << "CLASS MASTER " << endl;
			cout << "ID Is " << code << endl;
			cout << "Name Is " << name << endl;
			cout << "Experience Is " << exp << endl;
			cout << "Pay Is " << pay << endl;
		}
		void update(){
			int tid;
			cout << "Enter ID : ";
			cin >> tid;
			if(code == tid){
				cout << "Now You Can Update Record\n";
				cout << "Enter Name : ";
				cin >> name;
				cout << "Enter Experience : ";
				cin >> exp;
				cout << "Enter Pay : ";
				cin >> pay;
			}else{
				cout << "Record Not Available\n";
			}
			display();	
		}
	
};


int main(){
	
	Person P;
	Admin AD;
	Account AC;
	Master M;
	
	P.create();
	AD.create();
	AC.create();
	M.create();
	
	AD.update();
	M.update();
	
}
