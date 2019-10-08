//tnrn//
#include<stdio.h>
void main()
{
	void sum(void);
	sum();
}
void sum()
{
	int a,sum=0,i;
	printf("enter the number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		sum=sum+i*i;
	}
	printf("sum=%d",sum);
}
