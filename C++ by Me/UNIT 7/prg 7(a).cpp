#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int ans=1;
int factorial(int n)
{
	ans = n * ans;
	if(n != 1)
	{	factorial(n-1);	}
	else
	{		return (ans);	}
}
void _reset()
{
	ans = 1;
}
int main()
{	
	
	float step1,step2,answer=0,sum,temp = 2,fact,cube;
	int n,x,i,a=0,b;

	cout << endl << endl << endl << "\t" <<  "QUESTION A" << setw(10) << endl << endl << endl;

	cout << "Enter Number To Perform Sin : ";
	cin >> x;

	cout << "Enter Number To End and Sum : ";
	cin >> n;	
	
	temp = x;
	b = n/2;
	cout << "b" << b;
	
	cout << "\t" << x  << endl << " - " ;
	for(i=1;i<=n;i++)
	{ 
		if( i%2 != 0 && i > 1)
		{	
			a++;
			cube = pow(x,i);
			fact = factorial(i);
			_reset();
			cout << cube << " / ";
			cout << fact << endl;
			
			step1 = cube/fact;
			
//			cout << endl << "step : "<<step1 << endl;
			
			if(a %2 != 0 )
			{
				if(a < b-1)
				{
					cout << endl <<  " + "; 
				}
				temp = temp - step1;
			}
			else
			{
				
				cout << endl << " - "; 	
				temp = temp + step1;
			}
		}
	}
	
	answer  = temp;
	
	cout << endl <<endl << endl << "Sin of " << x  << " is "<< answer;
}
