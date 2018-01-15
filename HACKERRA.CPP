#include<iostream.h>
#include<conio.h>
void main()
{
	int m,n,i,j,p,a[5][5],b[5],c[5],q;
	clrscr();
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		cin>>b[i];
		for(j=0;j<b[i];j++)
			cin>>a[i][j];
	}
	for(i=0;i<n;i++)
	{
		cin>>p>>q;
		for(j=0;j<b[p];j++)
		{
			if(j==q)
			c[i]=a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<c[i]<<"\n";
	}
	getch();
}