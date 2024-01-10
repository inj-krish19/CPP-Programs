#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
main()
{
	float y;
	int i;
	float j;
	
	
	cout << "\t\t\t\t\tDO FULL SCREEN FOR BETTER VIEW ";
	
	cout << endl << endl << endl << " x " << setw(10);
	for(i=0;i<10;i++)
	{
		cout << (float(i)/10) << setw(15);
	}
	cout << endl << endl << "--------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	for(i=0;i<10;i++)
	{
		cout << i ;
		for(j=0;j<1;j+=0.1)
		{
			cout << setw(15) << exp(-(i + j));
		}
		cout << endl;
	}		
}
