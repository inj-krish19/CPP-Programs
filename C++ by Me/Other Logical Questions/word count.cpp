#include<iostream>
using namespace std;
int main(){
	char str[] = "C   fgff     fg   f 0     Is Better      Than C++ ";
	int count = 1,length = 0;
	for(int i=0;str[i]!='\0';i++){
		if(str[i] == ' '){
			if( (str[i+1] > 'a' && str[i+1] < 'z') || (str[i+1] > 'A' && str[i+1] < 'Z') ){
				count ++;
			}
		}
	}
	cout << "Count Is " << count;
}
