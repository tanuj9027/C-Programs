#include<stdio.h>
void main()
{
	int prime(int);
	int a,t;
	printf("enter the to find perfect number");
	scanf("%d",&a);
	t=prime(a);
	printf("%d",t);
}
int prime(int n)
{
	int i,s;
	if(n%i==0)
	{
	return i;
	}
	else
	{
		s=s+prime(i+1);
		return s;
	}
}
