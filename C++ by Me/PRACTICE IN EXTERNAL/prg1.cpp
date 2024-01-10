#include<iostream>
#include<cstdarg>
using namespace std;

// UNIT 4

/*	function overloading

int add(int , int );
int add(int , int ,int);
int add(int , int ,int , int );
int add(int , int ,int ,int , int );

int main(){
	
	cout <<	add(5,2) 			<< endl
		 <<	add(367,92,99)		<< endl
		 << add(1,9,35,1000)	<< endl
		 << add(46,29,56,9,82)	<< endl;
	
}

int add(int a,int b) {	return a+b;	}
int add(int a,int b,int c) {	return a+b+c;	}
int add(int a,int b,int c,int d) {	return a+b+c+d;	}
int add(int a,int b,int c,int d,int e) {	return a+b+c+d+e;	}				*/

/*	default argument	

int add(int ,int , int , int , int );

int main(){
	
	cout << add(9,11,3,5,2);
	
}

int add(int a,int b=0,int c=0,int d=0,int e=0){
	return a+b+c+d+e;
}																				*/

/*	unlimited arguments	

void func(int count,...){
	
	int value;
	char val;
	
	va_list list;
	va_start(list,count);
	
	for(int i=1;i<count;i++){
		value = va_arg(list,int);
		cout << value << endl;	
	}
	
	val = va_arg(list,int);
	cout << val;
	val = va_arg(list,int);
	cout << val;
	
	va_end(list);
	
}

int main(){
	
	func(10,1,2,3,4,5,6,7,8,9,'A','B');
	
}																*/
