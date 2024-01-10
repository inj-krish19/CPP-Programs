#include<iostream>
using namespace std;

class Coord{
	
	private : 
		int x;
		int y;
	public :
		
		Coord(){	x = y =0; show(); }
		Coord(int a,int b){	
			x = a;
			y = b;
			
			show();
		}
		
	void show(){	
		cout << endl << "X : " << x << endl
		 	 << "Y : " << y << endl << endl;
	}
	
	void operator --(){
		x--;y--;
	}
	Coord operator --(int a){
		x--;y--;
	}
	
	void operator +(){	
		if(x < 0){	x *= -1; }
		if(y < 0){	y *= -1; }
	
		show();	
	}
	
	void operator +(int value){
	
		x += value;
		y += value;
	
		show();
	}
	
	
};

int main(){
	
	int x,y;
	
	cout << "Enter Coordinate X : ";
	cin >> x;
	
	cout << "Enter Coordinate Y : ";
	cin >> y;	
	
	Coord Point(x,y);
	
	-- Point;
	Point.show();
	Point --;
	Point.show();
	
	+Point;
	Point + 5;
}
