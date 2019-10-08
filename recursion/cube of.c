#include<stdio.h>
void main()
{
	void cub(int);
	int a;
	printf("enter the numer");
	scanf("%d",&a);
	cub(a);
}
void cub(int n)
{
	int t,sum=0;
	if(n>0)
	{
		t=n*n*n;
		cub(n-1);
		sum=sum+t;
		printf("%d",sum);
	}
	else
	{
		printf(" ");
	}
}
