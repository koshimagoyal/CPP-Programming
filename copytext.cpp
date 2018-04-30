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
	ifstream fp1("b.txt");
	for(int i=0;i<3;i++)
	{
		fp1>>nam;
		fp1>>sal;
		fp<<nam<<" "<<sal<<"\t";
	}
	fp.close();
	fp1.close();
	ifstream fp2(s);
	for(int i=0;i<3;i++)
	{
		fp2>>nam>>sal;
		cout<<nam<<"\t"<<sal<<endl;
	}
}
