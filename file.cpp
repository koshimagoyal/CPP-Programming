#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	float sal;
	fstream fp;
	fp.open("hello.txt",ios::out|ios::binary);
	for(int i=0;i<3;i++)
	{
		cout<<"\n enter sal of employee";
		cin>>sal;
		fp.write((char *)&sal,sizeof(sal));
	}
		
		fp.close();
	fp.open("hello.txt",ios::in|ios::binary);
	for(int i=0;i<3;i++)
	{
		fp.read((char *)&sal,sizeof(sal));
		cout<<sal<<endl;
	}
	
}

