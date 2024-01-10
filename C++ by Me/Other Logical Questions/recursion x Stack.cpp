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
	{		return 1;	}
}
int main()
{	
	
	float sum,temp = 0;
	int n,x,i,a,b;

	cout << endl << endl << endl << "\t" <<  "QUESTION A" << setw(10) << endl << endl << endl;

	cout << "Enter Number To End and Sum : ";
	cin >> n;	
	
	for(i=1;i<=n;i++)
	{ 
		if( i%2 != 0 && i > 1)
			temp = pow(i,i);
			cout << temp << endl;
	}
	
	

}
