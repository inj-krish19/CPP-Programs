#include<iostream>
using namespace std;

class temp{
		float fah,cel;
	public : 
		void get_fah(void); 
		void fah_to_cel(void);
};
void temp :: get_fah(void){
	cout << "Enter Fahrenhit : ";
	cin >> fah;
}
void temp ::fah_to_cel(void){

	cel = ((fah - 32) /( 1.8));
	
	cout << "Celsius Of Fahrenhit is .." << cel;
}
int main()
{
	temp c;
	c.get_fah();
	c.fah_to_cel();
}
