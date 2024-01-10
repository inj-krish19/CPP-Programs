#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;


main(int argc, char *argv[])
{
	int array[10]={11,22,33,44,55,66,77,88,99,100};
	ofstream feven,fodd;
	feven.open(argv[1]);
	fodd.open(argv[2]);
	for(int i=0;i<9;i++)
	{
		if(array[i]%2==0)
			feven<<array[i];
		else
			fodd<<array[i];	
	} 
	feven.close() ;
	fodd.close() ;
}





