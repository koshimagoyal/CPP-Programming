#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char s[10],nam[50];
	float sal;
	cout<<"enter the file name";
	cin.getline(s,10);
	ofstream fp(s);
	for(int i=0;i<3;i++)
	{
		cout<<"\n enter the name";
		fflush(stdin);
		cin.getline(nam,50);
		cout<<"\n enter the salary";
		cin>>sal;
		fp<<nam<<" "<<sal<<"\t";
	}
	fp.close();
	ifstream fp1(s);
	for(int i=0;i<3;i++)
	{
		fp1>>nam;
		fp1>>sal;
		cout<<nam<<"\t"<<sal<<endl;
	}
}
