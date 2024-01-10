#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,size;
	
	cout << "Enter Size Of Data : ";
	cin >> size;

	float x[size],y[size],vari[size],s_dev,temp=0,variance = 0,sum_x = 0,sum_y = 0;
	float mean_x,mean_y;
	
	for(i=0;i<size;i++)
	{
		cout << "x[" << i <<"] : ";
		cin >> x[i]; 
//		cout << "y[" << i <<"] : ";
//		cin >> y[i]; 
		sum_x = x[i] + sum_x;
		sum_y = y[i] + sum_y;
	}
	
	mean_x = sum_x / size;
	cout << endl << endl << "Displaying Data : " << endl << endl << endl;
	
	for(i=0;i<size;i++)
	{
		cout << "x[" << i <<"] : " << x[i] << endl; 
//		cout << "y[" << i <<"] : " << y[i] << endl << endl; 
		vari[i] = x[i] - mean_x; 
//		cout << vari[i];
		temp = pow(vari[i],2);
		variance = variance + temp ;
	}
	

//	mean_y = sum_y / size;
	
	cout << "Mean Of X is : " << mean_x << endl;// << "Mean of Y is : " << mean_y << endl;
	cout << "Variance Is : " << variance << endl;
	s_dev = sqrt(variance);
	cout << "Variance Is : " << s_dev << endl;
}
