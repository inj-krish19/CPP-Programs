#include<iostream>
using namespace std;

class A{
	
		int a;
	public :
		A(){}
		A(int a){
			a =1;
			cout << "A : " << a << endl;
		}
	
};

class B : public A{
	
		int b;
	public :
		B(){
			b = 2;
			cout << "B : " << b;
			A(b);
		}
	
};

int main(){
	
	B x;
	
}
