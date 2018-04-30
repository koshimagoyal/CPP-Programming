#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int num;
	vector <int> vec;
	cout<<"\n enter elements";
	for(int i=0;i<10;i++)
	{
		cin>>num;
		vec.push_back(num);
	}
	cout<<"\n elements are"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<vec[i]<<"\t";
	}
	vector <int> :: iterator itr = vec.begin();
	vec.insert(itr+4,1,25);
	vec.erase(vec.begin()+8);
	cout<<"\n updated"<<endl;
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<"\t";
	}
}
