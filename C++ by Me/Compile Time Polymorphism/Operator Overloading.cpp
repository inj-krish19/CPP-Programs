#include<iostream>
using namespace std;

class Student{
		int id;
		string name;
		void Print(){
			cout << "Id Is " << id << endl;
			cout << "Name Is "	<< name << endl << endl;
		}
	public :
		Student(){		}
		Student(int a,string b){
			id = a;
			name = b;
			Print();
		}
		void temp(){	Print();	}
		
		/*	UNARY OPERATOR OVERLOADING	*/
		
		int operator ++(){
			cout << "Unary Operator Overloaded " << endl;
			return (12);
		}		
		
		/*	BINARY OPERATOR OVERLOADING	*/
		void operator +(Student s)
		{
			cout << "Binary Operator Overloaded " << endl;
			
		}
};

int main()
{
	int ans;
	Student S1(47,"KRISH");
	Student S2(1,"VISHAL");
	Student S3;
	S3 = S2;
	S3.temp();
	
	/*	UNARY OPERATOR	
			++ , -- , - [EX . -A]	*/
	
	/*	BINARY OPERATOR	
		+ , - [EX . A - B ] , * , / ,							
		% ,  < , > , << , >> , <= , >=
		== , =! ,  << , >> , && , || ,
		! , & ,  | , << , >> , ~ , ^
		= , += , -= , *= , /= , %=	*/
		
	/*	TERNARY OPERATOR 	?:	*/	
	
	S1.operator++();
	++S1;	

	S3.operator +(S1);
	S3 + S1;
	
}
