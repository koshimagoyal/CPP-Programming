#include<iostream>
using namespace std;
template <class t1,class t2>
void add(t1 a,t2 b)
{
	cout<<"\n Addition = "<<a+b;
}
template <class t1,class t2>
void sub(t1 a, t2 b)
{
	cout<<"\n Subtraction = "<<a-b;
}
int main()
{
	add(10,2.5);
	add(10,20);
	add(2.3,3.5);
	sub(2,3);
	sub(3.5,2);
	sub(2.4,3.5);
}
