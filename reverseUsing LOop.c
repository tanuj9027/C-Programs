#include<stdio.h>
void main()
{
	int a,q,sum=0,t;
	printf("the no is \n");
	scanf("%d",&a);
	t=a;
	for(;a>0;)
	{
		q=a%10;
		sum=(sum*10)+q;
		a=a/10;
	}
	if(t==sum)
	printf(" it is pallindrome number");
	else
	printf("it is not");
}
