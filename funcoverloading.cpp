#include<iostream>
using namespace std;
float area(float side)
{
	return side*side;
}
float area(float length,float breadth)
{
	return length*breadth;
}
int main()
{
		float s,l,b;
		cout<<"\n enter the side of square";
		cin>>s;
		cout<<"\n enter the length and breadth of rectangle";
		cin>>l>>b;
		cout<<"\n Area of square is "<<area(s);
		cout<<"\n Area of rectangle is "<<area(l,b);
}
