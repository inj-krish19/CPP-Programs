#include<iostream>
#include<fstream>
using namespace std;

class Temp{
		int a,b;
		string c;
	public :
		Temp(){	a = b = 0; c="KRISH";	}
		Temp(int x,int y,string z){
			a = x;b = y;c = z;
		}
		void show(){
			cout << "A : " << a << endl 
				 << "B : " << b << endl 
				 << "C : " << c << endl << endl;
		}
		
		void writeInFile(){
			
			ofstream fileO;
			
			fileO.open("Hello.txt",ios::out|ios::app|ios::ate);
			
			fileO << "This Is Hello.txt\n\n\n";
			
		}
		
};

int main(){
	
	Temp T(2,5,"AKANSHA"),X;
	
	T.show();
	
	fstream fileI;
	
	fileI.open("Hello.txt");
			
	fileI.write( (char *) &T, sizeof(Temp));
	
	fileI.seekg(0,ios::beg);
	
	fileI.read( (char *) &X,sizeof(Temp) );
	
	X.show();
	
	fileI.seekp(0,ios::end);
	
	T.writeInFile();
		
}

/*	int main(){
	
	char name[5];
	fstream outf;
	
	outf.open("Hello.txt",ios::in|ios::out);

	outf << "Hello";
	
	
//	outf.seekg(0,ios::beg);
	outf.seekp(0,ios::beg);
	
	outf >> name;
	cout <<name;
}	*/
