#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{	
	
	float sum,temp = 0,i;
	int n,x;
	
	cout << endl << endl << endl << "\t" <<  "QUESTION B" << setw(10) << endl << endl << endl;
	
	cout << "Enter Number To End and Sum : ";
	cin >> n;
	
	for(i=1;i<=n;i++)
	{
		temp = pow((1/i),i);
		sum += temp;
		cout << temp ;
		if(i != n) cout << " + ";
	}
	cout << " = " << sum;
}
