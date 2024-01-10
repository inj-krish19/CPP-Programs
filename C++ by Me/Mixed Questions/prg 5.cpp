#include<iostream>
#include<iomanip>

using namespace std;

class Date{
	
	private :
		int day;
		int month;
		int year;
	public : 
		Date(){
			day = 19;
			month = 2;
			year = 2023;			
		}
		
		Date(int d,int m,int y){
			day = d;
			month = m;
			year = y;
		}
	
		string getMonth(int m){
			
			if(m == 1)	return "January";
			if(m == 2)	return "February";
			if(m == 3)	return "March";
			if(m == 4)	return "April";
			if(m == 5)	return "May";
			if(m == 6)	return "June";
			if(m == 7)	return "July";
			if(m == 8)	return "August";
			if(m == 9)	return "September";
			if(m == 10)	return "October";
			if(m == 11)	return "November";
			if(m == 12)	return "December";
		}
	
		void dayup(){
				
			if(year % 400 == 0 || ( year %4 == 0 && year % 100 == 0 ) ){
				
				if(month == 12 && day == 31){
					
					day = month = 1;
					year ++;	
					
				}
				else if(month == 2){
					
					if(day == 29){
						day = 1;
						month ++;
					}else{
						day++;
					}
					
				}
				else if(month == 4 || month == 6 || month == 9 || month == 11 ){
					if(day == 31){
						day = 1;
						month ++;
					}else{
						day++;
					}
					
				}
				else{
					
					if(day == 30){
						day = 1;
						month ++;
					}else{
						day++;
					}
					
				}
				
			}else{
				
				if(month == 2){
					
					if(day == 28){
						day = 1;
						month ++;
					}else{
						day++;
					}
					
				}
				else if(month == 4 || month == 6 || month == 9 || month == 11 ){
					
					if(day == 31){
						day = 1;
						month ++;
					}else{
						day++;
					}
					
				}
				else{
					
					if(day == 30){
						day = 1;
						month ++;
					}else{
						day++;
					}			
				}
			}
			
		}
	
		void monthup(){
			
		}
		
		void yearup(){
			
		}
	
		void show(){
			cout << "Day : " 	<< day 		<< endl
				 << "Month : " 	<< month 	<< endl
				 << "Year : " 	<< year 	<< endl << endl;
			
			if(day > 0 || ( month > 0 && month < 12 ) || year > 0)	 
			{
				cout << "Style 1 : " << endl << endl;
				cout << day << setw(2) << month << setw(5) << year << endl << endl;
				
				cout << "Style 2 : " << endl << endl;
				if( year - ( (year/100) * 100 ) < 10 )
				{
					cout << month << "/" << day << "/0" << year - ( (year/100) * 100 ) << endl << endl;
				}else{
					cout << month << "/" << day << "/" << year - ( (year/100) * 100 ) << endl << endl;
				}
				
				cout << "Style 3 : " << endl << endl;
				cout << getMonth(month) << " " << day << ", " << year << endl << endl;
			}
						
		}
		
		void operator ==(Date temp){
			// 19 / 02 / 2023	01/11/2022
			
			if(day == temp.day && month == temp.month && year == temp.year){
				cout << "Both Date Are Same" << endl;
			}else{
				
				if(year > temp.year){
					cout << "Date 1 is After Date 2" << endl;
				}
				else{
					
					if(month > temp.month){
						cout << "Date 1 is After Date 2" << endl;
					}else{
						
						if(day > temp.day){
							cout << "Date 1 is After Date 2" << endl;
						}	
						else{
							cout << "Date 2 is After Date 1" << endl;
						}
					}
				}
			}
		
		
		}
		
};

int main(){
	
	int day,month,year;
	
	cout << "FOR FIRST DATE" << endl << endl;
	
	cout << "Enter Date : ";
	cin >> day;
	
	cout << "Enter Month : ";
	cin >> month;
	
	cout << "Enter Year : ";
	cin >> year;
	
	Date D1(day,month,year);

	cout << endl << endl << "FOR SECOND DATE" << endl << endl;
	
	cout << "Enter Date : ";
	cin >> day;
	
	cout << "Enter Month : ";
	cin >> month;
	
	cout << "Enter Year : ";
	cin >> year;
	
	Date D2(day,month,year);

	D1.show();
	D2.show();
	
	D1 == D2;
	
	D1.dayup();
	D1.show();
	D1.monthup();
	D1.show();
	D1.yearup();
	D1.show();

	D2.dayup();
	D2.show();
	D2.monthup();
	D2.show();
	D2.yearup();
	D2.show();

}
