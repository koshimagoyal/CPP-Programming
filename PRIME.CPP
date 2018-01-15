#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,i,j,count;
	cout<<"enter number";
	cin>>a>>b;
	for(j=a;j<=b;j++)
	{        count=0;
		for(i=1;i<=j;i++)
		{
			if(j%i==0)
				count++;
		}
		if(count==2)
			cout<<j<<endl;
	}

	getch();
}