#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int j,k,limit;
	double i,v,p,r,n,amt,restore = 1000;
	p = 1000;
	r = 0.1;
	n = 5;
	
	cout << "RATE(%)" << "\t" << "  0.10" << "\t\t  " << "0.11" << "\t\t " << "0.12" << "\t\t  " << "0.13" << "\t\t " << "0.14"  ;
	cout << endl << "\nYEAR";
	
	for(j=0;j<n;j++)
	{
		r = 0.10;
		cout << "\n\n       ----------------------------  FOR P = " << p <<"  -----------------------------  " << endl << endl;
		cout << " " << j << "        ";
		for(i=1;i<=n;i++)
			{
				v = p * pow ((1 + r), i);	// i for year
	//			cout << "Intrest of " << p << " for year " << i  << "\ton " << r << " is \t"<< v << endl;
				cout << v << "\t\t";	
				p = v;
			r+=0.01;
		}
		cout << endl;
		p = restore + (1000* (j+1));
	}
	
	
}
