#include<iostream>
inline max(int a,int b,int c){
	if(a > b) {
		if(a > c)  return(a);
		else       return (c);
	}
	else{
		if(b > c)	return b;
		else		return c;
	} 
}
using namespace std;
int main()
{
	int number1,number2,number3;	
	cout << "Enter Three Number : " << endl;
	cin >> number1;
	cin >> number2;
	cin >> number3;
	cout << "Maximum Number Is (Done Using Inline Function) : " << max(number1,number2,number3);
}
