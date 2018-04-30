#include<iostream>
using namespace std;
int main()
{
	int i,j,no;
	cout<<"\n Perfect Numbers 1 to 10000 are \n";
	for(i=1;i<=10000;i++)
	{
		no=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
				no+=j;
		}
		if(no==i)
			cout<<no<<"\n";
	}
}
