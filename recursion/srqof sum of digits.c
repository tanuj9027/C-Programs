#include<stdio.h>
void main()
{
	int srq(int);
	int a,c;
	printf("enter the number");
	scanf("%d",&a);
	c=sqr(a);
	printf("%d",c);
	
}
int sqr(int n)
{
	int t,p,sum=0;
	if(n>0)
	{
		t=n%10;
		p=t*t;
		sum=sum+p+sqr(n/10);
		return sum;
	}
	else
	{
		return 0;
	}
}
