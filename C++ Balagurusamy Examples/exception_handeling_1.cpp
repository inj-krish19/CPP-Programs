//exception handeling

#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"\nEnter a :";
	cin>>a;
	cout<<"\nEnter b :";
	cin>>b;
	try{
		if(b!=0)
			cout<<a/b;
		else
			throw(b);
	
	}catch(int i){
		cout<<"\nException caught";
	}

}




