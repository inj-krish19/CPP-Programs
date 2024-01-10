#include<iostream>
using namespace std;
/*
class operation{
	//int ary[10];
	public :
		int mean(int a[10]);
}; 

int operation::mean(int a[10])
{
	cout << "Mean is ..";	
}*/
int main()
{
	int i,number[10],n;
	float sum,mean,median,mode;
	
	cout << "Enter A Number Till You Want To Get Array : ";
	cin >> n;
	cout << endl;
	
	for(i=0;i<n;i++)
	{
		cout << "Enter Number "<< i+1 <<" : ";
		cin >> number[i];
		sum = sum + number[i];
		cout << endl;
	}
	
	for(i=0;i<n;i++)
	{
		cout << "Number "<< i+1 <<"	: " << number[i] << endl;
	}
	
	mean = sum / n;
	
	
	cout << "Mean Is .. " << mean << endl;
	
	if(n % 2 == 0){
		i = n/2 ;
		median = (number[i] + number[i-1]) / 2;
	}
	else{
		i = n/2 ;
		median = number[i];
	}
	
	cout << "Median Is .. " << median << endl;
	
	mode = (3*median) - (2*mean);
	
	cout << "Mode Is .. " << mode << endl;
	
	return 0;
}
