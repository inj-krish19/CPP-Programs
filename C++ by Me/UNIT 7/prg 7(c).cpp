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
	int i,n,x,a=0;
	float sq,fact,step,temp;
	
	cout << "Enter Number To Find Cos  : ";
	cin >> x;
	
	cout << "Enter Number To End :  ";
	cin >> n;
	
	temp = 1;
	cout << "   1" << endl;
	
	for(i=1;i<=n;i++)
	{
		if(i % 2 == 0)
		{
			a++;
			
			if(a % 2 == 0)
			{
				cout << " + " ;
			}
			else{
				cout << " - " ;
			}
//			cout << step;
			
			sq = pow(x,i);
			cout << sq << " / ";
			fact = factorial(i);
			_reset();
			cout << fact << endl;
			
			step = sq/fact;
			
			if(a % 2 == 0)
			{
				temp = temp  + step;
			}
			else{
				temp = temp - step;
			}
//			cout << temp;
		}
	}
	cout << " Cos of " << x << " is " << temp;
}
