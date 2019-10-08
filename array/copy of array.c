#include<stdio.h>
void main()
{
	int a[5],i,j,b[5];
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0,j=4;j<=0;i++,j--)
	{
	   b[j]=a[i];
	}
	for(j=0;j<=4;j++)
	{
		printf("%d\n",b[j]);
	}
}
