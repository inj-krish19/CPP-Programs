	
	#include <iostream>
#include <cmath>
using namespace std;
int main()
{
cout.fill('.');
	cout.precision(5);//it sets the total digit of a floating value to 4.
	cout.setf(ios::showpoint);// it will show the 0's wherever it's necessary.
	cout.setf(ios::showpos);// it shows the signs of the number of int or float type.

		cout<<"without fixed.."<<endl;
for(int n=1; n<=2; n++)
	{
		cout.setf(ios::internal, ios::adjustfield);// it'll show the internal signs.
		cout.width(5);
		cout << n;
		
		cout.setf(ios::adjustfield);// the sign will be displayed before the total width.  
		cout.width(20);
		cout << sqrt(n) << "\n";
	}
		cout<<endl<<endl<<"with fixed.."<<endl;
	cout.setf(ios::fixed, ios::floatfield);// it helps to keep the precision 
	//after the decimal point and not before.

for(int n=1; n<=2; n++)
	{
		cout.setf(ios::internal, ios::adjustfield);// it'll show the internal signs.
		cout.width(5);
		cout << n;
		
		cout.setf(ios::adjustfield);// the sign will be displayed before the total width.  
		cout.width(20);
		cout << sqrt(n) << "\n";
	}
	cout.setf(ios::scientific, ios::floatfield);// the value will be shown scientifically.
	// here mentissa and exponential way will be shown.
	cout << "\nSQRT(100) = " << sqrt(100) << "\n";
	
}
