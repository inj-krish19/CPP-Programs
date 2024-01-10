//exception array out of bound
#include<iostream>
using namespace std;

main()
{
	int a[20];
	try{
	for(int i=0;i<=25;i++)
	{
		if(i>=20)
			throw(i);
		else
		{
			a[i]=i;
			printf("%d\n",a[i]);
		}
	}
	}catch(int i)
	{
		cout<<"\nout of bound\n";
	}
}
