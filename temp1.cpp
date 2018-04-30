#include<iostream>
using namespace std;
template <class type>
class A
{
	type *arr;
	int size;
	public:
		A(int n)
		{
			arr=new type [n];
			size=n;
		}
		void read()
		{
			for(int i=0;i<size;i++)
				cin>>arr[i];
		}
		void add(type ele)
		{
			size++;
			int i;
			type *arr1 = new type[size];
			for(i=0;i<size-1;i++)
				arr1[i]=arr[i];
			arr1[i]=ele;
			delete arr;
			arr = arr1;
		}
		void display()
		{
			for(int i=0;i<size;i++)
				cout<<arr[i]<<"\t";
		}
		void del(type ele)
		{
			int s=size;
			s--;
			int i;
			type *arr1 = new type[s];
			int j=0;
			for(i=0;i<size;i++)
			{
				if(arr[i]==ele)
					continue;
				else
				{
						arr1[j]=arr[i];
						j++;
				}
				
			}
			delete arr;
			arr=arr1;
			size=s;
		}
};
int main()
{
	int s,no;
	cout<<"\n enter size for int array";
	cin>>s;
	A <int> aa(s);
	cout<<"\n enter elements";
	aa.read();
	cout<<"\n enter size for float array";
	cin>>s;
	A <float> ab(s);
	cout<<"\n enter elements";
	ab.read();
	cout<<"\n enter size for char array";
	cin>>s;
	A <char> ac(s);
	cout<<"\n enter elements";
	ac.read();
	cout<<"\n int array"<<endl;
	aa.display();
	cout<<"\n float array"<<endl;
	ab.display();
	cout<<"\n char array"<<endl;
	ac.display();
	cout<<"\n insert element";
	cin>>no;
	aa.add(no);
	cout<<"update array"<<endl;
	aa.display();
	cout<<"\n delete element";
	cin>>no;
	aa.del(no);
	cout<<"update array"<<endl;
	aa.display();
}
