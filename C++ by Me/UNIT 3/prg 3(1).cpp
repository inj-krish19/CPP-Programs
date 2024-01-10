#include<iostream>
using namespace std;

class Deductions;
class Salary{
	
	private :
		
		float BAS;
		float MED;
		float HRA;
		float DA;
		
	protected :
		
	public :
		
		Salary(){
			
			cout << "Enter Basic Salary : ";
			cin >> BAS;
			cout << endl;
			
			cout << "Enter Medical Allowance : ";
			cin >> MED;
			cout << endl;
			
			cout << "Enter House Rent : ";
			cin >> HRA;
			cout << endl;
			
			cout << "Enter Dearness Allowance : ";
			cin >> DA;
			cout << endl << endl;
			
		}
		
		friend ostream & operator >> (ostream &din,Salary S){
			
			cout << endl <<endl
				 << "Basic Salary Is " 			<< S.BAS << endl
				 << "Medical Allowance Is " 	<< S.MED << endl
				 << "House Rent Is " 			<< S.HRA << endl
				 << "Dearness Allowance Is " 	<< S.DA  << endl << endl;
				 
				return (din);
				 
		}		
		
		friend void operator - (Salary & , Deductions &);
		
};

class Deductions{
	
	private :
		
		float IT;
		float PF;
		
	protected :
		
	public :
		
		Deductions(){
			
			cout << "Enter Income Tax : ";
			cin >> IT;
			cout << endl;
			
			cout << "Enter Provident Fund : "; 
			cin >> PF;
			
		}
		
		friend ostream & operator >> (ostream &din,Deductions D){	
				
			cout << "Income Tax Is " 		<< D.IT << endl
				 << "Provident Fund Is " 	<< D.PF << endl << endl;
		}
		
		
		
		friend void operator - (Salary &S,Deductions &D){
			
			cout << "Net Salary Is " 
				 << (S.BAS + S.DA + S.HRA + S.MED - D.IT - D.PF);
		
		}
		
};

int main()
{

	Salary S;
	Deductions D;
	
	cout >> S;
	
	cout >> D;
	
	S - D;
	
}
