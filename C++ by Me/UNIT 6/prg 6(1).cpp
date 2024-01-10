#include<iostream>
using namespace std;

class Point{
	
		int x,y;
	public : 
	
		Point(){
			x = y = 0;
		}
		
		Point(int a,int b){
			x = a;
			y = b;
		}
		
		void display(){
			
			cout << endl << endl
				 << "X : " << x << endl
				 << "Y : " << y << endl;
		}
	
		void operator --(int a){
			x--;
			y--;
		}
	
		Point operator --(void){
			x--;
			y--;
		}
	
		void operator *(Point A){
			
			cout << "A  * B " << endl << endl
				 << "A"
			
		}
	
};

int main(){
	
	int x,y;
	
	cout << "Enter X Coodinate For Point 1 : ";
	cin >> x;
	
	cout << "Enter Y Coodinate For Point 1 : ";
	cin >> y;
	
	Point A(x,y);
		
	cout << "Enter X Coodinate For Point 2 : ";
	cin >> x;
	
	cout << "Enter Y Coodinate For Point 2 : ";
	cin >> y;
	
	Point B(x,y);
	
	A.display();
	B.display();
	
	A--;
	--B;
	
	A.display();
	B.display();
	
	
}
