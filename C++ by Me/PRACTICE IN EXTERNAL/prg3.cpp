#include<iostream>
using namespace std;

class IDK;
class Date;

class Date{
	
	private :
		int day,month,year;
	protected :
	public :
		Date(){
			day = 2;
			month = 1;
			year = 2024;
		}	
		Date(int a,int b,int c){
			day = a;
			month = b;
			year = c;
			show();
		}
		
		void show(){
			cout << "Date Is " << day << "/" 
				 << month << "/" << year << endl;
		}
		
		/*	Real Time Operator Overloading	*/
		
		friend ostream & operator <<(ostream &dout,Date &temp){
			temp.show();
		}
		
		friend istream & operator >>(istream &din,Date &temp){
			cout << "Enter Date : ";
			din >> temp.day;
			cout << "Enter Month : ";
			din >> temp.month;
			cout << "Enter Year : ";
			din >> temp.year;
			return (din);
		}
	
		/*	Soul Changed	*/
	
		/*friend ostream & operator <<(ostream &dout,Date &temp){
			dout << "Enter Date : ";
			cin >> temp.day;
			dout << "Enter Month : ";
			cin >> temp.month;
			dout << "Enter Year : ";
			cin >> temp.year;
		}
		
		friend istream & operator >>(istream &din,Date &temp){
			temp.show();
		}															*/
	
		void operator ++(int a){
			cout << "prefix\n";
			day++;
			show();
		}
		
		void operator ++(){
			cout << "postfix\n";
			day++;
			show();
		}
		
//		void operator +(int X){
//			cout << "Date Is " << (day+X);
//		}
		
		Date operator +(int X){
	
			Date temp;
			temp.day = day + X;
			temp.month = month;
			temp.year = year;
			
			return temp;
		}
		friend Date operator +(int X,Date &temp){
	
			temp.day = temp.day + X;
			temp.month = temp.month;
			temp.year = temp.year;
			
			return temp;
		}
		
		int days(){	return day;	}
		int months(){	return month;	}
		// basic to Date
		
		Date(int s){
			month = s - 30;
			day = s - month ;
			year = 2000 + s/20;
			show();
		}
		
		// Date to basic
		
		operator int(){
			return (day*month);
		}
		
		// Date to IDK		
//		operator IDK(){
//			IDK A;
//			A.a = day;
//			A.b = month;
//			return A;
//		}
};


class IDK{
	public : 
		int a,b;
		IDK(){
			a = b = 0;
		}
		IDK(Date A){
			a = A.days();
			b = A.months();
			show();
		}
		void show(){
			cout << "A : " << a << endl
				 << "B : " << b << endl;
 		} 
};

int main(){
	
	Date A = Date(19,02,2005);
//	
////	cin >> A;
////	cout << A;
//	
//	cin >> A;	
//	cout << A;
//	
//	A++;
//	++A;
//	
//	A + 2;
//	
//	A = A + 2;
//	A.show();
//	A = 2 + A;
//	A.show();
//	
//	
//	A = 39;
//	
//	int a;
//	
//	a = A;
//	cout << a;
	
	IDK Nice;
	Nice = A;
	Nice.show();
	
}
