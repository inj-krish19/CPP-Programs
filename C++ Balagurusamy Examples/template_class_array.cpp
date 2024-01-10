#include<iostream>
using namespace std;

template <typename t1,typename t2>
class array
{
	t1 a;
	t2 b;
	public:
		array(t1 x, t2 y)
		{
			a=x;
			b=y;
		}
		void display ()
		{
			cout<<"\nValues of array are : "<<a<<" and "<<b;
		}
};
main()
{
	array<int,float> arr(4,5.6);
	arr.display();
	
}
