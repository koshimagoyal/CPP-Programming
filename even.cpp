#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int no;
	ofstream fp("even.txt");
	ofstream fp1("odd.txt");
	for(int i=0;i<5;i++)
	{
		cout<<"\n enter the no";
		cin>>no;
		if(no%2==0)
		{
			fp<<no<<"\t";
		}
		else
		{
			fp1<<no<<"\t";
		}
	}
	fp.close();
	fp1.close();
	ifstream fp2("even.txt");
	cout<<"\n even file content";
	while(fp2>>no)
	{
		cout<<no<<endl;	
	}
	fp2.close();
	ifstream fp3("odd.txt");
	cout<<"\n odd file content";
	while(fp3>>no)
	{
		cout<<no<<endl;	
	}
	
}
