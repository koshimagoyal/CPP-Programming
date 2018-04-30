#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	float sal;
	fstream fp,fp1;
	fp.open("hy.txt",ios::out|ios::binary);
	fp1.open("hello.txt",ios::in|ios::binary);
	for(int i=0;i<3;i++)
	{
		fp1.read((char *)&sal,sizeof(sal));
		fp.write((char *)&sal,sizeof(sal));
	}
	fp1.close();
	fp.close();
	fp.open("hy.txt",ios::in|ios::binary);
	for(int i=0;i<3;i++)
	{
		fp.read((char *)&sal,sizeof(sal));
		cout<<sal<<endl;
	}
	
}

