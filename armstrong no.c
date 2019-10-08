#include<stdio.h>
void main()
{
	int a,t,q,sum=0;
	printf("enter the number");
	scanf("%d",&a);
	t=a;
	while(a>0)
	{
		q=a%10;
		sum=sum+(q*q*q);
		a=a/10;
	}
	if(t==sum)
	printf("it is armstrong no");
	else
	printf("it is not");
}
