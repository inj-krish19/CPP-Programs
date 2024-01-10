/*
Construct a class distance having member variables int feets and int inches.
 Design the class to make the following possible :
(i)	to convert this class into the basic data type int which will represent the total
 no. of inches of the class. 
(ii)	to convert a basic data type int to distance class
(iii)	to convert distance class to length class having member variables int meters and
 int centimeters

*/

#include<iostream>
#include<string>
using namespace std;

//I. class to basic;
//II.basic to class;
//III.class to class;

class distance_class{

	int feets;
	int inches;
	
		public :
			// class as basic data types
			distance_class (int fe,int in){
				feets =fe;
				inches =in;
			}
			void print(){
				cout<<" FEETS ="<<feets<<"AND"<<"INCHES"<<inches<<endl;
			}
			int getinches()
			{return(inches);}
			int getfeets()
			{return feets;}
			operator int()
			{return (inches);}
		
};



// second class 

class length_class{
		
	int meters;
	int centimeters;
		
		public :	
			length_class()
			{
			meters=0;
			centimeters=0;
			}
			length_class(int x,int y){
			meters=x;
			centimeters=y;
			}
			void print()
			{
				cout<<" FEETS CONVERT INTO METERS ="<<meters<<endl<<"INCHES CONVERT INTO CENTIMETERS= "<<centimeters<<endl;
			}
					
			length_class(distance_class  p){
			meters =p.getfeets();
			centimeters =p.getinches(); 
			}
			
			
};

int main()
{
	 
	length_class len;
	distance_class d1(19,17);
	
// 
	int total_no_inches;
	
	 total_no_inches=d1;
	
		len = d1;
//	
	len.print();
	
	cout<<" TOTAL NUMBER OF INCHES ="<<total_no_inches;
	
	
	
	return 0;
}

