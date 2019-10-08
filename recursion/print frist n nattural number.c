#include<stdio.h>
void main()
{
	int fsnn(int);
	int n,s;
	printf("enter the number ");
	scanf("%d",&n);
	s=fsnn(n);
	printf("%d",s);
}
int fsnn(int a)
{
	int sum,t;
	if(a==0)
	{
		return 0;
	}
	else
	{
		sum=fsnn(a-1);
		return sum;
	}
}

