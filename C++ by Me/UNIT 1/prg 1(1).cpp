#include<iostream>
using namespace std;
class FLOAT{
		static int count;
		float number;
	public :
//		FLOAT(){	}
		FLOAT()
		{	
			cout << "Enter Floating Point Value : ";
			cin >> number;
			cout << endl << endl << "Number " << count << " Is " << number ;
			cout << endl << endl;
			count ++;
		}
		void operator +(FLOAT temp)
		{
			cout << endl << endl << "Addition Of Two Number Is " 
			<< (number + temp.number)<< endl << endl;
		}
		void operator -(FLOAT temp)
		{
			cout << endl << endl << "Substraction Of Two Number Is " 
			<< (number - temp.number)<< endl << endl;
		}
		void operator *(FLOAT temp)
		{
			cout << endl << endl <<  "Multiplication Of Two Number Is " 
			<< (number * temp.number)<< endl << endl;
		}
		void operator /(FLOAT temp)
		{
			cout << endl << endl <<  "Divison Of Two Number Is " 
			<< (number / temp.number)<< endl << endl;
		}
};
int FLOAT :: count = 1; 
int main()
{
	FLOAT obj1,obj2;
	obj1 + obj2;
	obj1 - obj2;
	obj1 * obj2;
	obj1 / obj2;
}
