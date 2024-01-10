#include<iostream>
using namespace std;

template<class T = int>

class Axes{
		T x,y;
	public :
		Axes(){	x = y = 0;	}
		Axes(T a,T b){
			x = a;y = b;
		}
		
		void show(){
			cout << "X : " << x << endl
				 << "Y : " << y << endl << endl;
		}
		T add(T a){return (x+y);}

};


int main(){
	
	try{
		
		Axes <>A(9,2);
		A.show();
		
		int a;
		a = A.add(0);
		cout << a << endl;
		
		throw a;
		
	}catch(...){
		cout << "\nError Caught \n";
	}
}

