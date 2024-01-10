#include<iostream>
using namespace std;

int main()
{
	int i,size;
	int *vector;
	
	vector = new int[size];

	cout << "Enter Size Of Vector : ";
	cin >> size;
	
	for(i=0;i<size;i++) 
	{
		cout << i+1 << " th index : ";
		cin >> vector[i];
	}
	
	cout << "\n  Vector Is \n  [ ";
	
	for(i=0;i<size;i++) 
	{
		cout << vector[i] ;
		if(i+1 != size)
			cout << " , ";
	}
	
	 cout << " ]";
	
	return 0;
}
