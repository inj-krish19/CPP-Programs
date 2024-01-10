#include<iostream>
using namespace std;
int main()
{
	int size;
	
	cout << "Enter Size Of Array : ";
	cin >> size;
	
	int i,ary[size],pos,max,newMax;
	
	for(i=0;i<size;i++)
	{
		cout << "ary[" << i << "] : ";
		cin >> ary[i];
		cout << endl;
	}
	
	max = ary[0];
	for(i=0;i<size;i++)
	{
		if(max < ary[i])
		{	
			max = ary[i];
			pos = i;
		}
	}	
	newMax = 0;
	for(i=0;i<size;i++)
	{
		if(i == pos){
			continue;
		}
		else if(newMax < ary[i] && ary[i] != max)
		{	
			newMax = ary[i];
		}
	}
	cout << newMax;
}
