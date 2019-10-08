#include<stdio.h>
void main()
{
	int n,q,t,sum;
	printf("enter the number to be reversed");
	scanf("%d",&n);
	t=n;
	for(;n!=0;)
	{
		q=n%10;
	 	sum=(sum*10)+q;
		n=n/10;
	}
	if(t==sum)
	printf("it is pellindrome no");
	else 
	printf("not");

}
