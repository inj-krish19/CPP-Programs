#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
using namespace std;

ostream &currency(ostream &output){
	output<<"Rs";
	return output;
}

ostream &form(ostream &output){
	output.setf(ios::showpos);
	output.setf(ios::showpoint);
	output.fill('*');
	output.precision(1);
//	output<<setiosflags(ios::fixed);
	output<<setw(10);
	return output;
}

int main(){
	cout<< currency << form << 7864.5;
	
	getch();
	return 0;
}
