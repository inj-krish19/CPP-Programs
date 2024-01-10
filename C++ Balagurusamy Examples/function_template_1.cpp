#include<iostream>
using namespace std;

template <typename T>
T maximum(T x, T y)
{
	return(x>y?x:y);
}
main()
{
	cout<<maximum<int>(3,5)<<endl;
	cout<<maximum<char>('r','e')<<endl;
}

//int maximum(int a, int b)
//{
//	return(a>b?a:b);
//}
//
//char maximum(char a, char b)
//{
//	return(a>b?a:b);
//}
//
//main()
//{
//	cout<<endl<<maximum(4,8)<<"  "<<maximum('t','a');
//	
//}
