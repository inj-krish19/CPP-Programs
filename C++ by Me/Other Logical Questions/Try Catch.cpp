#include<iostream>
using namespace std;

int main()
{
	
	int number;
	
	cout << "Enter Number : ";
	cin >> number;
	
	try{
		
		if( number < 0 )
		{
			throw( number );
		}
		else if( number > 1000)
		{
			throw('a');
		}
	}
	
	catch(int n)
	{
		cout << "Number Should Be Greater Than 0" << endl;
	}
	
	catch(...)
	{
		cout << "Invalid Data";
	}
	
}
