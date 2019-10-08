#include<stdio.h>
void main()
{
	void modify();
	modify();
}
void modify()
{
	int i,j,b[5],c[5];
		
	for(i=0;i<=4;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<=4;i++)
	{
		c[j]=b[i]*3;
		printf("%d",c[j]);
	}
}

