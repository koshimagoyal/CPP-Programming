#include<stdio.h>
void main()
{
	int i,j,r,c;
	printf("\n enter the rows and columns of 2D array");
	scanf("%d %d",&r,&c);
	int a[r][c];
	printf("\n enter the elements of array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Array elements are");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
