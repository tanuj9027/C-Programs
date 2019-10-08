#include<stdio.h>
void main()
{
	int n,q,sum=0;
	printf("enter the no.u wnt to sum");
	scanf("%d",&n);
	for(;n!=0;)
	{
		q=n%10;
		sum=sum+q;
		n=n/10;
	}
	printf("%d",sum);
}
