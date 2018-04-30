#include<iostream>
using namespace std;
int main()
{
	float s=5.2;
	int d=2;
	try
	{
		if(d==2)
			throw d;
		else if(s==5.2)
			throw s;
	
	}
	catch(float msg)
	{
		cout<<msg;
	}
	catch(int msg)
	{
		cout<<msg;
	}
	
}
