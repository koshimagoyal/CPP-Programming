#include<iostream>
using namespace std;
class customer
{
	string name;
	int acno;
	float bal;
	public:
		void insert(string s,int acc,float b)
		{
			name=s;
			acno=acc;
			bal=b;
		}	
		void display()
		{
			cout<<"NAME ="<<name<<endl;
			cout<<"Account No = "<<acno<<endl;
			cout<<"Balance = "<<bal<<endl;
		}
		int search(int acc)
		{
			if(acno==acc)
				return 1;
			else
				return 0;
		}
		void modify(string s,float b)
		{
			name=s;
			bal=b;
		}
};
int main()
{
	customer c[10];
	int n,acc,flag;
	float bal;
	string s;
	cout<<"\n enter the no of customers whose details you want to enter";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\n enter the name";
		cin>>s;
		cout<<"\n enter the account number";
		cin>>acc;
		cout<<"\n enter the balance in account";
		cin>>bal;
		c[i].insert(s,acc,bal);
	}
	cout<<"\n details of all the customers"<<endl;
	for(int i=0;i<n;i++)
	{
		c[i].display();
	}
	cout<<"\n enter the account number of customer you want to search";
	cin>>acc;
	for(int i=0;i<n;i++)
	{
		flag=c[i].search(acc);
		if(flag==1)
		{
			c[i].display();
			break;
		}
	}
	if(flag==0)
		cout<<"\n Invalid Account Number"<<endl;
	cout<<"\n enter the account number of customer whose details you want to modify";
	cin>>acc;
	for(int i=0;i<n;i++)
	{
		flag=c[i].search(acc);
		if(flag==1)
		{
			c[i].display();
			cout<<"\n enter the new name and new balance";
			cin>>s>>bal;
			c[i].modify(s,bal);
			break;
		}
	}
	if(flag==0)
		cout<<"\n Invalid Account Number"<<endl;
	cout<<"\n Modified details of all the customers"<<endl;
	for(int i=0;i<n;i++)
	{
		c[i].display();
	}
	
}
