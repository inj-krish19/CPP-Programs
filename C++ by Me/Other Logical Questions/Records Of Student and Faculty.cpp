#include<iostream>
using namespace std;

class Person{
	
		int id;
		string name;
		int age;
		string contact;
	
	public :
		 
		virtual void getData(void) = 0;
		virtual void display(void) = 0;
	
};

class Student : public Person{
	
		float marks[5];
		float total=0,percentage;
	
	public :
		 

	
		void display(){
			cout << "Id Is " << id << endl
				 << "Name Is " << name << endl
				 << "Age Is " << age << endl 
				 << "Contact Is " << contact << endl;		 
			for(int i=0;i<5;i++){
				cout << "Mark Of Subject" << i+1 << " Is " << marks[i] << endl;
				total += marks[i];
			}
				 
		}
		
		void givePercentage(){
			
			percentage = (total / 500) * 100;
			
			cout << "Total Is " << total
				 << "Percentage Is " << percentage; 
			
		}
	
};

/*class Person{
	
		float salary;
		float std_per[120];
	
	public :
		 
		virtual void getData(void) = 0;
		virtual void display(void) = 0;
	
};*/


int main(){
	
	Person *member[200];
	
}
