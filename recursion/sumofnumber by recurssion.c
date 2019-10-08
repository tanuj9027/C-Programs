#include<stdio.h>
void main()
{
	int sum(int);
	int k,n;
	printf("enter the number");
	scanf("%d",&n);
	k=sum(n);
	printf("%d",k);
}
int sum(int a)
{
	int t,s;
	if(a>0)
	{
	t=a%10;
	s=t+sum(a/10);
	return s;
	}
	else
	{
	return 0;
	}
}

